@interface MMFinderLiveNewCustomGiftComponentValue : NSObject <NSCopying>
{
    BOOL _customTextDisabled; // +0x8
    BOOL _usePag; // +0x9
    NSString * _key; // +0x10
    NSString * _name; // +0x18
    double _price; // +0x20
    MMFinderLiveNewCustomGiftItemResourceURL * _thumbnail; // +0x28
}
+ (id)transferFromComponentValuePB:(id)arg1 business:(id)arg2;
+ (BOOL)isComponentValuePBValid:(id)arg1 business:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (double)price;
- (void)setPrice:(double)arg1;
- (BOOL)customTextDisabled;
- (void)setCustomTextDisabled:(BOOL)arg1;
- (id)thumbnail;
- (void)setThumbnail:(id)arg1;
- (BOOL)usePag;
- (void)setUsePag:(BOOL)arg1;
- (void).cxx_destruct;
@end

