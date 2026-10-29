@interface EnhanceTranslatingResultView : UIView
{
    UIButton * _cancelButton; // +0x8
    UIImageView * _contentImageView; // +0x10
    UIImage * _originCaptureImage; // +0x18
    UIImage * _originEnhanceImage; // +0x20
    id /* block */ _cancelHandler; // +0x28
    id /* block */ _imageClickHandler; // +0x30
    id /* block */ _autoTranslatingFinishedHandler; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)setDisplayImage:(id)arg1 imgSize:(CGSize)arg2;
- (void)cancelButtonClicked;
- (void)translateImageClicked;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)contentImageView;
- (void)setContentImageView:(id)arg1;
- (id)originCaptureImage;
- (void)setOriginCaptureImage:(id)arg1;
- (id)originEnhanceImage;
- (void)setOriginEnhanceImage:(id)arg1;
- (id /* block */)cancelHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (id /* block */)imageClickHandler;
- (void)setImageClickHandler:(id /* block */)arg1;
- (id /* block */)autoTranslatingFinishedHandler;
- (void)setAutoTranslatingFinishedHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

