@interface WCRedEnvelopesExpiredSkinViewControllerFooter : UICollectionReusableView
{
    int _loadingHintTextSize; // +0x8
    int _indicatorViewSize; // +0xc
    int _loadingHintLabelMarginLeft; // +0x10
    NSString * _limitedWording; // +0x18
    UIView * _lineViewLeft; // +0x20
    UIView * _lineViewRight; // +0x28
    UILabel * _limitedWordingLabel; // +0x30
    UIView * _limitedWordingView; // +0x38
    MMUILabel * _loadingHintLabel; // +0x40
    UIView * _loadingView; // +0x48
    MMUIActivityIndicatorView * _indicatorView; // +0x50
}
- (void)initValue;
- (void)layoutSubviews;
- (void)setupLimitedWording:(id)arg1;
- (void)updateLoadingView;
- (void)updateLimitedWordingView;
- (id)limitedWording;
- (void)setLimitedWording:(id)arg1;
- (id)lineViewLeft;
- (void)setLineViewLeft:(id)arg1;
- (id)lineViewRight;
- (void)setLineViewRight:(id)arg1;
- (id)limitedWordingLabel;
- (void)setLimitedWordingLabel:(id)arg1;
- (id)limitedWordingView;
- (void)setLimitedWordingView:(id)arg1;
- (id)loadingHintLabel;
- (void)setLoadingHintLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (int)loadingHintTextSize;
- (void)setLoadingHintTextSize:(int)arg1;
- (int)indicatorViewSize;
- (void)setIndicatorViewSize:(int)arg1;
- (int)loadingHintLabelMarginLeft;
- (void)setLoadingHintLabelMarginLeft:(int)arg1;
- (void).cxx_destruct;
@end

