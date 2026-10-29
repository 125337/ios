@interface BrandProfileUpdateReminderView : UIView
{
    BOOL _emptyStateStyle; // +0x8
    BOOL _animating; // +0x9
    BrandProfileReporter * _reporter; // +0x10
    NSString * _username; // +0x18
    UILabel * _wordingLabel; // +0x20
    UIButton * _actionButton; // +0x28
}
+ (double)preferredHeight;
+ (double)emptyStatePreferredHeight;
+ (BOOL)canShowForUsername:(id)arg1;
+ (void)updateCanShow:(BOOL)arg1 expected:(BOOL)arg2 gender:(unsigned int)arg3 requestUsername:(id)arg4 forUsername:(id)arg5;
- (id)initWithUsername:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setReporter:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)reportExposureIfNeeded;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setEmptyStateStyle:(BOOL)arg1;
- (void)updateStyle;
- (void)refreshState;
- (void)onReminderStateDidChange:(id)arg1;
- (void)onActionButtonClicked:(id)arg1;
- (id)reporter;
- (BOOL)emptyStateStyle;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (BOOL)animating;
- (void)setAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
