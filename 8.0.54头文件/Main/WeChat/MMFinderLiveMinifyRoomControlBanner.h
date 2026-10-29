@interface MMFinderLiveMinifyRoomControlBanner : UIControl <UIGestureRecognizerDelegate>
{
    BOOL _isTransToFullScreen; // +0x8
    NSData * _minifyLastBuffer; // +0x10
    UIView * _operationView; // +0x18
    id /* block */ _getExtraTopMarginBlock; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    MMUIImageView * _imageView; // +0x30
    MMUIButton * _backgroundButton; // +0x38
    MMUIButton * _backgroundBlurButton; // +0x40
    MMUILabel * _titleLabel; // +0x48
    UIImage * _buttonBackgroundImage; // +0x50
    NSString * _buttonStartColor; // +0x58
    NSString * _buttonEndColor; // +0x60
    UITapGestureRecognizer * _tapGesture; // +0x68
}
+ (CGSize)viewSizeByBannerInfo:(id)arg1;
+ (CGSize)expendViewSizeByBannerInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)initGesture;
- (void)layoutSubviews;
- (id)genGradientImageWithStartColor:(id)arg1 endColor:(id)arg2;
- (id)imageView;
- (id)titleLabel;
- (id)backgroundButton;
- (id)backgroundBlurButton;
- (void)setMinifyLastBuffer:(id)arg1;
- (void)setBannerInfo:(id)arg1;
- (void)setBannerInfoWithUpdateViewModel:(id)arg1;
- (void)sizeToFitTitle;
- (id)bannerInfo;
- (void)acceptSizeWithCurrentBannerInfo;
- (CGSize)sizeWithCurrentBannerInfo;
- (void)zoomOutAnimate;
- (void)zoomInAnimate;
- (void)updateAfterExpend;
- (void)updateAfterMinify;
- (void)updateOnExpend;
- (void)updateOnMinify;
- (void)requestTransfromLiveRoomState;
- (id)minifyLastBuffer;
- (id)operationView;
- (void)setOperationView:(id)arg1;
- (id /* block */)getExtraTopMarginBlock;
- (void)setGetExtraTopMarginBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (void)setBackgroundBlurButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)buttonBackgroundImage;
- (void)setButtonBackgroundImage:(id)arg1;
- (id)buttonStartColor;
- (void)setButtonStartColor:(id)arg1;
- (id)buttonEndColor;
- (void)setButtonEndColor:(id)arg1;
- (BOOL)isTransToFullScreen;
- (void)setIsTransToFullScreen:(BOOL)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

