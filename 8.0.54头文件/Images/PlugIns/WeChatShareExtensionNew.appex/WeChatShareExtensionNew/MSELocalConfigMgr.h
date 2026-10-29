@interface MSELocalConfigMgr : NSObject
{
    MSESettingExt * _settingExt; // +0x8
}
+ (id)sharedInstance;
- (id)localSettingExtPath;
- (void)loadLocalSettingExt;
- (void)saveLocalSettingExt;
- (id)settingExt;
- (void)setSettingExt:(id)arg1;
- (void).cxx_destruct;
@end

