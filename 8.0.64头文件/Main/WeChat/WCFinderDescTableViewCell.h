@interface WCFinderDescTableViewCell : WCFinderTableViewCell <WCFinderFocusCellProtocol>
{
    id <WCFinderDescTableViewCellDelegate> _delegate; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    UIImageView * _warningImageView; // +0x18
    UILabel * _warningTitleLabel; // +0x20
    UILabel * _tipsTitleLabel; // +0x28
    UIButton * _continueButton; // +0x30
    MMTimer * _countDownTimer; // +0x38
    long long _countDownTimes; // +0x40
    UIView * _tipsView; // +0x48
}
+ (BOOL)isRecommendTips:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)setUpUI;
- (void)updateWithContentVM:(id)arg1;
- (void)startCountDownAction;
- (void)startTimmer;
- (void)countDownAction;
- (void)tipsClickActionSuccessful;
- (void)tipsClickActionFailure;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)shouldCaluculateAsFocusCell;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)warningImageView;
- (void)setWarningImageView:(id)arg1;
- (id)warningTitleLabel;
- (void)setWarningTitleLabel:(id)arg1;
- (id)tipsTitleLabel;
- (void)setTipsTitleLabel:(id)arg1;
- (id)continueButton;
- (void)setContinueButton:(id)arg1;
- (id)countDownTimer;
- (void)setCountDownTimer:(id)arg1;
- (long long)countDownTimes;
- (void)setCountDownTimes:(long long)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (void).cxx_destruct;
@end
