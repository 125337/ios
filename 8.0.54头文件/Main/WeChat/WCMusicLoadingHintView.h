@interface WCMusicLoadingHintView : UIView
{
    NSString * _loadingText; // +0x8
    MMUIActivityIndicatorView * _indicatorView; // +0x10
    MMUILabel * _textLabel; // +0x18
    double _indicatorAndLabelSpacing; // +0x20
    UIEdgeInsets _contentEdgeInsets; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)startLoading;
- (void)stopLoading;
- (void)setTextColor:(id)arg1;
- (void)setTextFont:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (void)layoutSubviews;
- (id)indicatorView;
- (id)textLabel;
- (id)loadingText;
- (UIEdgeInsets)contentEdgeInsets;
- (void)setContentEdgeInsets:(UIEdgeInsets)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (double)indicatorAndLabelSpacing;
- (void)setIndicatorAndLabelSpacing:(double)arg1;
- (void).cxx_destruct;
@end

