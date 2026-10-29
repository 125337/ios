@interface MMFinderLiveGoodsPromotionReplayFloatView : MMUIButton
{
    unsigned long long _uiType; // +0x8
    id /* block */ _replayFloatViewDidClickedBlock; // +0x10
    UIImageView * _iconView; // +0x18
    MMUILabel * _descriptionLabel; // +0x20
    UIView * _curMaskView; // +0x28
    FinderWindowProductImgButtonInfo * _imageButtonStatus; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setUiType:(unsigned long long)arg1;
- (void)updateWithImageButtonStatus:(id)arg1;
- (int)status;
- (void)onTapInside:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)startPromotionShowAnimation;
- (void)stopPromotionShowAnimation;
- (unsigned long long)uiType;
- (id /* block */)replayFloatViewDidClickedBlock;
- (void)setReplayFloatViewDidClickedBlock:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)curMaskView;
- (void)setCurMaskView:(id)arg1;
- (id)imageButtonStatus;
- (void)setImageButtonStatus:(id)arg1;
- (void).cxx_destruct;
@end
