@interface APBase : MMObject <WCTTableCoding>
{
    NSString * ssid; // +0x8
    NSString * mac; // +0x10
    unsigned int opCode; // +0x18
    PublicWifiCache * cache; // +0x20
    unsigned int scene; // +0x28
    NSString * qrCode; // +0x30
    NSString * mpUrl; // +0x38
    NSString * mid; // +0x40
    NSString * checkUrl; // +0x48
    NSString * sessionKey; // +0x50
    NSString * password; // +0x58
    unsigned int retcode; // +0x60
    NSString * errMsg; // +0x68
    int _state; // +0x70
    int _actionCode; // +0x74
    unsigned int _protocolType; // +0x78
    NSString * _bannerText; // +0x80
    NSString * _showUrl; // +0x88
    double _expiredTime; // +0x90
    NSString * _retMsg; // +0x98
    PublicWifiPageInfo * _pageInfo; // +0xa0
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)ssid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_ssid;
+ (const void *)mac;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_mac;
+ (const void *)opCode;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_opCode;
+ (const void *)actionCode;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_actionCode;
+ (const void *)bannerText;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_bannerText;
+ (const void *)showUrl;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_showUrl;
+ (const void *)expiredTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_expiredTime;
+ (const void *)qrCode;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_qrCode;
+ (const void *)mpUrl;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_mpUrl;
+ (const void *)mid;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_mid;
+ (const void *)checkUrl;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_checkUrl;
+ (const void *)protocolType;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_protocolType;
+ (const void *)retcode;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_retcode;
+ (const void *)retMsg;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_retMsg;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)start;
- (void)cancel;
- (BOOL)canStartWithCurrSSID:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)ssid;
- (void)setSsid:(id)arg1;
- (id)mac;
- (void)setMac:(id)arg1;
- (id)qrCode;
- (void)setQrCode:(id)arg1;
- (unsigned int)retcode;
- (void)setRetcode:(unsigned int)arg1;
- (id)mpUrl;
- (void)setMpUrl:(id)arg1;
- (unsigned int)opCode;
- (void)setOpCode:(unsigned int)arg1;
- (id)mid;
- (void)setMid:(id)arg1;
- (id)checkUrl;
- (void)setCheckUrl:(id)arg1;
- (int)state;
- (void)setState:(int)arg1;
- (int)actionCode;
- (void)setActionCode:(int)arg1;
- (id)bannerText;
- (void)setBannerText:(id)arg1;
- (id)showUrl;
- (void)setShowUrl:(id)arg1;
- (double)expiredTime;
- (void)setExpiredTime:(double)arg1;
- (unsigned int)protocolType;
- (void)setProtocolType:(unsigned int)arg1;
- (id)retMsg;
- (void)setRetMsg:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (void).cxx_destruct;
@end
