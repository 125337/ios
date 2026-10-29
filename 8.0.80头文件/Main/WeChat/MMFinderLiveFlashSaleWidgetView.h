@interface MMFinderLiveFlashSaleWidgetView : UIView <MMImageLoaderObserver>
{
    id /* block */ _onFlashSaleFinish; // +0x8
    id /* block */ _onClicked; // +0x10
    FinderLiveFlashSaleInfo * _info; // +0x18
    UIView * _contentView; // +0x20
    UIImageView * _productImageView; // +0x28
    UIView * _shadowView; // +0x30
    MMCountDownLabel * _countDownLabel; // +0x38
    UIImageView * _tagView; // +0x40
    NSURL * _currentImageURL; // +0x48
}
- (id)initWithInfo:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)onTap;
- (void)layoutSubviews;
- (void)updateWithInfo:(id)arg1;
- (void)startEntrance;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)setCurrentImageURL:(id)arg1;
- (id /* block */)onFlashSaleFinish;
- (void)setOnFlashSaleFinish:(id /* block */)arg1;
- (id /* block */)onClicked;
- (void)setOnClicked:(id /* block */)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)productImageView;
- (void)setProductImageView:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)countDownLabel;
- (void)setCountDownLabel:(id)arg1;
- (id)tagView;
- (void)setTagView:(id)arg1;
- (id)currentImageURL;
- (void).cxx_destruct;
@end
