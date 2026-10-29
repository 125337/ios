@interface WCAdDynamicFeedElementAbsoluteContainerInfo : NSObject <NSCoding>
{
    WCAdDynamicFeedElementPromotionInfo * _promotionInfo; // +0x8
    WCAdDynamicFeedElementRollTextInfo * _rollTextInfo; // +0x10
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)promotionInfo;
- (void)setPromotionInfo:(id)arg1;
- (id)rollTextInfo;
- (void)setRollTextInfo:(id)arg1;
- (void).cxx_destruct;
@end

