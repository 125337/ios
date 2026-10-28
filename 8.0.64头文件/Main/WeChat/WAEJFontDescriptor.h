@interface WAEJFontDescriptor : NSObject
{
    NSString * source; // +0x8
    NSString * name; // +0x10
    float size; // +0x18
    float weight; // +0x1c
    BOOL bold; // +0x20
    BOOL italic; // +0x21
    unsigned long long sumhash; // +0x28
}
+ (id)descriptorWithParmas:(id)arg1;
- (void)replaceAll:(void *)arg1 from:(const void *)arg2 to:(const void *)arg3;
- (void)fontParse:(void *)arg1;
- (void)weightParse:(const void *)arg1;
- (unsigned long long)sumHash;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)source;
- (id)name;
- (float)weight;
- (float)size;
- (BOOL)bold;
- (BOOL)italic;
@end
