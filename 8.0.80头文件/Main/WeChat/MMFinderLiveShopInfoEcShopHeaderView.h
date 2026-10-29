@interface MMFinderLiveShopInfoEcShopHeaderView : MMUIView <MMWebImageViewDelegate>
{
    id /* block */ _clickHandler; // +0x8
    id /* block */ _intrinsicHeightChangedHandler; // +0x10
    MMUILabel * _nameLabel; // +0x18
    MMWebImageView * _inlineIconView; // +0x20
    UIImageView * _rightArrowView; // +0x28
    EcsRichTextLabel * _descLabel; // +0x30
    EcsJumpInfo * _jumpInfo; // +0x38
    CGSize _inlineIconDisplaySize; // +0x40
}
+ (double)preferredHeight;
- (double)intrinsicContentHeightForWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)setupTap;
- (void)setProfileInfo:(id)arg1;
- (void)layoutSubviews;
- (void)onLoadImageOK:(id)arg1;
- (id /* block */)clickHandler;
- (void)setClickHandler:(id /* block */)arg1;
- (id /* block */)intrinsicHeightChangedHandler;
- (void)setIntrinsicHeightChangedHandler:(id /* block */)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)inlineIconView;
- (void)setInlineIconView:(id)arg1;
- (CGSize)inlineIconDisplaySize;
- (void)setInlineIconDisplaySize:(CGSize)arg1;
- (id)rightArrowView;
- (void)setRightArrowView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
