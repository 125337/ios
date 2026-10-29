@interface MMFinderLiveCommentEntranceTabBar : UIView
{
    id /* block */ _commentEntranceDidTapToChangeCallback; // +0x8
    id /* block */ _commentEntranceSelectedChangeCallback; // +0x10
    MMFinderLiveTaskId * _liveTaskId; // +0x18
    UIScrollView * _entranceScrollView; // +0x20
    NSMutableArray * _entranceViewList; // +0x28
    FinderLiveBoxId * _currSelectBox; // +0x30
    MMFinderLiveCommentEntranceView * _currSelectEntranceView; // +0x38
    double _maxWidth; // +0x40
}
+ (double)preferHeight;
- (id)initWithLiveTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutEntranceScrollView;
- (id)createEntranceView:(id)arg1;
- (void)onEntranceViewListChanged;
- (id)getEntranceViewWithBoxId:(id)arg1;
- (void)refreshEntranceViewUI;
- (void)updateSelfSize;
- (void)updateEntranceScrollContentSize;
- (double)getEntrancesSumContentWidth;
- (void)refreshUIForCurrentSelectBoxChanged;
- (id)getFinderLiveTask;
- (void)adjustContentOffsetForCurrSelectBoxIfNeed;
- (void)updateSelectEntranceView:(id)arg1;
- (void)addBoxEntrance:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeBoxEntrance:(id)arg1;
- (void)updateMaxWidth:(double)arg1;
- (void)updateCurrSelectBox:(id)arg1;
- (void)updateRedDot:(id)arg1;
- (void)clearRedDotForEntrance:(id)arg1;
- (void)reportGroupNameLabelClick:(id)arg1;
- (void)reportGroupNameLabelExpose:(id)arg1;
- (id /* block */)commentEntranceDidTapToChangeCallback;
- (void)setCommentEntranceDidTapToChangeCallback:(id /* block */)arg1;
- (id /* block */)commentEntranceSelectedChangeCallback;
- (void)setCommentEntranceSelectedChangeCallback:(id /* block */)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)entranceScrollView;
- (void)setEntranceScrollView:(id)arg1;
- (id)entranceViewList;
- (void)setEntranceViewList:(id)arg1;
- (id)currSelectBox;
- (void)setCurrSelectBox:(id)arg1;
- (id)currSelectEntranceView;
- (void)setCurrSelectEntranceView:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end
