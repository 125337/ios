@interface SettingVCReportData : NSObject
{
    unsigned char _uiVersion; // +0x8
    unsigned char _settingFromScource; // +0x9
    NSString * _sessionId; // +0x10
    unsigned long long _enterTime; // +0x18
    unsigned long long _sessionEnterTime; // +0x20
    NSMutableDictionary * _pageEnterTime; // +0x28
    NSString * _searchSessionId; // +0x30
    NSString * _searchWord; // +0x38
}
- (id)init;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned char)uiVersion;
- (void)setUiVersion:(unsigned char)arg1;
- (unsigned char)settingFromScource;
- (void)setSettingFromScource:(unsigned char)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (unsigned long long)sessionEnterTime;
- (void)setSessionEnterTime:(unsigned long long)arg1;
- (id)pageEnterTime;
- (void)setPageEnterTime:(id)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (id)searchWord;
- (void)setSearchWord:(id)arg1;
- (void).cxx_destruct;
@end
