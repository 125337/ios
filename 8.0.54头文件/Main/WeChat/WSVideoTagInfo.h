@interface WSVideoTagInfo : NSObject <NSCopying>
{
    unsigned int _actionType; // +0x8
    unsigned int _category; // +0xc
    NSString * _tagId; // +0x10
    NSString * _tagWording; // +0x18
    NSString * _nsUrl; // +0x20
    NSString * _title; // +0x28
    NSString * _subTitle; // +0x30
    NSString * _prefixIconUrl; // +0x38
}
+ (id)FromDictionary:(id)arg1;
+ (id)ArrayFromJSON:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)generateDictionary;
- (id)tagId;
- (void)setTagId:(id)arg1;
- (id)tagWording;
- (void)setTagWording:(id)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (unsigned int)category;
- (void)setCategory:(unsigned int)arg1;
- (id)nsUrl;
- (void)setNsUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)prefixIconUrl;
- (void)setPrefixIconUrl:(id)arg1;
- (void).cxx_destruct;
@end

