@interface TPRichMediaFeature : NSObject
{
    BOOL _isSelected; // +0x8
    NSString * _featureType; // +0x10
    NSArray * _binding; // +0x18
}
- (id)featureType;
- (void)setFeatureType:(id)arg1;
- (id)binding;
- (void)setBinding:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
