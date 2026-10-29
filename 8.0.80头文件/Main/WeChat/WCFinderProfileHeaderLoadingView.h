@interface WCFinderProfileHeaderLoadingView : UIView
{
    NSString * _text; // +0x8
    double _backgroundTopExtension; // +0x10
    UIView * _extendedBackgroundView; // +0x18
    WCFinderAnimationLoadingView * _loadingIndicator; // +0x20
    UILabel * _textLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundTopExtension:(double)arg1;
- (void)layoutSubviews;
- (id)text;
- (double)backgroundTopExtension;
- (id)extendedBackgroundView;
- (void)setExtendedBackgroundView:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end
