@interface WSSearchBarTagHolder : NSObject
{
    unsigned int _type; // +0x8
    NSString * _displayTag; // +0x10
    NSString * _tagName; // +0x18
    NSMutableDictionary * _extInfo; // +0x20
    _NSRange _range; // +0x28
}
- (id)initWithName:(id)arg1 withType:(unsigned int)arg2;
- (id)getExternalInfoByKey:(id)arg1;
- (void)setExternalInfo:(id)arg1 forKey:(id)arg2;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)displayTag;
- (void)setDisplayTag:(id)arg1;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (void).cxx_destruct;
@end

