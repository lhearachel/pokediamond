#ifndef POKEDIAMOND_MESSAGE_FORMAT_H
#define POKEDIAMOND_MESSAGE_FORMAT_H

#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "trainer_data.h"
#include "bg_window.h"

typedef struct MessageFormatAttrs
{
    u8 data[4];
} MessageFormatAttrs;

typedef struct MessageFormatFields
{
    MessageFormatAttrs attrs;
    struct String *msg;
} MessageFormatFields;

typedef struct MessageFormat
{
    u32 count;
    u32 heap_id;
    MessageFormatFields *fields;
    struct String *buffer;
} MessageFormat;

struct UnkStruct_0200B870_sub
{
    u8 filler_00[16];
    u32 unk_10;
    u8 * unk_14;
};

struct UnkStruct_0200B870
{
    void * unk_0;
    struct UnkStruct_0200B870_sub * unk_4;
    u16 data[16];
    u32 unk_28;
};

MessageFormat * MessageFormat_new(u32 heap_id);
MessageFormat * MessageFormat_new_custom(u32 nstr, u32 strlen, u32 heap_id);
void MessageFormat_delete(MessageFormat *messageFormat);
void MessageFormat_InitFields(MessageFormatFields *fields);
void SetStringAsPlaceholder(MessageFormat *messageFormat, u32 idx, struct String * str, MessageFormatAttrs *attrs);
void BufferString(MessageFormat *messageFormat, u32 idx, struct String * str, u32 a3, u32 a4, u32 a5);
void BufferPlayersName(MessageFormat *messageFormat, u32 idx, struct PlayerData * data);
void BufferRivalsName(MessageFormat *messageFormat, u32 idx, struct SaveBlock2 * sav2);
void BufferFriendsName(MessageFormat *messageFormat, u32 idx, struct SaveBlock2 * sav2);
void BufferBoxMonSpeciesName(MessageFormat *messageFormat, u32 idx, struct BoxPokemon * mon);
void BufferBoxMonSpeciesNameWithArticle(MessageFormat *messageFormat, u32 idx, struct BoxPokemon * mon);
void BufferSpeciesNameWithArticle(MessageFormat *messageFormat, u32 idx, u32 species);
void BufferBoxMonNickname(MessageFormat *messageFormat, u32 idx, struct BoxPokemon * mon);
void BufferBoxMonOTName(MessageFormat *messageFormat, u32 idx, struct BoxPokemon * mon);
void BufferIntegerAsString(MessageFormat *messageFormat, u32 idx, s32 num, u32 ndigits, s32 strConvMode, BOOL whichCharset);
void BufferMoveName(MessageFormat *messageFormat, u32 idx, u32 move);
void BufferRibbonNameOrDesc(MessageFormat *messageFormat, u32 idx, u32 ribbon);
void BufferAbilityName(MessageFormat *messageFormat, u32 idx, u32 ability);
void BufferNatureName(MessageFormat *messageFormat, u32 idx, u32 nature);
void BufferItemName(MessageFormat *messageFormat, u32 idx, u32 item);
void BufferItemNameWithIndefArticle(MessageFormat *messageFormat, u32 idx, u32 item);
void BufferItemNamePlural(MessageFormat *messageFormat, u32 idx, u32 item);
void BufferPocketName(MessageFormat *messageFormat, u32 idx, u32 pocket);
void BufferTypeName(MessageFormat *messageFormat, u32 idx, u32 type);
void BufferStatName(MessageFormat *messageFormat, u32 idx, u32 stat);
void BufferStatusName(MessageFormat *messageFormat, u32 idx, u32 status);
void BufferFlavorDislikeText(MessageFormat *messageFormat, u32 idx, u32 flavor);
void BufferLandmarkName(MessageFormat *messageFormat, u32 idx, u32 landmark);
void BufferPoketchAppName(MessageFormat *messageFormat, u32 idx, u32 app);
void BufferTrainerClassName(MessageFormat *messageFormat, u32 idx, u32 trclass);
void BufferTrainerClassNameWithArticle(MessageFormat *messageFormat, u32 idx, u32 trclass);
void BufferTrainerClassNameFromDataStruct(MessageFormat *messageFormat, u32 idx, struct TrainerDataLoaded * tr);
void BufferTrainerName(MessageFormat *messageFormat, u32 idx, u32 msgno);
void BufferTrainerNameFromDataStruct(MessageFormat *messageFormat, u32 idx, struct TrainerDataLoaded * trdata);
void BufferUndergroundItemName(MessageFormat *messageFormat, u32 idx, u32 item);
void BufferUndergroundItemNameWithArticle(MessageFormat *messageFormat, u32 idx, u32 item);
void BufferUndergroundTrapName(MessageFormat *messageFormat, u32 idx, u32 trap);
void BufferUndergroundTrapNameWithArticle(MessageFormat *messageFormat, u32 idx, u32 trap);
void BufferContestJudgeName(MessageFormat *messageFormat, u32 idx, u32 judge);
void BufferContestMessage(MessageFormat *messageFormat, u32 idx, u32 msg);
void BufferContestMessage2(MessageFormat *messageFormat, u32 idx, u32 msg);
void BufferInterviewQuestion(MessageFormat *messageFormat, u32 idx, u32 question);
void BufferInterviewAnswer(MessageFormat *messageFormat, u32 idx, u32 answer);
void BufferDecorationName(MessageFormat *messageFormat, u32 idx, u32 decor);
void BufferDecorationNameWithArticle(MessageFormat *messageFormat, u32 idx, u32 decor);
void BufferGenderSymbol(MessageFormat *messageFormat, u32 idx, u32 gender);
void BufferBoxName(MessageFormat *messageFormat, u32 idx, struct PCStorage * pc, s32 boxno);
void BufferGymName(MessageFormat *messageFormat, u32 idx, u32 gym);
void BufferTimeOfDayName(MessageFormat *messageFormat, u32 idx, u32 time);
void BufferCountryName(MessageFormat *messageFormat, u32 idx, u32 country);
void BufferCityName(MessageFormat *messageFormat, u32 idx, u32 a2, u32 a3);
void FUN_0200B518(MessageFormat *messageFormat, u32 idx, u32 a2);
void BufferSealName(MessageFormat *messageFormat, u32 idx, u32 seal);
void BufferSealNamePlural(MessageFormat *messageFormat, u32 idx, u32 seal);
void BufferLocationName(MessageFormat *messageFormat, u32 idx, u16 location);
void BufferPoffinName(MessageFormat *messageFormat, u32 idx, u32 poffin);
void BufferFashionName(MessageFormat *messageFormat, u32 idx, u32 fashion);
void BufferFashionNameWithArticle(MessageFormat *messageFormat, u32 idx, u32 fashion);
void BufferContestBackgroundName(MessageFormat *messageFormat, u32 idx, u32 bg);
void BufferEasyChatWord(MessageFormat *messageFormat, struct SaveBlock2 * sav2, u32 r5, u32 idx, u32 sp28);
void BufferMonthNameAbbr(MessageFormat *messageFormat, u32 idx, u32 month);
void MessageFormat_UpperFirstChar(MessageFormat *messageFormat, u32 idx);
void StringExpandPlaceholders(MessageFormat *messageFormat, struct String * dest, struct String * src);
void MessageFormat_ResetBuffers(MessageFormat *messageFormat);
struct UnkStruct_0200B870 * MessagePrinter_new(u32 color1, u32 color2, u32 color3, u32 heap_id);
void MessagePrinter_delete(struct UnkStruct_0200B870 * a0);
void FUN_0200B9A8(struct UnkStruct_0200B870 * a0, int a1, struct Window * a2, int a3, int a4);
void FUN_0200B9EC(struct UnkStruct_0200B870 * string, u32 value, u32 n, enum PrintingMode mode, struct Window *window, int x, int y);

#endif // POKEDIAMOND_MESSAGE_FORMAT_H
