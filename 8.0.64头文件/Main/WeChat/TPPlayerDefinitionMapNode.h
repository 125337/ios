@interface TPPlayerDefinitionMapNode : NSObject
{
    int _level; // +0x8
    int _definition; // +0xc
    long long _width; // +0x10
    long long _height; // +0x18
}
- (id)init;
- (int)level;
- (void)setLevel:(int)arg1;
- (int)definition;
- (void)setDefinition:(int)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
@end
