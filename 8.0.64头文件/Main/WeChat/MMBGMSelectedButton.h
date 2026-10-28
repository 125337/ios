@interface MMBGMSelectedButton : MMUIButton
{
    unsigned long long _buttonState; // +0x8
    UILabel * _btnLabel; // +0x10
    WCFinderAnimationLoadingView * _loadingView; // +0x18
    UIImageView * _checkMarkIconView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)sizeToFit;
- (void)setButtonState:(unsigned long long)arg1;
- (unsigned long long)buttonState;
- (id)btnLabel;
- (void)setBtnLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)checkMarkIconView;
- (void)setCheckMarkIconView:(id)arg1;
- (void).cxx_destruct;
@end
