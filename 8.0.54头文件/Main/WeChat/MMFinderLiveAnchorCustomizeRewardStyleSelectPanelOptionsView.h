@interface MMFinderLiveAnchorCustomizeRewardStyleSelectPanelOptionsView : UIScrollView
{
    MMFinderLiveAnchorCustomizeRewardStyleSelectLogic * _logic; // +0x8
    NSArray * _contentSubViewArray; // +0x10
    UIView * _contentView; // +0x18
    MMFinderLiveAnchorCustomizeRewardImageOptionContentView * _colorOptionView; // +0x20
    MMFinderLiveAnchorCustomizeRewardTextOptionContentView * _textOptionView; // +0x28
    MMFinderLiveAnchorCustomizeRewardImageOptionContentView * _imageOptionView; // +0x30
    long long _curSubviewIndex; // +0x38
}
- (id)initWithStyleSelectLogic:(id)arg1;
- (void)initContentView;
- (void)initColorOptionView;
- (void)initTextOptionView;
- (void)initImageOptionView;
- (void)layoutSubviews;
- (void)refreshCurViewData;
- (void)setSubviewDisplayAtIndex:(long long)arg1;
- (void)checkIsNeedSelectImageWhenCurTabIsImageView;
- (double)calcContentSubViewLeftAtIndex:(long long)arg1;
- (void)refreshColorOptionViewData;
- (void)refreshTextOptionViewData;
- (void)refreshImageOptionViewData;
- (double)currentContainerPerferHeight;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)contentSubViewArray;
- (void)setContentSubViewArray:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)colorOptionView;
- (void)setColorOptionView:(id)arg1;
- (id)textOptionView;
- (void)setTextOptionView:(id)arg1;
- (id)imageOptionView;
- (void)setImageOptionView:(id)arg1;
- (long long)curSubviewIndex;
- (void)setCurSubviewIndex:(long long)arg1;
- (void).cxx_destruct;
@end

