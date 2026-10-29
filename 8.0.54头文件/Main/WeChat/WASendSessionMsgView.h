@interface WASendSessionMsgView : UIView <MMWebImageViewDelegate>
{
    UILabel * _titleLabel; // +0x8
    MMWebImageView * _imageView; // +0x10
    MMUIActivityIndicatorView * _imageIndicatorView; // +0x18
    UIImageView * _backgroundImageView; // +0x20
    UIButton * _coverButton; // +0x28
    NSString * _imageURL; // +0x30
    NSData * _imageData; // +0x38
    unsigned long long _scene; // +0x40
    id <WASendSessionMsgViewDelegate> _viewDelegate; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateImageURL:(id)arg1 imageData:(id)arg2;
- (void)updateImageURL:(id)arg1 imageData:(id)arg2 hintTitle:(id)arg3;
- (id)getLoadedImageData;
- (void)initView;
- (void)initBackgroundImage;
- (void)initTitleLabel;
- (void)initImageView;
- (void)initCoverButton;
- (id)getHighlightImageWithImageViewFrame:(CGRect)arg1;
- (void)onClickCoverButton;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)onLoadImageOK:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end

