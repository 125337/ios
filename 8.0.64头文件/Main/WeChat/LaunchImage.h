@interface LaunchImage : NSObject <PBCoding, MMResourceMgrExt>
{
    unsigned int _uiBeginTime; // +0x8
    unsigned int _uiEndTime; // +0xc
    unsigned int _uiResType; // +0x10
    unsigned int _uiResSubType; // +0x14
    unsigned int _uiResVersion; // +0x18
}
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiResType;
+ (void)PBArrayAdd_uiResSubType;
+ (void)PBArrayAdd_uiResVersion;
+ (void)initialize;
+ (id)GetLaunchImagePath;
+ (id)GetLaunchImageConfigPath;
+ (id)loadLaunchImage;
+ (void)saveLaunchImage:(id)arg1;
+ (id)parseChangeLaunchImage:(id)arg1;
+ (void)parseLaunchImage:(id)arg1 fromMsg:(id)arg2;
- (id)getPBPropertyTable;
- (id)init;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)checkResouce;
- (unsigned int)uiBeginTime;
- (void)setUiBeginTime:(unsigned int)arg1;
- (unsigned int)uiEndTime;
- (void)setUiEndTime:(unsigned int)arg1;
- (unsigned int)uiResType;
- (void)setUiResType:(unsigned int)arg1;
- (unsigned int)uiResSubType;
- (void)setUiResSubType:(unsigned int)arg1;
- (unsigned int)uiResVersion;
- (void)setUiResVersion:(unsigned int)arg1;
@end
