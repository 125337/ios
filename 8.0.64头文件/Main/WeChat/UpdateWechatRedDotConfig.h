@interface UpdateWechatRedDotConfig : NSObject <PBCoding>
{
    unsigned int _uiHasShowReddotlevel; // +0x8
    unsigned int _uiClientVersion; // +0xc
    unsigned int _uiReddotlevel; // +0x10
    unsigned int _uiExpireTime; // +0x14
    NSString * _nsNewXml; // +0x18
    NSString * _nsWording; // +0x20
    NSString * _nsUrl; // +0x28
}
+ (void)PBArrayAdd_uiHasShowReddotlevel;
+ (void)PBArrayAdd_nsNewXml;
+ (void)initialize;
+ (void)reportConfig:(id)arg1 Opcode:(unsigned int)arg2 OldConfig:(id)arg3;
+ (void)receiveUpdateWechatRedDot:(id)arg1;
+ (id)updateWechatRedDotPath;
+ (id)loadUpdateWechatRedDotConfig;
+ (void)saveUpdateWechatRedDotCofig:(id)arg1;
+ (id)getUpdateWechatRedDotConfig;
- (id)getPBPropertyTable;
- (void)parseUpdateWechatRedDot:(id)arg1;
- (BOOL)shouldMoreShowUpdateWechatRedDot;
- (BOOL)shouldSettingShowUpdateWechatRedDot;
- (BOOL)shouldAboutShowUpdateWechatRedDot;
- (BOOL)shouldUpdateShowUpdateWechatRedDot;
- (id)getUpdateWechatCellWording;
- (void)setMoreHasShowUpdateWechatRedDot;
- (void)setSettingHasShowUpdateWechatRedDot;
- (void)setAboutHasShowUpdateWechatRedDot;
- (void)setUpdateHasShowUpdateWechatRedDot;
- (id)nsNewXml;
- (void)setNsNewXml:(id)arg1;
- (unsigned int)uiHasShowReddotlevel;
- (void)setUiHasShowReddotlevel:(unsigned int)arg1;
- (id)nsWording;
- (void)setNsWording:(id)arg1;
- (id)nsUrl;
- (void)setNsUrl:(id)arg1;
- (unsigned int)uiClientVersion;
- (void)setUiClientVersion:(unsigned int)arg1;
- (unsigned int)uiReddotlevel;
- (void)setUiReddotlevel:(unsigned int)arg1;
- (unsigned int)uiExpireTime;
- (void)setUiExpireTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
