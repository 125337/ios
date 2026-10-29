@interface WAReportPluginAutoUpdateStatisItem : WAReportBaseItem
{
    NSString * _pluginAppid; // +0x8
    long long _pluginVersion; // +0x10
    long long _pluginState; // +0x18
    long long _updateScene; // +0x20
    long long _updateResult; // +0x28
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (id)pluginAppid;
- (void)setPluginAppid:(id)arg1;
- (long long)pluginVersion;
- (void)setPluginVersion:(long long)arg1;
- (long long)pluginState;
- (void)setPluginState:(long long)arg1;
- (long long)updateScene;
- (void)setUpdateScene:(long long)arg1;
- (long long)updateResult;
- (void)setUpdateResult:(long long)arg1;
- (void).cxx_destruct;
@end

