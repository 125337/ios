@interface MMLiveRewardGiftAttackContactBubbleView : MMRectTriangleArrowView
{
    id /* block */ _tapAction; // +0x8
    MMFinderLiveRewardGiftItem * _giftItem; // +0x10
    MMFinderLiveTaskId * _liveTaskId; // +0x18
    NSIndexPath * _indexPath; // +0x20
    NSArray * _curGiftAttackContacts; // +0x28
    MMUILabel * _titleLabel; // +0x30
    NSArray * _giftAttackContactHeadImageViews; // +0x38
    MMCPLabel * _firstGiftAttackContactNickNameLabel; // +0x40
    UIImageView * _selectContactArrowIconView; // +0x48
}
+ (double)GetEstimateWidth:(unsigned long long)arg1;
+ (double)GetEstimateHeight;
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2 orientation:(long long)arg3;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)removeGiftAttackContactHeaderViews;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void)updateWithGiftAttackContacts:(id)arg1;
- (void)handleTapGestureRecognizer:(id)arg1;
- (id)finderLiveTask;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (id)curGiftAttackContacts;
- (void)setCurGiftAttackContacts:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)giftAttackContactHeadImageViews;
- (void)setGiftAttackContactHeadImageViews:(id)arg1;
- (id)firstGiftAttackContactNickNameLabel;
- (void)setFirstGiftAttackContactNickNameLabel:(id)arg1;
- (id)selectContactArrowIconView;
- (void)setSelectContactArrowIconView:(id)arg1;
- (void).cxx_destruct;
@end

