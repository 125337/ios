@interface WCTimeLineFooterView : MMRefreshTableFooterView
{
    MMUIActivityIndicatorView * m_activityIndicatorView; // +0x28
    UILabel * m_label; // +0x30
    UIView * m_endView; // +0x38
    double m_lineViewWidth; // +0x40
    double m_lineViewHeight; // +0x48
    UIColor * m_lineColor; // +0x50
    NSString * m_normalText; // +0x58
    NSString * m_loadingText; // +0x60
    UIFont * m_textFont; // +0x68
    BOOL m_centerAlignLabel; // +0x70
    BOOL m_labelSingleLine; // +0x71
    BOOL m_enabledAfterRefreshing; // +0x72
    BOOL _m_labelNewLineBreakRules; // +0x73
    UIView * m_customizedBlankView; // +0x78
    UIColor * _m_textColor; // +0x80
    MMTerminatorViewParams * _params; // +0x88
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
- (void)onStateOfNoMoreData:(id)arg1;
- (void)genStandardTerminatorViewWithTip:(id)arg1;
- (void)setM_customizedBlankView:(id)arg1;
- (void)onStateOfNoData:(id)arg1;
- (void)layoutSubviews;
- (id)m_activityIndicatorView;
- (void)setM_activityIndicatorView:(id)arg1;
- (id)m_label;
- (void)setM_label:(id)arg1;
- (id)m_endView;
- (void)setM_endView:(id)arg1;
- (id)m_customizedBlankView;
- (double)m_lineViewWidth;
- (void)setM_lineViewWidth:(double)arg1;
- (double)m_lineViewHeight;
- (void)setM_lineViewHeight:(double)arg1;
- (id)m_lineColor;
- (void)setM_lineColor:(id)arg1;
- (id)m_normalText;
- (void)setM_normalText:(id)arg1;
- (id)m_loadingText;
- (void)setM_loadingText:(id)arg1;
- (id)m_textFont;
- (void)setM_textFont:(id)arg1;
- (BOOL)m_centerAlignLabel;
- (void)setM_centerAlignLabel:(BOOL)arg1;
- (BOOL)m_labelSingleLine;
- (void)setM_labelSingleLine:(BOOL)arg1;
- (BOOL)m_enabledAfterRefreshing;
- (void)setM_enabledAfterRefreshing:(BOOL)arg1;
- (id)m_textColor;
- (BOOL)m_labelNewLineBreakRules;
- (void)setM_labelNewLineBreakRules:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

