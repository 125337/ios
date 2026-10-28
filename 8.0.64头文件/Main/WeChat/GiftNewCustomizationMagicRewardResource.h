@interface GiftNewCustomizationMagicRewardResource : NSObject
{
    NSString * _productId; // +0x8
    NSString * _key; // +0x10
    MMFinderLiveNewCustomGiftItemResourceURL * _engineResource; // +0x18
    NSString * _minCodeVersion; // +0x20
}
+ (id)createMagicRewardResourceWithCustomizationModel:(id)arg1;
- (BOOL)isParamUnValid;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)engineResource;
- (void)setEngineResource:(id)arg1;
- (id)minCodeVersion;
- (void)setMinCodeVersion:(id)arg1;
- (void).cxx_destruct;
@end
