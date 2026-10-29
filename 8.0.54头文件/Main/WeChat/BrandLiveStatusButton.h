@interface BrandLiveStatusButton : MMUIButton
{
    MMUILabel * _textLabel; // +0x8
    UIImageView * _liveImageView; // +0x10
    unsigned long long _style; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2;
- (void)initView:(unsigned long long)arg1;
- (void)updateStatusWording:(id)arg1;
- (void)layoutSubviews;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)liveImageView;
- (void)setLiveImageView:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

