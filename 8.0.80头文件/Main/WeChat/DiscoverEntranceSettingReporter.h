@interface DiscoverEntranceSettingReporter : KvReportBaseItem
{
    NSString * _sessionId; // +0x8
    unsigned long long _action; // +0x10
    unsigned long long _entranceType; // +0x18
    unsigned long long _switchType; // +0x20
    unsigned long long _enterScene; // +0x28
    NSString * _exposedItemsString; // +0x30
}
- (void)setExposedItems:(id)arg1;
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void)doReport;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (unsigned long long)switchType;
- (void)setSwitchType:(unsigned long long)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)exposedItemsString;
- (void)setExposedItemsString:(id)arg1;
- (void).cxx_destruct;
@end
