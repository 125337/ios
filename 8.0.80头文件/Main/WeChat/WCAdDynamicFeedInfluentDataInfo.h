@interface WCAdDynamicFeedInfluentDataInfo : NSObject <NSCoding>
{
    NSDictionary * _influentElementInfos; // +0x8
    NSDictionary * _influentAnimations; // +0x10
    NSArray * _elementInfos; // +0x18
    NSArray * _animations; // +0x20
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)influentElementInfos;
- (id)influentAnimations;
- (void)setInfluentElementInfos:(id)arg1;
- (void)setInfluentAnimations:(id)arg1;
- (id)elementInfos;
- (void)setElementInfos:(id)arg1;
- (id)animations;
- (void)setAnimations:(id)arg1;
- (void).cxx_destruct;
@end
