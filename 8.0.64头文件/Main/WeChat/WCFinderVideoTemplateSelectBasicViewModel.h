@interface WCFinderVideoTemplateSelectBasicViewModel : NSObject
{
    BOOL _isFetchingData; // +0x8
    BOOL _hasFetchData; // +0x9
    BOOL _continueFlag; // +0xa
    NSData * _pageBuf; // +0x10
    NSMutableArray * _videoTemplatesData; // +0x18
    MJTemplateListParams * _params; // +0x20
}
- (id)initWithParams:(id)arg1;
- (void)fetchLocalData;
- (void)fetchDataWithCompletion:(id /* block */)arg1;
- (void)reFetchDataWithCompletion:(id /* block */)arg1;
- (void)fetchDataWithPageBuf:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)hasMoreData;
- (long long)dataCount;
- (id)videoTemplateAtIndex:(long long)arg1;
- (id)titleAtIndex:(long long)arg1;
- (id)descAtIndex:(long long)arg1;
- (id)videoUrlAtIndex:(long long)arg1;
- (id)getCachedData;
- (void)saveCachedDataWithTemplates:(id)arg1;
- (id)getMusicLyricsWording:(id)arg1;
- (id)mmkvKey;
- (BOOL)hasLocalFirstTemplate;
- (id)localFirstTemplate;
- (id)videoTemplatesData;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (id)pageBuf;
- (void)setPageBuf:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (void)setVideoTemplatesData:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
