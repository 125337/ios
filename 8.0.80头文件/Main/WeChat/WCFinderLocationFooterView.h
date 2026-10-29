@interface WCFinderLocationFooterView : MMRefreshTableFooterView
{
    BOOL _centerAlignLabel; // +0x28
    BOOL _labelSingleLine; // +0x29
    BOOL _enabledAfterRefreshing; // +0x2a
    BOOL _labelNewLineBreakRules; // +0x2b
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x30
    UILabel * _label; // +0x38
    UIView * _endView; // +0x40
    UIView * _customizedBlankView; // +0x48
    double _lineViewWidth; // +0x50
    double _lineViewHeight; // +0x58
    UIColor * _lineColor; // +0x60
    NSString * _normalText; // +0x68
    NSString * _noMoreSubTitle; // +0x70
    NSString * _loadingText; // +0x78
    UIColor * _textColor; // +0x80
    UIFont * _textFont; // +0x88
    WCFinderLocationTerminatorViewParams * _params; // +0x90
    id <WCFinderLocationFooterViewDelegate> _delegate; // +0x98
    WCFinderLocationReportModel * _reportModel; // +0xa0
}
+ (double)defaultHeightWithWidth:(double)arg1;
+ (double)heightWithParams:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 whiteLoading:(BOOL)arg2;
- (id)initWhiteLoadingWithFrame:(CGRect)arg1;
- (void)setM_textColor:(id)arg1;
- (void)useMMSettingStyle;
- (id)getTerminatorViewParams;
- (void)resetStatus:(unsigned long long)arg1;
- (unsigned long long)getStatus;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)arg1 subTitle:(id)arg2;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)genStandardTerminatorViewWithTip:(id)arg1;
- (void)setM_customizedBlankView:(id)arg1;
- (void)onStateOfNoData:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)terminatorViewDidClickSubtitle;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)endView;
- (void)setEndView:(id)arg1;
- (id)customizedBlankView;
- (void)setCustomizedBlankView:(id)arg1;
- (double)lineViewWidth;
- (void)setLineViewWidth:(double)arg1;
- (double)lineViewHeight;
- (void)setLineViewHeight:(double)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (id)normalText;
- (void)setNormalText:(id)arg1;
- (id)noMoreSubTitle;
- (void)setNoMoreSubTitle:(id)arg1;
- (id)loadingText;
- (void)setLoadingText:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (BOOL)centerAlignLabel;
- (void)setCenterAlignLabel:(BOOL)arg1;
- (BOOL)labelSingleLine;
- (void)setLabelSingleLine:(BOOL)arg1;
- (BOOL)enabledAfterRefreshing;
- (void)setEnabledAfterRefreshing:(BOOL)arg1;
- (BOOL)labelNewLineBreakRules;
- (void)setLabelNewLineBreakRules:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (void).cxx_destruct;
@end
