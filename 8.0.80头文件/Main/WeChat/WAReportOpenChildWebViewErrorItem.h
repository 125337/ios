@interface WAReportOpenChildWebViewErrorItem : WAReportBaseItem
{
    unsigned int _isGameApp; // +0x8
    unsigned int _errType; // +0xc
    unsigned int _isForeground; // +0x10
    unsigned int _useNewStack; // +0x14
    unsigned int _stackCount; // +0x18
    unsigned int _pageCount; // +0x1c
    unsigned int _currentWebViewId; // +0x20
    unsigned int _lastPageWebviewId; // +0x24
    NSString * _targetPath; // +0x28
    NSString * _currentWebViewPath; // +0x30
    NSString * _lastPagePath; // +0x38
}
- (int)reportID;
- (id)reportString;
- (unsigned int)isGameApp;
- (void)setIsGameApp:(unsigned int)arg1;
- (unsigned int)errType;
- (void)setErrType:(unsigned int)arg1;
- (unsigned int)isForeground;
- (void)setIsForeground:(unsigned int)arg1;
- (unsigned int)useNewStack;
- (void)setUseNewStack:(unsigned int)arg1;
- (unsigned int)stackCount;
- (void)setStackCount:(unsigned int)arg1;
- (unsigned int)pageCount;
- (void)setPageCount:(unsigned int)arg1;
- (id)targetPath;
- (void)setTargetPath:(id)arg1;
- (id)currentWebViewPath;
- (void)setCurrentWebViewPath:(id)arg1;
- (id)lastPagePath;
- (void)setLastPagePath:(id)arg1;
- (unsigned int)currentWebViewId;
- (void)setCurrentWebViewId:(unsigned int)arg1;
- (unsigned int)lastPageWebviewId;
- (void)setLastPageWebviewId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
