@interface MJShootAIGCAsyncGenerationStateBar : MMUIView
{
    unsigned long long _barStyle; // +0x8
    id <MJShootAIGCAsyncGenerationStateBarDelegate> _delegate; // +0x10
    MJCircleProgressView * _progressView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _descLabel; // +0x28
    UIStackView * _labelContainer; // +0x30
    MMUIButton * _notifyButton; // +0x38
}
+ (id)titleLabelFont;
+ (id)descLabelFont;
+ (id)notifyButtonFont;
+ (id)notifyButtonTitle;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)commonInit;
- (void)layoutSubviews;
- (void)switchToStyle:(unsigned long long)arg1;
- (void)notifyButtonTouchUpInside:(id)arg1;
- (void)updateProgress:(double)arg1;
- (void)updateRemainingTimeInMinute:(long long)arg1;
- (unsigned long long)barStyle;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)labelContainer;
- (void)setLabelContainer:(id)arg1;
- (id)notifyButton;
- (void)setNotifyButton:(id)arg1;
- (void).cxx_destruct;
@end
