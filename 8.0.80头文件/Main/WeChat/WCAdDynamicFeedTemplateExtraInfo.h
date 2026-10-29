@interface WCAdDynamicFeedTemplateExtraInfo : NSObject <NSCoding>
{
    BOOL _hasEndCover; // +0x8
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasEndCover;
- (void)setHasEndCover:(BOOL)arg1;
@end
