@interface WAConfigSyncVersionSettingPredownloadInfo : NSObject
{
    unsigned int _usedTime; // +0x8
    NSArray * _appidList; // +0x10
}
- (unsigned int)usedTime;
- (void)setUsedTime:(unsigned int)arg1;
- (id)appidList;
- (void)setAppidList:(id)arg1;
- (void).cxx_destruct;
@end

