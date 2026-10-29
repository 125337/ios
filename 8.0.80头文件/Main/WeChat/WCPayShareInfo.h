@interface WCPayShareInfo : MMObject <YYModel, NSCopying>
{
    NSString * _title; // +0x8
    NSString * _emphasisWord; // +0x10
    NSArray * _lines; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)emphasisWord;
- (void)setEmphasisWord:(id)arg1;
- (id)lines;
- (void)setLines:(id)arg1;
- (void).cxx_destruct;
@end
