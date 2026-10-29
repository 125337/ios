@interface ChatRoomPanelDynamicWeAppItem : NSObject <PBCoding>
{
    unsigned int _redDotFlag; // +0x8
    unsigned int _jumpType; // +0xc
    unsigned int _weAppVersion; // +0x10
    unsigned int _weAppDebugMode; // +0x14
    unsigned int _businessType; // +0x18
    NSString * _enterId; // +0x20
    NSString * _weAppUserName; // +0x28
    NSString * _weAppPagePath; // +0x30
    NSString * _h5Url; // +0x38
    NSDictionary * _weAppTitleDic; // +0x40
    NSDictionary * _weAppDescDic; // +0x48
    NSString * _weAppIconUrl; // +0x50
    NSString * _weAppDarkIconUrl; // +0x58
    NSString * _weAppId; // +0x60
}
+ (void)PBArrayAdd_enterId;
+ (void)PBArrayAdd_redDotFlag;
+ (void)PBArrayAdd_jumpType;
+ (void)PBArrayAdd_weAppUserName;
+ (void)PBArrayAdd_weAppVersion;
+ (void)PBArrayAdd_weAppPagePath;
+ (void)PBArrayAdd_weAppDebugMode;
+ (void)PBArrayAdd_h5Url;
+ (void)PBArrayAdd_weAppTitleDic;
+ (void)PBArrayAdd_weAppDescDic;
+ (void)PBArrayAdd_weAppIconUrl;
+ (void)PBArrayAdd_weAppDarkIconUrl;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_weAppId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)enterId;
- (void)setEnterId:(id)arg1;
- (unsigned int)redDotFlag;
- (void)setRedDotFlag:(unsigned int)arg1;
- (unsigned int)jumpType;
- (void)setJumpType:(unsigned int)arg1;
- (id)weAppUserName;
- (void)setWeAppUserName:(id)arg1;
- (unsigned int)weAppVersion;
- (void)setWeAppVersion:(unsigned int)arg1;
- (id)weAppPagePath;
- (void)setWeAppPagePath:(id)arg1;
- (unsigned int)weAppDebugMode;
- (void)setWeAppDebugMode:(unsigned int)arg1;
- (id)h5Url;
- (void)setH5Url:(id)arg1;
- (id)weAppTitleDic;
- (void)setWeAppTitleDic:(id)arg1;
- (id)weAppDescDic;
- (void)setWeAppDescDic:(id)arg1;
- (id)weAppIconUrl;
- (void)setWeAppIconUrl:(id)arg1;
- (id)weAppDarkIconUrl;
- (void)setWeAppDarkIconUrl:(id)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (id)weAppId;
- (void)setWeAppId:(id)arg1;
- (void).cxx_destruct;
@end

