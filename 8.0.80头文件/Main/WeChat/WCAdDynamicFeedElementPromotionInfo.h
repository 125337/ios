@interface WCAdDynamicFeedElementPromotionInfo : NSObject <NSCoding>
{
    WCAdDynamicFeedElementValue * _backgroundColor; // +0x8
    WCAdDynamicFeedElementValue * _leftTextColor; // +0x10
    WCAdDynamicFeedElementValue * _rightTextColor; // +0x18
    WCAdDynamicFeedElementValue * _rightNumberColor; // +0x20
    WCAdDynamicFeedElementValue * _rightNumberBackgroundColor; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)leftTextColor;
- (void)setLeftTextColor:(id)arg1;
- (id)rightTextColor;
- (void)setRightTextColor:(id)arg1;
- (id)rightNumberColor;
- (void)setRightNumberColor:(id)arg1;
- (id)rightNumberBackgroundColor;
- (void)setRightNumberBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end
