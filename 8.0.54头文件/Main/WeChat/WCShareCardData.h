@interface WCShareCardData : MMObject <WCTTableCoding, WCCardDataSource, PBCoding>
{
    BOOL bNearby; // +0x8
    BOOL isAutoIncrement; // +0x9
    BOOL _bNew; // +0xa
    unsigned int localCardId; // +0xc
    unsigned int stateFlag; // +0x10
    unsigned int updateTime; // +0x14
    unsigned int localUpdateTime; // +0x18
    unsigned int shareTime; // +0x1c
    unsigned int expireTime; // +0x20
    unsigned int _IntRes1; // +0x24
    unsigned int _IntRes2; // +0x28
    unsigned int _IntRes3; // +0x2c
    NSString * announceMent; // +0x30
    NSString * cardId; // +0x38
    NSString * cardTpId; // +0x40
    NSString * appId; // +0x48
    unsigned long long updateSeq; // +0x50
    unsigned long long localUpdateSeq; // +0x58
    NSString * shareUserName; // +0x60
    NSString * markUserName; // +0x68
    NSString * shareCardTPInfoForDB; // +0x70
    NSString * shareCardInfoForDB; // +0x78
    NSString * shareCardShareInfoForDB; // +0x80
    NSString * shareCardLogoName; // +0x88
    NSString * shareCardTitle; // +0x90
    NSString * shareCardFromUser; // +0x98
    NSString * shareCardContent; // +0xa0
    long long lastInsertedRowID; // +0xa8
    WCCardDataCardInfo * _shareCardInfo; // +0xb0
    WCCardDataCardTPInfo * _shareCardTPInfo; // +0xb8
    NSString * _encryptCode; // +0xc0
    NSString * _cardExt; // +0xc8
    NSString * _StrRes1; // +0xd0
    NSString * _StrRes2; // +0xd8
    NSString * _StrRes3; // +0xe0
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localCardId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localCardId;
+ (const void *)cardId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_cardId;
+ (const void *)cardTpId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_cardTpId;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_appId;
+ (const void *)stateFlag;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_stateFlag;
+ (const void *)updateSeq;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_updateSeq;
+ (const void *)localUpdateSeq;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_localUpdateSeq;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)localUpdateTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_localUpdateTime;
+ (const void *)shareTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_shareTime;
+ (const void *)shareUserName;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_shareUserName;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_expireTime;
+ (const void *)markUserName;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_markUserName;
+ (const void *)shareCardTPInfoForDB;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_shareCardTPInfoForDB;
+ (const void *)shareCardInfoForDB;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_shareCardInfoForDB;
+ (const void *)shareCardShareInfoForDB;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_shareCardShareInfoForDB;
+ (const void *)shareCardLogoName;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_shareCardLogoName;
+ (const void *)shareCardTitle;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_shareCardTitle;
+ (const void *)shareCardFromUser;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_shareCardFromUser;
+ (const void *)shareCardContent;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_shareCardContent;
+ (const void *)IntRes1;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_IntRes1;
+ (const void *)IntRes2;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_IntRes2;
+ (const void *)IntRes3;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_IntRes3;
+ (const void *)StrRes1;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_StrRes1;
+ (const void *)StrRes2;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_StrRes2;
+ (const void *)StrRes3;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_StrRes3;
+ (void)PBArrayAdd_shareCardInfo;
+ (void)PBArrayAdd_shareCardTPInfo;
+ (void)initialize;
+ (void)__wcdb_column_constraint_26:(void *)arg1;
- (id)getPBPropertyTable;
- (void)setupDataFromDB;
- (void)setupDataBeforeWriteDB;
- (void)parseFromJSONStr:(id)arg1;
- (void)parseFromJSONDic:(id)arg1;
- (id)getCardId;
- (id)getCardTpId;
- (id)getCardInfo;
- (id)getCardTpInfo;
- (BOOL)HasBeConsumed;
- (long long)compareShareTime:(id)arg1;
- (BOOL)bNearby;
- (void)setBNearby:(BOOL)arg1;
- (id)announceMent;
- (void)setAnnounceMent:(id)arg1;
- (unsigned int)localCardId;
- (void)setLocalCardId:(unsigned int)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)cardTpId;
- (void)setCardTpId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)stateFlag;
- (void)setStateFlag:(unsigned int)arg1;
- (unsigned long long)updateSeq;
- (void)setUpdateSeq:(unsigned long long)arg1;
- (unsigned long long)localUpdateSeq;
- (void)setLocalUpdateSeq:(unsigned long long)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (unsigned int)localUpdateTime;
- (void)setLocalUpdateTime:(unsigned int)arg1;
- (unsigned int)shareTime;
- (void)setShareTime:(unsigned int)arg1;
- (id)shareUserName;
- (void)setShareUserName:(id)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (id)markUserName;
- (void)setMarkUserName:(id)arg1;
- (id)shareCardTPInfoForDB;
- (void)setShareCardTPInfoForDB:(id)arg1;
- (id)shareCardInfoForDB;
- (void)setShareCardInfoForDB:(id)arg1;
- (id)shareCardShareInfoForDB;
- (void)setShareCardShareInfoForDB:(id)arg1;
- (id)shareCardLogoName;
- (void)setShareCardLogoName:(id)arg1;
- (id)shareCardTitle;
- (void)setShareCardTitle:(id)arg1;
- (id)shareCardFromUser;
- (void)setShareCardFromUser:(id)arg1;
- (id)shareCardContent;
- (void)setShareCardContent:(id)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (id)shareCardInfo;
- (void)setShareCardInfo:(id)arg1;
- (id)shareCardTPInfo;
- (void)setShareCardTPInfo:(id)arg1;
- (BOOL)bNew;
- (void)setBNew:(BOOL)arg1;
- (id)encryptCode;
- (void)setEncryptCode:(id)arg1;
- (id)cardExt;
- (void)setCardExt:(id)arg1;
- (unsigned int)IntRes1;
- (void)setIntRes1:(unsigned int)arg1;
- (unsigned int)IntRes2;
- (void)setIntRes2:(unsigned int)arg1;
- (unsigned int)IntRes3;
- (void)setIntRes3:(unsigned int)arg1;
- (id)StrRes1;
- (void)setStrRes1:(id)arg1;
- (id)StrRes2;
- (void)setStrRes2:(id)arg1;
- (id)StrRes3;
- (void)setStrRes3:(id)arg1;
- (void).cxx_destruct;
@end

