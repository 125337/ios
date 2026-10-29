@interface WCFinderForbidBannerView : MMUIView
{
    UIView * _containerView; // +0x8
    UIImageView * _infoImageView; // +0x10
    RichTextView * _textView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithIconName:(id)arg1 text:(id)arg2 level:(unsigned long long)arg3;
- (id)infoImageView;
- (id)textView;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void)setInfoImageView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end

