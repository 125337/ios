@interface MMFinderLiveFeedHighlightTagView : UIView <MMWebImageViewDelegate>
{
    double _maxWidth; // +0x8
    UIView * _containerView; // +0x10
    UIView * _blurView; // +0x18
    MMWebImageView * _bgImgView; // +0x20
    MMWebImageView * _iconImgView; // +0x28
    MMLiveColorfulLabel * _textLabel; // +0x30
    FinderLiveCardHighlightTag * _highlightTag; // +0x38
    MMFinderLiveFeedHighlightTagBackgroundGradientView * _bgGradientView; // +0x40
    CGSize _loadImgSize; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)widthToFit:(double)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)initViews;
- (void)updateWithHighlightTag:(id)arg1;
- (BOOL)useImgMode;
- (BOOL)showIcon;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (double)maxWidth;
- (CGSize)loadImgSize;
- (void)setLoadImgSize:(CGSize)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)bgImgView;
- (void)setBgImgView:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)highlightTag;
- (void)setHighlightTag:(id)arg1;
- (id)bgGradientView;
- (void)setBgGradientView:(id)arg1;
- (void).cxx_destruct;
@end

