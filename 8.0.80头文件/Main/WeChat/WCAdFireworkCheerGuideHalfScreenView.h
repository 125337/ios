@interface WCAdFireworkCheerGuideHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    WCAdFireworkCheerGuideHalfScreenInfo * _halfScreenInfo; // +0x8
    WCAdURLImageView * _iconView; // +0x10
    MMUILabel * _titleView; // +0x18
    MMUILabel * _descView; // +0x20
}
- (id)initWithHalfScreenInfo:(id)arg1;
- (void)initCommonUI;
- (void)initDetailUI;
- (void)layoutDetailSubviews;
- (id)createLabel:(id)arg1 height:(double)arg2 font:(id)arg3 textColor:(id)arg4;
- (id)iconView;
- (id)titleView;
- (id)descView;
- (double)fetchLabelHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3 lineHeight:(double)arg4;
- (void)pageSheetDidRotation;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)halfScreenInfo;
- (void)setHalfScreenInfo:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setDescView:(id)arg1;
- (void).cxx_destruct;
@end
