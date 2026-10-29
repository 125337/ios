@interface WCMomentsVisibilityBottomBar : UIView
{
    BOOL _confirmEnabled; // +0x8
    BOOL _useNegativeStyle; // +0x9
    id <WCMomentsVisibilityBottomBarDelegate> _delegate; // +0x10
    NSString * _summaryText; // +0x18
    NSString * _subtitleText; // +0x20
    NSString * _confirmTitle; // +0x28
    UIButton * _foldButton; // +0x30
    UIView * _summaryContainer; // +0x38
    UILabel * _summaryLabel; // +0x40
    UILabel * _subtitleLabel; // +0x48
    UIButton * _confirmButton; // +0x50
}
+ (double)defaultBarHeight;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 useNegativeStyle:(BOOL)arg2;
- (void)setSummaryText:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setConfirmTitle:(id)arg1;
- (void)setConfirmEnabled:(BOOL)arg1;
- (double)fittingBarHeight;
- (void)layoutSubviews;
- (void)updateConfirmEnabled;
- (void)onTapFold;
- (void)onTapConfirm;
- (void)onTapBarArea:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)summaryText;
- (id)subtitleText;
- (id)confirmTitle;
- (BOOL)isConfirmEnabled;
- (BOOL)useNegativeStyle;
- (id)foldButton;
- (void)setFoldButton:(id)arg1;
- (id)summaryContainer;
- (void)setSummaryContainer:(id)arg1;
- (id)summaryLabel;
- (void)setSummaryLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
