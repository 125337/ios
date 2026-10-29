@interface MMFinderLiveWecoinLabelViewConfig : NSObject
{
    UIColor * _iconColor; // +0x8
    double _iconLabelPadding; // +0x10
    UIFont * _labelFont; // +0x18
    UIColor * _labelTextColor; // +0x20
    CGSize _iconSize; // +0x28
}
+ (id)defaultConfig;
- (id)iconColor;
- (void)setIconColor:(id)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (double)iconLabelPadding;
- (void)setIconLabelPadding:(double)arg1;
- (id)labelFont;
- (void)setLabelFont:(id)arg1;
- (id)labelTextColor;
- (void)setLabelTextColor:(id)arg1;
- (void).cxx_destruct;
@end

