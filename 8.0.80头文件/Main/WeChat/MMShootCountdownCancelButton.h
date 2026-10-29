@interface MMShootCountdownCancelButton : UIControl
{
    UIView * _borderView; // +0x8
    MMUIImageView * _imageView; // +0x10
    MJShootRecordButtonConfig * _config; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)removeWithRecordingAnimationWithCompletion:(id /* block */)arg1;
- (id)borderView;
- (id)imageView;
- (void)setBorderView:(id)arg1;
- (void)setImageView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
