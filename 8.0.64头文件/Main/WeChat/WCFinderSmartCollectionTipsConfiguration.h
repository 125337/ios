@interface WCFinderSmartCollectionTipsConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem>
{
    id /* block */ _didTapIcon; // +0x8
    double _height; // +0x10
    double _containerWidth; // +0x18
}
- (double)itemHeightWithLayoutEnvironment:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id /* block */)didTapIcon;
- (void)setDidTapIcon:(id /* block */)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (void).cxx_destruct;
@end
