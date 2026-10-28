@interface WCFinderImageTextContainerView : MMUIView
{
    RichTextView * _richTextView; // +0x8
    UIImageView * _imageView; // +0x10
    long long _type; // +0x18
    id <WCFinderImageTextContainerViewDelegate> _delegate; // +0x20
    NSString * _imageName; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 type:(long long)arg2 delegate:(id)arg3;
- (void)updateWithImageName:(id)arg1 content:(id)arg2;
- (id)imageView;
- (id)richTextView;
- (void)onClickTapGes;
- (void)enableClick:(BOOL)arg1 disableColor:(id)arg2;
- (void)setRichTextView:(id)arg1;
- (void)setImageView:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageName;
- (void)setImageName:(id)arg1;
- (void).cxx_destruct;
@end
