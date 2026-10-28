@interface BrandLemmaEntry : NSObject
{
    NSString * _key; // +0x8
    NSArray * _contents; // +0x10
    NSMutableDictionary * _typeToContent; // +0x18
}
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)getLemmaForType:(unsigned int)arg1 locale:(id)arg2;
- (id)typeToContent;
- (id)key;
- (void)setKey:(id)arg1;
- (id)contents;
- (void)setContents:(id)arg1;
- (void)setTypeToContent:(id)arg1;
- (void).cxx_destruct;
@end
