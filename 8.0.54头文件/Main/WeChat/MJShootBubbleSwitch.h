@interface MJShootBubbleSwitch : MMUIView
{
    id <MJShootBubbleSwitchDelegate> _delegate; // +0x8
    NSArray * _items; // +0x10
    long long _selectedIndex; // +0x18
    NSArray * _buttons; // +0x20
    MMUIView * _containerView; // +0x28
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)resetViews;
- (void)setupWithItems:(id)arg1;
- (void)switchToIndex:(long long)arg1;
- (void)updateButtonStyle:(id)arg1 selected:(BOOL)arg2;
- (void)buttonDidTouchUpInside:(id)arg1;
- (id)createSwitchButtonWithItem:(id)arg1;
- (id)containerView;
- (id)feedbackGenerator;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (id)buttons;
- (void)setButtons:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void).cxx_destruct;
@end

