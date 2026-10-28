@interface WAReportHTMLActionItem : WAReportBaseItem
{
    unsigned int _clientTimestamp; // +0x8
    unsigned int _publiclibversion; // +0xc
    NSString * _currentUrl; // +0x10
    NSString * _referpageurl; // +0x18
    long long _targetAction; // +0x20
    NSString * _targetPageUrl; // +0x28
}
- (int)reportID;
- (id)reportString;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (id)referpageurl;
- (void)setReferpageurl:(id)arg1;
- (long long)targetAction;
- (void)setTargetAction:(long long)arg1;
- (id)targetPageUrl;
- (void)setTargetPageUrl:(id)arg1;
- (unsigned int)clientTimestamp;
- (void)setClientTimestamp:(unsigned int)arg1;
- (unsigned int)publiclibversion;
- (void)setPubliclibversion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
