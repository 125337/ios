@interface CameraScanCombineReportActionBaseInfo : NSObject
{
    unsigned int _enterScene; // +0x8
    unsigned int _pageSessionId; // +0xc
    unsigned int _tabSessionId; // +0x10
    unsigned int _scanSessionId; // +0x14
    unsigned long long _enterTabTs; // +0x18
    unsigned long long _actionTs; // +0x20
}
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (unsigned long long)enterTabTs;
- (void)setEnterTabTs:(unsigned long long)arg1;
- (unsigned long long)actionTs;
- (void)setActionTs:(unsigned long long)arg1;
- (unsigned int)pageSessionId;
- (void)setPageSessionId:(unsigned int)arg1;
- (unsigned int)tabSessionId;
- (void)setTabSessionId:(unsigned int)arg1;
- (unsigned int)scanSessionId;
- (void)setScanSessionId:(unsigned int)arg1;
@end
