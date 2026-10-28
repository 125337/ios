@interface WCStoryRefreshFooterView : MMRefreshTableFooterView
{
    BOOL _centerAlignLabel; // +0x28
    BOOL _darkStyle; // +0x29
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x30
    UILabel * _label; // +0x38
    UIView * _endView; // +0x40
    double _lineViewWidth; // +0x48
    double _lineViewHeight; // +0x50
    NSString * _normalText; // +0x58
    NSString * _loadingText; // +0x60
    UIColor * _textColor; // +0x68
    UIFont * _textFont; // +0x70
}
+ (double)heightForWidth:(double)arg1 darkSytle:(BOOL)arg2;
+ (id)terminatorViewParamsWithTip:(id)arg1 darkSytle:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 whiteLoading:(BOOL)arg2 darkSytle:(BOOL)arg3;
- (id)initWhiteLoadingWithFrame:(CGRect)arg1 darkSytle:(BOOL)arg2;
- (void)useMMSettingStyle;
- (void)resetStatus:(unsigned long long)arg1;
- (unsigned long long)getStatus;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfNoData:(id)arg1;
- (void)layoutSubviews;
- (id)labelColor;
- (BOOL)centerAlignLabel;
- (void)setCenterAlignLabel:(BOOL)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)endView;
- (void)setEndView:(id)arg1;
- (double)lineViewWidth;
- (void)setLineViewWidth:(double)arg1;
- (double)lineViewHeight;
- (void)setLineViewHeight:(double)arg1;
- (id)normalText;
- (void)setNormalText:(id)arg1;
- (id)loadingText;
- (void)setLoadingText:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (BOOL)darkStyle;
- (void)setDarkStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
