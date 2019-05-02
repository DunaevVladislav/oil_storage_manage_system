#ifndef OIL_STORAGE_MANAGE_SYSTEM_OIL_STORAGE_H
#define OIL_STORAGE_MANAGE_SYSTEM_OIL_STORAGE_H

#include "oil_storage_def.h"
#include <stddef.h>

/**
 * Хранилище нефти
 */
struct _oil_storage;
typedef struct _oil_storage oil_storage;

/**
 * создать нефтехранилище
 * @param storage_tanks_count количество резервуаров
 * @return указатель на нефтехранилище
 */
oil_storage* create_oil_storage(size_t storage_tanks_count);

/**
 * переключить резервуар в рабочее состояние
 * @param os указатель на нефтрехранилище
 * @param number номер резервуара
 */
void turn_on_tank(oil_storage* os, unsigned int number);

/**
 * переключить резервуар в нерабочее состояние
 * @param os указатель на нефтрехранилище
 * @param number номер резервуара
 */
void turn_off_tank(oil_storage* os, unsigned int number);

/**
 * Получить состояние работы резевуара
 * @param os указатель на нефтрехранилище
 * @param number номер резервуара
 * @return STORAGE_TANK_OFF - нерабочее состояние, STORAGE_TANK_ON - рабочее состояние
 */
int get_state_tank(const oil_storage* os, unsigned int number);

/**
 * установить минимальный уровень нефти в резервуаре
 * @param os указатель на нефтехранилище
 * @param number номер резервуара
 * @param min_level минимальный уровень нефти
 */
void set_minimum_level_tank(oil_storage* os, unsigned int number, unsigned int min_level);

/**
 * получить минимальный уровень нефти в резервуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резевуара
 * @return минимальный уровень нефти
 */
unsigned int get_minimum_level_tank(const oil_storage* os, unsigned int number);

/**
 * установить максимальный уровень нефти в резервуаре
 * @param os указатель на нефтехранилище
 * @param number номер резервуара
 * @param max_level минимальный уровень нефти
 */
void set_maximum_level_tank(oil_storage* os, unsigned int number, unsigned int max_level);

/**
 * получить максимальный уровень нефти в резервуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резевуара
 * @return минимальный уровень нефти
 */
unsigned int get_maximum_level_tank(const oil_storage* os, unsigned int number);

/**
 * получить текущий уровень нефти в резервуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резевуара
 * @return уровень нефти
 */
unsigned int get_current_level_tank(const oil_storage* os, unsigned int number);

/**
 * уничтожить нефтрехранилище
 * @param os укзатель на нефтрехранилище
 */
void finalize_oil_storage(oil_storage* os);

/**
 * включить насос закачки в резервуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резервуара
 */
void turn_on_download_pump(oil_storage* os, unsigned int number);

/**
 * выключить насос закачки в резервуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резервуара
 */
void turn_off_download_pump(oil_storage* os, unsigned int number);

/**
 * получить состояние работы насоса загрузки в резервуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резевуара
 * @return PUMP_OFF - нерабочее состояние, PUMP_ON - рабочее состояние
 */
int get_state_download_punp(const oil_storage* os, unsigned int number);

/**
 * установить скорость закачки насоса в резевуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резевуара
 */
void set_speed_download_pump(oil_storage* os, unsigned int number);

/**
 * получить скорость закачки насоса в резевуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резевуара
 * @return скорость закачки
 */
unsigned int get_speed_download_pump(const oil_storage* os, unsigned int number);

/**
 * включить насос откачки в резервуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резервуара
 */
void turn_on_upload_pump(oil_storage* os, unsigned int number);

/**
 * выключить насос откачки в резервуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резервуара
 */
void turn_off_upload_pump(oil_storage* os, unsigned int number);

/**
 * получить состояние работы насоса отгрузки в резервуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резевуара
 * @return PUMP_OFF - нерабочее состояние, PUMP_ON - рабочее состояние
 */
int get_state_upload_punp(const oil_storage* os, unsigned int number);

/**
 * установить скорость откачки насоса в резевуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резевуара
 */
void set_speed_upload_pump(oil_storage* os, unsigned int number);

/**
 * получить скорость откачки насоса в резевуаре
 * @param os указатель на нефтрехранилище
 * @param number номер резевуара
 * @return скорость откачки
 */
unsigned int get_speed_upload_pump(const oil_storage* os, unsigned int number);

#endif //OIL_STORAGE_MANAGE_SYSTEM_OIL_STORAGE_H