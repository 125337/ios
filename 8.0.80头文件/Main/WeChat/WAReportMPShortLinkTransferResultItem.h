@interface WAReportMPShortLinkTransferResultItem : WAReportBaseItem
{
    BOOL _isCache; // +0x8
    int _result; // +0xc
    unsigned int _resultAppVersion; // +0x10
    unsigned int _resultAppState; // +0x14
    NSString * _mpShortLink; // +0x18
    NSString * _resultAppid; // +0x20
    NSString * _resultPagePath; // +0x28
    NSString * _resultNickName; // +0x30
}
- (int)reportID;
- (id)reportString;
- (id)mpShortLink;
- (void)setMpShortLink:(id)arg1;
- (int)result;
- (void)setResult:(int)arg1;
- (BOOL)isCache;
- (void)setIsCache:(BOOL)arg1;
- (id)resultAppid;
- (void)setResultAppid:(id)arg1;
- (unsigned int)resultAppVersion;
- (void)setResultAppVersion:(unsigned int)arg1;
- (unsigned int)resultAppState;
- (void)setResultAppState:(unsigned int)arg1;
- (id)resultPagePath;
- (void)setResultPagePath:(id)arg1;
- (id)resultNickName;
- (void)setResultNickName:(id)arg1;
- (void).cxx_destruct;
@end
