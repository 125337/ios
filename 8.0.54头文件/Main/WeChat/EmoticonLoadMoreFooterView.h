@interface EmoticonLoadMoreFooterView : UIView
{
    BOOL _isLoading; // +0x8
    NSString * _loadingTip; // +0x10
    unsigned long long _direction; // +0x18
    UILabel * _customEmoticonSyncLabel; // +0x20
    MMUIActivityIndicatorView * _indicator; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initCustomEmoticonSyncTipWithFrame;
- (void)layoutSubviews;
- (void)setLoadingTip:(id)arg1;
- (void)setDirection:(unsigned long long)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (double)preferredDynamicLength;
- (BOOL)isLoading;
- (id)loadingTip;
- (unsigned long long)direction;
- (id)customEmoticonSyncLabel;
- (void)setCustomEmoticonSyncLabel:(id)arg1;
- (id)indicator;
- (void)setIndicator:(id)arg1;
- (void).cxx_destruct;
@end

