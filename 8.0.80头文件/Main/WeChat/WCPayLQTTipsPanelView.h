@interface WCPayLQTTipsPanelView : UIView
{
    FinancialInfo * _financialInfo; // +0x8
    id <WCPayLQTTipsPanelViewDelegate><WCPayWebImageViewDelegate> _delegate; // +0x10
    UIView * _backgroundView; // +0x18
    UIView * _contentView; // +0x20
    UIButton * _backButton; // +0x28
}
- (id)initTipsPanelViewWithDelegate:(id)arg1 lqtFinancialInfoData:(id)arg2;
- (void)setupContentView;
- (id)backgroundView;
- (id)backButton;
- (void)onClickBackButton;
- (double)getContentViewHeight;
- (id)contentView;
- (void)layoutContent;
- (void)layoutHeader:(id)arg1;
- (double)layoutPureTextContentWithY:(double)arg1 Height:(double)arg2;
- (double)layoutStaticVideoWithY:(double)arg1;
- (double)layoutVideoFeedWithY:(double)arg1;
- (double)layoutBottomTips;
- (void)showInView:(id)arg1;
- (void)handleTap;
- (void)confirmBtnClick;
- (void)dismiss;
- (BOOL)isPureTextHalfPage;
- (void)onVideoFeedThumbImageTap;
- (void)onStaticVideoThumbImageTap;
- (void)updateFinancialInfoData:(id)arg1;
- (id)financialInfo;
- (void)setFinancialInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setBackButton:(id)arg1;
- (void).cxx_destruct;
@end
