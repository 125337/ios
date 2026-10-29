@interface MJShootAIGCAsyncGenerationStateBar : MMUIView
{
    BOOL _notifyButtonHidden; // +0x8
    unsigned long long _barStyle; // +0x10
    id <MJShootAIGCAsyncGenerationStateBarDelegate> _delegate; // +0x18
    long long _estimatedAigcWaitTimeInMinute; // +0x20
    MJCircleProgressView * _progressView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _descLabel; // +0x38
    UIStackView * _labelContainer; // +0x40
    MMUIButton * _notifyButton; // +0x48
    double _initTimestampMs; // +0x50
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
- (id)currentNotifyTimeString;
- (void)updateRemainingTimeInMinute:(long long)arg1 enableShowLongWaitButton:(BOOL)arg2;
- (void)updateDescLabelContent:(id)arg1;
- (void)updateTitleLabelContent:(id)arg1;
- (double)timeSinceInitInMilliseconds;
- (void)reportAIGCForNotifyButtonWithAction:(unsigned long long)arg1;
- (void)reportAIGCForCancelSheetWithAction:(unsigned long long)arg1;
- (void)_reportAIGCWithViewID:(id)arg1 clickKey:(id)arg2 clickFlag:(id)arg3;
- (unsigned long long)barStyle;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)estimatedAigcWaitTimeInMinute;
- (void)setEstimatedAigcWaitTimeInMinute:(long long)arg1;
- (BOOL)notifyButtonHidden;
- (void)setNotifyButtonHidden:(BOOL)arg1;
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
- (double)initTimestampMs;
- (void)setInitTimestampMs:(double)arg1;
- (void).cxx_destruct;
@end
