@interface WCAdInteractionButtonView : WCAdInteractionContentView <WCCanvasImageLoaderObserver>
{
    MMUIButton * _button; // +0x68
}
- (void)dealloc;
- (id)button;
- (void)initializeGesture;
- (void)organizeSubContentViews;
- (void)onButtonClicked:(id)arg1;
- (void)setButtonIcon;
- (void)setButtonIconWithImage:(id)arg1;
- (void)updateButtonImageColor;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)setButton:(id)arg1;
- (void).cxx_destruct;
@end
