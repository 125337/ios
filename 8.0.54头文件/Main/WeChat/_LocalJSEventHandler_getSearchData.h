@interface _LocalJSEventHandler_getSearchData : AbstractWebSearchDataFetcher
{
    BOOL _isFingertipSearch; // +0x8
    _TtC6WeChat23WSSearchProcessReporter * _processReporter; // +0x10
}
- (void)onRequestWillStart:(id)arg1;
- (void)onRequestSuccess:(id)arg1;
- (void)onRequestFail:(id)arg1;
- (unsigned int)h5Version;
- (unsigned int)cgiNumber;
- (BOOL)useParallelRequest;
- (void)recordSearchHistory:(id)arg1 params:(id)arg2;
- (void)reportKV14457:(unsigned long long)arg1;
- (BOOL)shouldCarryUserList:(id)arg1 andScene:(unsigned int)arg2 andBizType:(unsigned int)arg3 isHomePage:(BOOL)arg4;
- (BOOL)canModifySearchHistoryInSeachScene:(unsigned long long)arg1;
- (id)searchContext;
- (id)processReporter;
- (BOOL)isFingertipSearch;
- (void)setIsFingertipSearch:(BOOL)arg1;
- (void)setProcessReporter:(id)arg1;
- (void).cxx_destruct;
@end

