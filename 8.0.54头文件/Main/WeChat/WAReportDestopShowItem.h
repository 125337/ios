@interface WAReportDestopShowItem : WAReportBaseItem
{
    unsigned long long _destopEnterScene; // +0x8
    NSString * _appidList; // +0x10
}
- (id)reportString;
- (unsigned long long)destopEnterScene;
- (void)setDestopEnterScene:(unsigned long long)arg1;
- (id)appidList;
- (void)setAppidList:(id)arg1;
- (void).cxx_destruct;
@end

