@interface CameraScanMixedResultListView : UIView <CameraMixedSwipeItemCardDeleagte>
{
    BOOL _isProcessingViewModel; // +0x8
    id <CameraScanMixedResultListViewDelegate> _delegate; // +0x10
    CameraScrollableCardListView * _resultContainerView; // +0x18
    NSMutableArray * _resultViews; // +0x20
    NSMutableArray * _viewModelsQueue; // +0x28
}
+ (double)resultContainerHeightForWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onSwipeItemCardClicked:(id)arg1;
- (void)appendItemWithViewModel:(id)arg1;
- (void)__checkViewModelQueue;
- (void)doAppendNewItemAnimationWithViewModel:(id)arg1;
- (void)updateItemDetectedAndSearched:(id)arg1;
- (void)clearListView;
- (BOOL)isListEmpty;
- (unsigned long long)listItemCardCount;
- (long long)indexOfCardWithItemViewModel:(id)arg1;
- (CGRect)getCardScreenFrameWithItemViewModel:(id)arg1;
- (id)cardViewWithTrackId:(id)arg1;
- (BOOL)isFold;
- (void)changeListViewToFold:(BOOL)arg1 animated:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)resultContainerView;
- (void)setResultContainerView:(id)arg1;
- (id)resultViews;
- (void)setResultViews:(id)arg1;
- (id)viewModelsQueue;
- (void)setViewModelsQueue:(id)arg1;
- (BOOL)isProcessingViewModel;
- (void)setIsProcessingViewModel:(BOOL)arg1;
- (void).cxx_destruct;
@end
