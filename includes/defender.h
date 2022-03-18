/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mydefender-anthony.faure
** File description:
** defender
*/

#ifndef DEFENDER_H
    #define DEFENDER_H

    #include <math.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window/Keyboard.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <time.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>

    #define ONTW "images/tower/tower1_2.png"
    #define ONTR "images/tower/tower1_3.png"
    #define ONFO "images/tower/tower1_4.png"
    #define TWTW "images/tower/tower2_2.png"
    #define TWTR "images/tower/tower2_3.png"
    #define TWFO "images/tower/tower2_4.png"
    #define TRTW "images/tower/tower3_2.png"
    #define TRTR "images/tower/tower3_3.png"
    #define TRFO "images/tower/tower3_4.png"
    #define FOTW "images/tower/tower4_2.png"
    #define FOTR "images/tower/tower4_3.png"
    #define FOFO "images/tower/tower4_4.png"

typedef struct button {
    sfVector2f pos;
    sfVector2f scale;
    sfTexture *text_wth;
    sfTexture *text_curs;
    sfTexture *clic;
    sfSprite *spr;
    int text;
    int lenght;
    int hight;
    sfText *str;
    char *texte;
} button_t;

typedef struct ennemy {
    sfVector2f pos;
    int type;
    float hp;
    sfTexture *text;
    sfSprite *spr;
    sfIntRect rect;
    sfMusic *dead;
    int angle;
    float speed;
    int vir;
    float dmg;
    int live;
    int moove;
    int attack;
} ennemy_t;

typedef struct versus {
    int ctr;
    struct ennemy v1;
    struct ennemy v2;
    struct ennemy v3;
    struct ennemy v4;
    struct ennemy v5;
    struct ennemy v6;
    struct ennemy v7;
    struct ennemy v8;
    struct ennemy v9;
    struct ennemy v10;
    struct ennemy v11;
    struct ennemy v12;
    struct ennemy v13;
    struct ennemy v14;
    struct ennemy v15;
    struct ennemy v16;
    struct ennemy v17;
    struct ennemy v18;
    struct ennemy v19;
    struct ennemy v20;
    struct ennemy base;
} versus_t;

typedef struct tower {
    sfVector2f pos;
    int level;
    int type;
    int angle;
    int status;
    sfTexture *text;
    sfSprite *spr;
    sfIntRect rect;
    sfMusic *up;
    float dmg;
    int focus;
    int shoot;
} tower_t;

typedef struct towers {
    struct tower t1;
    struct tower t2;
    struct tower t3;
    struct tower t4;
    struct tower t5;
    struct tower t6;
    struct tower t7;
    struct tower t8;
} towers_t;

typedef struct params {
    int key;
    char *buy;
    char *inv;
    sfKeyCode key_buy;
    sfKeyCode key_inv;
} params_t;

typedef struct inventary {
    int qty1;
    int qty2;
    int qty3;
    int qty4;
} inventary_t;

typedef struct musics {
    sfMusic *menu;
    sfMusic *in_game;
    sfMusic *buy;
    float vol_music;
    float vol_sound;
    int run;
} musics_t;

typedef struct wave {
    char *wavelvl1;
    char *wavelvl2;
    char *wavelvl3;
    char *wavelvl4;
    char *wavefile;
    int len1;
    int len2;
    int len3;
    int len4;
    int len5;
    int ctr;
    int map;
} wave_t;

typedef struct tree {
    int buy1;
    int buy2;
    int buy3;
    int buy4;
    int buy5;
    int buy6;
    float buy_mod;
    float dmg_mod;
    float up_mod;
    float life_mod;
    float speed_mod;
    float outdmg_mod;
} tree_t;

typedef struct anim {
    sfTexture *text;
    sfSprite *spr1;
    sfSprite *spr2;
    sfSprite *spr3;
    sfSprite *spr4;
    sfSprite *spr5;
    sfSprite *spr6;
    sfSprite *spr7;
    sfSprite *spr8;
    sfSprite *spr9;
    sfSprite *spr10;
    sfIntRect rect1;
    sfIntRect rect2;
    int ctr;
} anim_t;

typedef struct defender {
    int angle;
    int map;
    int fen;
    int framerate;
    sfRenderWindow *window;
    struct params params;
    struct inventary inv;
    struct musics sound;
    struct wave wave;
    struct towers all;
    struct versus vs;
    struct anim enn;
    struct tree tree;
    int mouse;
    int fen_size;
    sfEvent event;
    sfVector2f slid1;
    sfVector2f slid2;
    int hud;
    int money;
    int tower;
    sfVector2f drop;
    char *towers;
    int ctr;
    int score;
    int shoot1;
    int shoot2;
    int shoot3;
    int shoot4;
    int anim;
    float hp;
} defender_t;

//sources/main/main.c

int main(int argc, char **argv);

//sources/my/my_putstr.c

int my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int strcompare(char *str1, char *str2);
int strncompare(char *str1, char *str2, int n);
char *my_itoa(int nb);
int my_atoi(char *str);

//sources/defender/defender.c

int set_up(char *file);
defender_t set_defend(char *str);
inventary_t set_inv(void);
params_t set_params(void);
void check_map(defender_t *defend, button_t button);
defender_t set_part2(defender_t new, char *str);
versus_t set_vs(void);

//sources/defender/error/usage.c

int usage(void);
int error_args(void);

//sources/defender/events/event_handling.c

int analyse_event(sfEvent event, defender_t *defend);
void close_menu(button_t btn1, button_t btn2, button_t btn3, defender_t *dfnd);
void close_btn(button_t btn);
void key_press(defender_t *defend, sfEvent event);
int check_mouse(defender_t *defend);

//sources/defender/game/game.c

int do_game(defender_t *defend);
void do_menu(defender_t *defend);
void print_menu(defender_t *dfnd, button_t play, button_t exit, button_t btn);
void draw_menu(defender_t *dfnd, button_t play, button_t exit, button_t btn);
void print_update(defender_t *defend, sfVector2f pos, char *path);

//sources/defender/game/print_map.c

void do_map(defender_t *defend);
void print_sprite(defender_t *defend, int x, int y, char *path);
void print_mini_maps(defender_t *defend);
void wind_frameupdate(defender_t *defend, button_t *btn);
void set_frame(defender_t *defend);

//sources/defender/game/map_selected.c

void map_1(defender_t *defend, int lose, char *tower);
void map_2(defender_t *defend, int lose, char *tower);
void map_3(defender_t *defend, int lose, char *tower);
void map_4(defender_t *defend, int lose, char *tower);
void print_towers(defender_t *defend, tower_t *tower);

//sources/defender/game/settings.c

void do_settings(defender_t *defend);
void do_choice(defender_t *defend);
void wind_sizeupdate(button_t *btn, defender_t *defend);
void find_res(button_t *btn, defender_t *defend);
void wind_sizeupdate2(button_t *btn, defender_t *defend);

//sources/defender/game/settings2.c

void draw_set(defender_t *dfnd, button_t btn1, button_t btn3, button_t btn2);
void text_settings(defender_t *defend);
void print_text(defender_t *dfnd, sfVector2f pos, char *str, sfVector2f scale);
void destroy_fnd(sfTexture *text, sfSprite *sprite);
void print_btn_scoreboard(defender_t *defend);

//sources/defender/game/print_tower.c

void print_tower(defender_t *defend, tower_t *tower);
void print_spr_scale(defender_t *defend, int x, int y, char *path);

//sources/defender/game/pause.c

void do_pause(defender_t *defend);
void print_pause(defender_t *dfnd, button_t play, button_t exit);
void draw_pause(defender_t *dfnd, button_t play, button_t exit);
void draw_close(defender_t *defend, sfTexture *fnd, sfSprite *spr_fnd);

//sources/defender/button/buttons.c

button_t new_btn(int x, int y, char *str, float scale);
void btn_update(button_t *btn, defender_t *defend);
int btn_quit(button_t *btn, defender_t *defend);
sfText *btn_text(char *str, int x, int y, sfVector2f scale);
void menu_to_menu(int new, button_t *btn, defender_t *defend);

//sources/defender/button/buttons2.c

void print_btn(defender_t *defend, button_t btn);
void find_map(defender_t *defend, button_t *button);
void find_btn(defender_t *defend, button_t *button);
void choose(defender_t *defend, button_t *button);
void find_map2(defender_t *defend, button_t *button);

//sources/defender/music/music.c

musics_t set_zic(void);
void check_zic(defender_t *defend);

//sources/defender/score/score.c

void do_scoreboard(defender_t *defend);
int get_stat(char *str);
void print_score(defender_t *defend);
void print_score2(defender_t *defend);
void print_score3(defender_t *defend);

//sources/defender/score/score2.c

void print_score4(defender_t *defend);
void do_scoreboard2(defender_t *defend);

//sources/defender/HUD/play.c

void do_play(defender_t *defend);
void print_text_inv(defender_t *defend, sfVector2f scale);
void print_inv_hud(defender_t *defend);
void print_text_buy(defender_t *defend, sfVector2f scale);
void print_market_hud(defender_t *defend);

//sources/defender/events/key_choice.c

void set_keys(defender_t *defend);
button_t new_btn2(int x, int y, char *str, float scale);
void set_bind(defender_t *defend, button_t *btn);
void new_bind(defender_t *defend, button_t *btn);
void binded(defender_t *defend, sfEvent event);

//sources/defender/events/switch.c

char test_1(defender_t *defend, int flag, sfEvent event);
char test_2(defender_t *defend, int flag, sfEvent event);
char test_3(defender_t *defend, int flag, sfEvent event);
char test_4(defender_t *defend, int flag, sfEvent event);
void key_press2(defender_t *defend, sfEvent event);

//sources/defender/events/frame.c

void find_frame(defender_t *defend, button_t *btn);
void frame2(defender_t *defend, button_t *btn);
void set_volume(defender_t *defend);
void slider_update(defender_t *defend, button_t *btn, sfVector2f *pos);
void sond_update(defender_t *defend, button_t *btn, float new);

tower_t new_tower(int type, char *path, sfVector2f pos, defender_t *defend);
tower_t set_dmg(tower_t tower, defender_t *defend);

//sources/defender/game/game2.c

int game2(defender_t *defend, sfEvent event);

//Sources/defender/errors/howtoplay.c

void do_htp(defender_t *defend);
void print_htp(defender_t *defend);

//sources/defender/buy/buy.c

void buy_syst(defender_t *defend);
void buy_tone(defender_t *defend, sfVector2f w);
void buy_ttwo(defender_t *defend, sfVector2f w);
void buy_tthree(defender_t *defend, sfVector2f w);
void buy_tfour(defender_t *defend, sfVector2f w);

//sources/defender/game/setgame.c

void set_game(defender_t *defend);

//Sources/defender/ennemy/ennemy.c

void do_ennemy(defender_t *defend);
void check_wave(defender_t *defend);
void check_wave2(defender_t *defend);
void find_vs(defender_t *defend, int x, int y, int type);
void find_vs2(defender_t *defend, int x, int y, int type);
void find_vs3(defender_t *defend, int x, int y, int type);
void find_vs4(defender_t *defend, int x, int y, int type);
void find_vs5(defender_t *defend, int x, int y, int type);

//sources/defender/HUD/do_hud.c

void print_tree_hud(defender_t *defend);
void print_tree_text2(defender_t *defend, sfVector2f scale1);
void do_hud(defender_t *defend);
tree_t set_tree(void);

//sources/defender/HUD/do_hud2.c

int btn_tree(defender_t *defend);
int btn_tree1(defender_t *defend, sfVector2i a, sfVector2f w);
int btn_tree2(defender_t *defend, sfVector2i a, sfVector2f w);
void print_green(defender_t *dfnd, sfVector2f pos, char *str, sfVector2f scal);
void do_buy(defender_t *defend, int flag);

//sources/defender/HUD/print_circle/print_circle.c

void draw_tower_range(defender_t *defend);
void draw_circle(int x, int y, int radius, defender_t *defend);

//sources/defender/HUD/print_circle/circle_map1.c

void circle_map1(defender_t *defend);
void circle_map1_1(defender_t *defend);

//sources/defender/HUD/print_circle/circle_map2.c

void circle_map2(defender_t *defend);
void circle_map2_1(defender_t *defend);
void circle_map2_2(defender_t *defend);

//sources/defender/HUD/print_circle/circle_map3.c

void circle_map3(defender_t *defend);
void circle_map3_1(defender_t *defend);
void circle_map3_2(defender_t *defend);
void circle_map3_3(defender_t *defend);

//sources/defender/HUD/print_circle/circle_map4.c

void circle_map4(defender_t *defend);
void circle_map4_1(defender_t *defend);
void circle_map4_2(defender_t *defend);
void circle_map4_3(defender_t *defend);

//sources/defender/events/drop.c

void do_drop(defender_t *defend);
void drop_map0(defender_t *defend);
void drop_map1(defender_t *defend);
void drop_map2(defender_t *defend);
void drop_map3(defender_t *defend);

//sources/defender/events/drop2.c

void find_pos_tower1_1(defender_t *dfnd);
void find_pos_tower1_2(defender_t *dfnd);
void find_pos_tower1_3(defender_t *dfnd);
void find_pos_tower1_4(defender_t *dfnd);

//sources/defender/events/drop3.c

void find_pos_tower2_1(defender_t *dfnd);
void find_pos_tower2_2(defender_t *dfnd);
void find_pos_tower2_3(defender_t *dfnd);
void find_pos_tower2_4(defender_t *dfnd);

//sources/defender/events/drop4.c

void find_pos_tower3_1(defender_t *dfnd);
void find_pos_tower3_2(defender_t *dfnd);
void find_pos_tower3_3(defender_t *dfnd);
void find_pos_tower3_4(defender_t *dfnd);

//sources/defender/events/drop5.c

void find_pos_tower4_1(defender_t *dfnd);
void find_pos_tower4_2(defender_t *dfnd);
void find_pos_tower4_3(defender_t *dfnd);
void find_pos_tower4_4(defender_t *dfnd);

//sources/defender/waves/wave.c

wave_t set_wave(char *str);
char *wave1(wave_t *new);
char *wave2(wave_t *new);
char *wave3(wave_t *new);
char *wave4(wave_t *new);

//sources/defender/events/drag.c

void drag1(defender_t *defend, sfVector2f w, char *path1, char *path2);
void drag2(defender_t *defend, sfVector2f w, char *path3, char *path4);
void print_rect(defender_t *defend, sfVector2f pos, char *path, sfIntRect rec);

//sources/defender/ennemy/new_vs.c

ennemy_t new_ennemy(int type, int x, int y, defender_t *defend);
void print_ennemy(ennemy_t *vX, defender_t *defend);
ennemy_t find_type(ennemy_t new, int type, int angle, defender_t *defend);
ennemy_t find_type2(ennemy_t new, int type, int angle, defender_t *defend);
sfIntRect type0(int angle);
sfIntRect type1(int angle);
sfIntRect type2(int angle);
sfIntRect type3(int angle);

void moove_ennemy(defender_t *defend);
void find_nb(defender_t *defend);
void do_action(defender_t *defend, ennemy_t *vs);

//sources/defender/tower/*

void touchable(defender_t *defend);
void twr_upgrade(tower_t *tower, defender_t *defend);
void twr_upgrade2(tower_t *tower, defender_t *defend);
void find_level(defender_t *defend, tower_t *tower);
void level_max1(defender_t *defend, tower_t *tower);
void find_level2(defender_t *defend, tower_t *tower);
void level_max2(defender_t *defend, tower_t *tower);
void find_leve3(defender_t *defend, tower_t *tower);
void level_max3(defender_t *defend, tower_t *tower);
void find_leve4(defender_t *defend, tower_t *tower);
void level_max4(defender_t *defend, tower_t *tower);
void do_upgrade(defender_t *defend, tower_t *tower);

//sources/defender/tower/in_circle*

void in_circle(sfVector2f posc, int radius, defender_t *defend,
    int nb);
void check_ennemy1(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy2(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy3(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy4(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy5(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy6(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy7(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy8(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy9(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy10(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy11(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy12(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy13(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy14(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);
void check_ennemy15(sfVector2f posc, sfVector2i tower, defender_t *defend,
    int i);

//source/defender/tower/detect_map/*

void detect_map1(defender_t *defend);
void detect_map1_1(defender_t *defend);
void detect_map2(defender_t *dfnd);
void detect_map2_1(defender_t *dfnd);
void detect_map2_2(defender_t *dfnd);
void detect_map3(defender_t *dfnd);
void detect_map3_1(defender_t *dfnd);
void detect_map3_2(defender_t *dfnd);
void detect_map3_3(defender_t *dfnd);
void detect_map3_4(defender_t *dfnd);
void detect_map4(defender_t *dfnd);
void detect_map4_1(defender_t *dfnd);
void detect_map4_2(defender_t *dfnd);
void detect_map4_3(defender_t *dfnd);
void detect_map4_4(defender_t *dfnd);

//sources/defender/ennemy/*
void moove_ennemy(defender_t *defend);
void find_nb(defender_t *defend);
void do_action(defender_t *defend, ennemy_t *vs);
void angle0(defender_t *defend, ennemy_t *vs);
void angle1(defender_t *defend, ennemy_t *vs);
void act_map2(defender_t *defend, ennemy_t *vs);
void act_map2_1(defender_t *defend, ennemy_t *vs);
void act_map3(defender_t *defend, ennemy_t *vs);
void act_map3_1(defender_t *defend, ennemy_t *vs);
void angle3(defender_t *defend, ennemy_t *vs);
void angle4(defender_t *defend, ennemy_t *vs);
void angle_choice(defender_t *defend, ennemy_t *vs);
void act_map0(defender_t *defend, ennemy_t *vs);
void act_map1(defender_t *defend, ennemy_t *vs);
void find_nb2(defender_t *defend);
void find_nb3(defender_t *defend);
void find_nb4(defender_t *defend);
void find_nb5(defender_t *defend);
void find_nb6(defender_t *defend);
void find_nb7(defender_t *defend);
void find_nb9(defender_t *defend);
void find_nb8(defender_t *defend);
void find_nb10(defender_t *defend);
void destroy_sounds(defender_t defend);
void sound_up(defender_t *defend, tower_t *tower);

void find_shoot(defender_t *defend, tower_t *tower);
void do_shoot(defender_t *defend, ennemy_t *vs, tower_t *tower);

void add_ctr(defender_t *defend);
void find_angle(ennemy_t *vs, tower_t *tower, defender_t *defend);
void change(ennemy_t *vs, tower_t *tower, defender_t *defend);
void print_laser(defender_t *defend, sfVector2f pos, int angle);
void spe1(defender_t *defend, ennemy_t *vs);
void do_anim(defender_t *defend);
anim_t new_anim(void);
void print_anim(anim_t *anim, defender_t *defend);
void mv_anim(sfSprite *spr, defender_t *dfnd);
int check_win(defender_t *defend);
float find_hp2(defender_t *defend, float nb);
int find_len(char *str);
int check_file(char *str);
int null_file(void);
void check_score(defender_t *defend);
int my_getnbr(char const *str);
void find_top(tower_t *tower);
void wave_file(defender_t *defend);
wave_t set_wave2(wave_t new);

#endif /* !DEFENDER_H */
