@interface WCFinderRecommendCollectionViewModel : NSObject
{
    id <WCFinderRecommendCollectionViewModelDelegate> _delegate; // +0x8
    WCFinderRecommendCollectionOpenParams * _openParams; // +0x10
    RecommendReasonWording * _headInfo; // +0x18
    WCFinderFeedArray * _feedArray; // +0x20
    WCFinderStreamLoadingState * _loadingState; // +0x28
}
- (id)initWithParams:(id)arg1 commentScene:(int)arg2;
- (void)requestHeadInfo;
- (void)requestFirstPageData:(int)arg1;
- (void)requestNextPageData:(int)arg1;
- (void)requestDataWithPullType:(int)arg1 commentScene:(int)arg2;
- (int)commentScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)openParams;
- (void)setOpenParams:(id)arg1;
- (id)headInfo;
- (void)setHeadInfo:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (void).cxx_destruct;
@end
