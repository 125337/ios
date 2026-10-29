@interface TranslateButton : UIView
{
    id <TranslateButtonDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    long long _state; // +0x18
    WorldTranslateManager * _manager; // +0x20
}
+ (id)buttonWithText:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 text:(id)arg2;
- (void)onStateChange:(long long)arg1;
- (void)_updateButtonWidth;
- (void)_commonInitWithText:(id)arg1;
- (void)layoutSubviews;
- (void)_handleTap;
- (void)setHidden:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (void).cxx_destruct;
@end
