@interface WCFinderPanelTipsBubbleView : UIView
{
    WCFinderPanelTipsBubbleViewReportModel * _reportModel; // +0x8
    UILabel * _tipsLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)updateWithTips:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_configReport;
- (id)tipsLabel;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
