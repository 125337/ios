@interface MMLiveRewardGiftSendingCountMenuBar : MMRectTriangleArrowView
{
    id /* block */ _tapAction; // +0x8
    MMFinderLiveRewardGiftItem * _giftItem; // +0x10
    MMFinderLiveTaskId * _liveTaskId; // +0x18
    NSMutableArray * _countNumberViews; // +0x20
    NSArray * _batchSendConfigNumbers; // +0x28
    NSIndexPath * _indexPath; // +0x30
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2 orientation:(long long)arg3;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)removeAllSubViews;
- (void)removeAllCountNumberButtons;
- (void)registerCountNumberButtons:(id)arg1;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void)onClickCountNumberLabel:(id)arg1;
- (id)finderLiveTask;
- (void)updateWithGiftItem:(id)arg1 batchSendConfigNumbers:(id)arg2 indexPath:(id)arg3;
- (id)currentBasicReportParams;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)countNumberViews;
- (void)setCountNumberViews:(id)arg1;
- (id)batchSendConfigNumbers;
- (void)setBatchSendConfigNumbers:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

