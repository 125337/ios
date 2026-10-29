@interface TextStateNotifyButton : MMUIButton
{
    unsigned int _notifyCount; // +0x8
    UIView * _borderView; // +0x10
}
+ (CGRect)squareFrameForFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initBorderView;
- (void)setFrame:(CGRect)arg1;
- (void)updateImage;
- (void)setNotifyCount:(unsigned int)arg1;
- (unsigned int)notifyCount;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (void).cxx_destruct;
@end

