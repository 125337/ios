@interface MMFinderLiveQuickReplyView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    BOOL _isPerformingBatchUpdate; // +0x8
    BOOL _reloadAfterBatchUpdate; // +0x9
    BOOL _isVisible; // +0xa
    id <MMFinderLiveQuickReplyViewDelegate> _delegate; // +0x10
    FinderLiveBoxId * _currentBoxId; // +0x18
    UICollectionView * _mainCollectionView; // +0x20
    NSMutableArray * _modelArray; // +0x28
    NSMutableDictionary * _sendMsgDictionary; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateData:(id)arg1;
- (void)autoScrollToIndex:(id)arg1;
- (void)updateQuickReplySendTime;
- (void)onVisibilityChanged:(BOOL)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)reportQuickReplyWithModel:(id)arg1 indexPath:(id)arg2 actionType:(unsigned long long)arg3;
- (void)reportRecommendCommentExposeWithModel:(id)arg1;
- (void)reportRecommendCommentClickWithModel:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (BOOL)isDisplayingPaidFloatMsg;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)judgeOverTime:(id)arg1;
- (double)getUserStaySecond:(id)arg1;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (id)mainCollectionView;
- (id)sendMsgDictionary;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentBoxId;
- (void)setCurrentBoxId:(id)arg1;
- (void)setMainCollectionView:(id)arg1;
- (id)modelArray;
- (void)setModelArray:(id)arg1;
- (void)setSendMsgDictionary:(id)arg1;
- (BOOL)isPerformingBatchUpdate;
- (void)setIsPerformingBatchUpdate:(BOOL)arg1;
- (BOOL)reloadAfterBatchUpdate;
- (void)setReloadAfterBatchUpdate:(BOOL)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
