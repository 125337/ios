@interface AppUrlMessageImageView : UIView <MMWebImageViewDelegate, AppStandardContentExternalLoadImageView>
{
    MMWebImageView * _webImgView; // +0x8
    YYAsyncImageView * _yyimgView; // +0x10
}
- (void)initWebImgView;
- (void)initYYImgView;
- (void)reInit;
- (void)layoutSubviews;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)webImgView;
- (void)setWebImgView:(id)arg1;
- (id)yyimgView;
- (void)setYyimgView:(id)arg1;
- (void).cxx_destruct;
@end
