@interface WCCardPkgMsg : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement; // +0x8
    BOOL _bNeedCheck; // +0x9
    BOOL _allUnavailable; // +0xa
    BOOL _need_pull_card_entrance; // +0xb
    unsigned int localID; // +0xc
    unsigned int status; // +0x10
    unsigned int updateTime; // +0x14
    unsigned int IntRes1; // +0x18
    unsigned int IntRes2; // +0x1c
    unsigned int msgType; // +0x20
    unsigned int jumpType; // +0x24
    unsigned int reportScene; // +0x28
    unsigned int getLayoutScene; // +0x2c
    unsigned long long svr64ID; // +0x30
    NSString * contentForDB; // +0x38
    NSString * cardId; // +0x40
    NSString * consumedBoxId; // +0x48
    NSString * StrRes1; // +0x50
    NSString * StrRes2; // +0x58
    long long lastInsertedRowID; // +0x60
    NSString * cardTpId; // +0x68
    NSString * logoUrl; // +0x70
    NSString * webUrl; // +0x78
    NSString * title; // +0x80
    NSString * desc; // +0x88
    NSString * msgID; // +0x90
    WCCardPkgMsgButton * actionBtn; // +0x98
    WCCardPkgMsgActivity * activity; // +0xa0
    NSMutableArray * acceptItemList; // +0xa8
    NSString * redDotWording; // +0xb0
    NSString * redDotIconUrl; // +0xb8
    NSString * redDotBuff; // +0xc0
    NSString * _msgTipWording; // +0xc8
    NSString * _msgTipIconUrl; // +0xd0
    NSMutableArray * _jumpUrlBtnList; // +0xd8
    NSString * _logoColor; // +0xe0
    NSMutableArray * _unavailableQrCodeList; // +0xe8
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)localID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_localID;
+ (const void *)svr64ID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_svr64ID;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_status;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)contentForDB;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_contentForDB;
+ (const void *)cardId;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_cardId;
+ (const void *)IntRes1;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_IntRes1;
+ (const void *)IntRes2;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_IntRes2;
+ (const void *)StrRes1;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_StrRes1;
+ (const void *)StrRes2;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_StrRes2;
+ (const void *)consumedBoxId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_consumedBoxId;
+ (const void *)logoColor;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_logoColor;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)ParseMsgXML:(id)arg1 ToMsg:(id)arg2;
- (void)setupDataFromDB;
- (unsigned int)localID;
- (void)setLocalID:(unsigned int)arg1;
- (unsigned long long)svr64ID;
- (void)setSvr64ID:(unsigned long long)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)contentForDB;
- (void)setContentForDB:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)consumedBoxId;
- (void)setConsumedBoxId:(id)arg1;
- (unsigned int)IntRes1;
- (void)setIntRes1:(unsigned int)arg1;
- (unsigned int)IntRes2;
- (void)setIntRes2:(unsigned int)arg1;
- (id)StrRes1;
- (void)setStrRes1:(id)arg1;
- (id)StrRes2;
- (void)setStrRes2:(id)arg1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (unsigned int)jumpType;
- (void)setJumpType:(unsigned int)arg1;
- (id)cardTpId;
- (void)setCardTpId:(id)arg1;
- (id)logoUrl;
- (void)setLogoUrl:(id)arg1;
- (id)webUrl;
- (void)setWebUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)msgID;
- (void)setMsgID:(id)arg1;
- (id)actionBtn;
- (void)setActionBtn:(id)arg1;
- (id)activity;
- (void)setActivity:(id)arg1;
- (unsigned int)reportScene;
- (void)setReportScene:(unsigned int)arg1;
- (id)acceptItemList;
- (void)setAcceptItemList:(id)arg1;
- (unsigned int)getLayoutScene;
- (void)setGetLayoutScene:(unsigned int)arg1;
- (id)redDotWording;
- (void)setRedDotWording:(id)arg1;
- (id)redDotIconUrl;
- (void)setRedDotIconUrl:(id)arg1;
- (id)redDotBuff;
- (void)setRedDotBuff:(id)arg1;
- (id)msgTipWording;
- (void)setMsgTipWording:(id)arg1;
- (id)msgTipIconUrl;
- (void)setMsgTipIconUrl:(id)arg1;
- (id)jumpUrlBtnList;
- (void)setJumpUrlBtnList:(id)arg1;
- (BOOL)bNeedCheck;
- (void)setBNeedCheck:(BOOL)arg1;
- (id)logoColor;
- (void)setLogoColor:(id)arg1;
- (BOOL)allUnavailable;
- (void)setAllUnavailable:(BOOL)arg1;
- (id)unavailableQrCodeList;
- (void)setUnavailableQrCodeList:(id)arg1;
- (BOOL)need_pull_card_entrance;
- (void)setNeed_pull_card_entrance:(BOOL)arg1;
- (void).cxx_destruct;
@end
