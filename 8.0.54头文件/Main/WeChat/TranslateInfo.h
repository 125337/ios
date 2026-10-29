@interface TranslateInfo : MMObject <PBCoding>
{
    unsigned int mesLocalId; // +0x8
    unsigned long long msgServerId; // +0x10
    unsigned long long msgCreateTime; // +0x18
    NSString * recoreItemlocalDataID; // +0x20
    NSString * originText; // +0x28
    NSString * originLang; // +0x30
    NSString * translatedText; // +0x38
    NSString * translatedLang; // +0x40
    BOOL showOriginTextNow; // +0x48
    int translateStatus; // +0x4c
    NSString * brandWording; // +0x50
    NSString * snsID; // +0x58
    BOOL bNeedShowAnimation; // +0x60
    NSString * displayTranslatedText; // +0x68
    BOOL canReTrans; // +0x70
    BOOL _bAutoScrollUp; // +0x71
    int _autoScrollUpCount; // +0x74
    NSData * cookie; // +0x78
}
+ (void)PBArrayAdd_mesLocalId;
+ (void)PBArrayAdd_originText;
+ (void)PBArrayAdd_originLang;
+ (void)PBArrayAdd_translatedText;
+ (void)PBArrayAdd_translatedLang;
+ (void)PBArrayAdd_showOriginTextNow;
+ (void)PBArrayAdd_translateStatus;
+ (void)PBArrayAdd_brandWording;
+ (void)PBArrayAdd_snsID;
+ (void)PBArrayAdd_bNeedShowAnimation;
+ (void)PBArrayAdd_cookie;
+ (void)PBArrayAdd_canReTrans;
+ (void)PBArrayAdd_msgServerId;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_recoreItemlocalDataID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)getDisplayContent;
- (BOOL)isTranslating;
- (BOOL)isTextTooLong;
- (BOOL)isTranslateFailed;
- (int)GetTranslateStatus;
- (BOOL)isMatchWithMsg:(id)arg1;
- (void)setIdentifierParamsWithMsg:(id)arg1;
- (void)setIdentifierParamsWithRecordItemData:(id)arg1;
- (id)displayTranslatedText;
- (void)setDisplayTranslatedText:(id)arg1;
- (unsigned int)mesLocalId;
- (void)setMesLocalId:(unsigned int)arg1;
- (id)originText;
- (void)setOriginText:(id)arg1;
- (id)originLang;
- (void)setOriginLang:(id)arg1;
- (id)translatedText;
- (void)setTranslatedText:(id)arg1;
- (id)translatedLang;
- (void)setTranslatedLang:(id)arg1;
- (BOOL)showOriginTextNow;
- (void)setShowOriginTextNow:(BOOL)arg1;
- (int)translateStatus;
- (void)setTranslateStatus:(int)arg1;
- (id)brandWording;
- (void)setBrandWording:(id)arg1;
- (id)snsID;
- (void)setSnsID:(id)arg1;
- (BOOL)bNeedShowAnimation;
- (void)setBNeedShowAnimation:(BOOL)arg1;
- (id)cookie;
- (void)setCookie:(id)arg1;
- (BOOL)canReTrans;
- (void)setCanReTrans:(BOOL)arg1;
- (unsigned long long)msgServerId;
- (void)setMsgServerId:(unsigned long long)arg1;
- (unsigned long long)msgCreateTime;
- (void)setMsgCreateTime:(unsigned long long)arg1;
- (id)recoreItemlocalDataID;
- (void)setRecoreItemlocalDataID:(id)arg1;
- (BOOL)bAutoScrollUp;
- (void)setBAutoScrollUp:(BOOL)arg1;
- (int)autoScrollUpCount;
- (void)setAutoScrollUpCount:(int)arg1;
- (void).cxx_destruct;
@end

