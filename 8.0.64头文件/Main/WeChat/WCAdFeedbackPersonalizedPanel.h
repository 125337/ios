@interface WCAdFeedbackPersonalizedPanel : MMUIView
{
    long long _selectedMode; // +0x8
    WCAdModeSelectView * _personalizedModeView; // +0x10
    WCAdModeSelectView * _randomModeView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)adjustUI;
- (void)onModeViewSelected:(id)arg1;
- (id)personalizedModeView;
- (id)randomModeView;
- (void)setSelectedMode:(long long)arg1;
- (long long)selectedMode;
- (void)setPersonalizedModeView:(id)arg1;
- (void)setRandomModeView:(id)arg1;
- (void).cxx_destruct;
@end
