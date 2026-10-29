@interface WCFinderLiveThemeTag : NSObject
{
    unsigned int _containerType; // +0x8
    NSString * _tagText; // +0x10
    NSString * _tagValue; // +0x18
}
+ (id)finderLiveThemeTagFrom:(id)arg1;
- (id)toFinderLiveThemeTag;
- (id)tagText;
- (void)setTagText:(id)arg1;
- (id)tagValue;
- (void)setTagValue:(id)arg1;
- (unsigned int)containerType;
- (void)setContainerType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
