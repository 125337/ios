@interface WCAdDynamicFeedAnimationInfo : NSObject <NSCoding>
{
    NSString * _animationId; // +0x8
    NSString * _event; // +0x10
    double _commonStartDelay; // +0x18
    double _commonDuration; // +0x20
    NSString * _commonInterpolator; // +0x28
    NSArray * _modifiedProperty; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)parseModifiedPropertiesWithBasicWidth:(int)arg1 basicRootFontSize:(int)arg2;
- (void)processWithInfluentAnimations:(id)arg1;
- (void)mergeInfoWithInfluentAnimation:(id)arg1;
- (void)resetPropertiesWithInfluentAnimation:(id)arg1;
- (void)resetPropertyWithPropertyName:(id)arg1;
- (id)animationId;
- (void)setAnimationId:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (double)commonStartDelay;
- (void)setCommonStartDelay:(double)arg1;
- (double)commonDuration;
- (void)setCommonDuration:(double)arg1;
- (id)commonInterpolator;
- (void)setCommonInterpolator:(id)arg1;
- (id)modifiedProperty;
- (void)setModifiedProperty:(id)arg1;
- (void).cxx_destruct;
@end

