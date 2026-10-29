@interface WCFinderStreamProfilePostTipsFeedFlowViewModel : NSObject
{
    id <WCFinderStreamProfilePostTipsFeedFlowViewModelDelegate> _delegate; // +0x8
    WCFinderProfilePostTipsInfo * _postTipsInfo; // +0x10
    WCFinderFeedArray * _feedArray; // +0x18
    WCFinderStreamLoadingState * _loadingState; // +0x20
}
- (id)initWithPostTipsInfo:(id)arg1;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (BOOL)isLoading;
- (BOOL)hasMore;
- (void)_fetchDataWithIsFirstPage:(BOOL)arg1;
- (int)commentScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)postTipsInfo;
- (void)setPostTipsInfo:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (void).cxx_destruct;
@end
