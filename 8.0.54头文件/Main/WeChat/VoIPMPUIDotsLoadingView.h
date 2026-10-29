@interface VoIPMPUIDotsLoadingView : UIView
{
    NSArray * _viewDots; // +0x8
    unsigned long long _lightIndex; // +0x10
}
- (void)animateContinually;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (id)viewDots;
- (void)setViewDots:(id)arg1;
- (unsigned long long)lightIndex;
- (void)setLightIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

