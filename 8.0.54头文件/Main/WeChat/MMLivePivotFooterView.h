@interface MMLivePivotFooterView : UICollectionReusableView
{
    unsigned long long _displayState; // +0x8
    NSString * _titleText; // +0x10
    MMLiveDashedLabelView * _dashedLabel; // +0x18
    UIImageView * _loadingRing; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setDisplayState:(unsigned long long)arg1;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)setTitleText:(id)arg1;
- (unsigned long long)displayState;
- (id)titleText;
- (id)dashedLabel;
- (void)setDashedLabel:(id)arg1;
- (id)loadingRing;
- (void)setLoadingRing:(id)arg1;
- (void).cxx_destruct;
@end

