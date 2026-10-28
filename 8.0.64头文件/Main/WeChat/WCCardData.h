@interface WCCardData : MMObject <WCTTableCoding, WCCardDataSource>
{
    BOOL isAutoIncrement; // +0x8
    int uiLayoutType; // +0xc
    unsigned int localCardId; // +0x10
    unsigned int beginTime; // +0x14
    unsigned int endTime; // +0x18
    unsigned int stateFlag; // +0x1c
    unsigned int updateSeq; // +0x20
    unsigned int localUpdateSeq; // +0x24
    unsigned int updateTime; // +0x28
    unsigned int localUpdateTime; // +0x2c
    unsigned int isDynamicCode; // +0x30
    unsigned int IntRes1; // +0x34
    unsigned int IntRes2; // +0x38
    unsigned int IntRes3; // +0x3c
    WCCardDataCardTPInfo * cardTPInfo; // +0x40
    WCCardDataCardInfo * cardInfo; // +0x48
    WCCardDataShareInfo * shareInfo; // +0x50
    NSString * jsonStrForTest; // +0x58
    NSString * layoutAnnounce; // +0x60
    NSString * layoutTitle; // +0x68
    NSString * encryptCode; // +0x70
    NSString * labelWording; // +0x78
    NSString * cardId; // +0x80
    NSString * cardTpId; // +0x88
    NSString * cardTPInfoForDB; // +0x90
    NSString * cardInfoForDB; // +0x98
    NSString * shareInfoForDB; // +0xa0
    NSString * StrRes1; // +0xa8
    NSString * StrRes2; // +0xb0
    NSString * StrRes3; // +0xb8
    long long lastInsertedRowID; // +0xc0
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
+ (const void *)beginTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_beginTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_endTime;
+ (const void *)stateFlag;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_stateFlag;
+ (const void *)updateSeq;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_updateSeq;
+ (const void *)localUpdateSeq;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_localUpdateSeq;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)localUpdateTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_localUpdateTime;
+ (const void *)isDynamicCode;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_isDynamicCode;
+ (const void *)cardTPInfoForDB;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_cardTPInfoForDB;
+ (const void *)cardInfoForDB;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_cardInfoForDB;
+ (const void *)shareInfoForDB;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_shareInfoForDB;
+ (const void *)IntRes1;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_IntRes1;
+ (const void *)IntRes2;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_IntRes2;
+ (const void *)IntRes3;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_IntRes3;
+ (const void *)StrRes1;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_StrRes1;
+ (const void *)StrRes2;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_StrRes2;
+ (const void *)StrRes3;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_StrRes3;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)parseCardTPInfoDic:(id)arg1 ToCardTpInfo:(id)arg2;
+ (void)parseCardInfoDic:(id)arg1 ToCardInfo:(id)arg2;
+ (void)parseShareInfoDic:(id)arg1 ToShareInfo:(id)arg2;
+ (id)getCardTPInfoStr:(id)arg1;
+ (id)getCardInfoStr:(id)arg1;
+ (id)getShareInfoStr:(id)arg1;
- (void)setupDataFromDB;
- (void)setupDataBeforeWriteDB;
- (void)parseFromJSONStr:(id)arg1;
- (void)parseFromJSONDic:(id)arg1;
- (id)getCardId;
- (id)getCardTpId;
- (id)getCardInfo;
- (id)getCardTpInfo;
- (id)cardTPInfo;
- (void)setCardTPInfo:(id)arg1;
- (id)cardInfo;
- (void)setCardInfo:(id)arg1;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (id)jsonStrForTest;
- (void)setJsonStrForTest:(id)arg1;
- (int)uiLayoutType;
- (void)setUiLayoutType:(int)arg1;
- (id)layoutAnnounce;
- (void)setLayoutAnnounce:(id)arg1;
- (id)layoutTitle;
- (void)setLayoutTitle:(id)arg1;
- (id)encryptCode;
- (void)setEncryptCode:(id)arg1;
- (id)labelWording;
- (void)setLabelWording:(id)arg1;
- (unsigned int)localCardId;
- (void)setLocalCardId:(unsigned int)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)cardTpId;
- (void)setCardTpId:(id)arg1;
- (unsigned int)beginTime;
- (void)setBeginTime:(unsigned int)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (unsigned int)stateFlag;
- (void)setStateFlag:(unsigned int)arg1;
- (unsigned int)updateSeq;
- (void)setUpdateSeq:(unsigned int)arg1;
- (unsigned int)localUpdateSeq;
- (void)setLocalUpdateSeq:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (unsigned int)localUpdateTime;
- (void)setLocalUpdateTime:(unsigned int)arg1;
- (unsigned int)isDynamicCode;
- (void)setIsDynamicCode:(unsigned int)arg1;
- (id)cardTPInfoForDB;
- (void)setCardTPInfoForDB:(id)arg1;
- (id)cardInfoForDB;
- (void)setCardInfoForDB:(id)arg1;
- (id)shareInfoForDB;
- (void)setShareInfoForDB:(id)arg1;
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
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (void).cxx_destruct;
@end
