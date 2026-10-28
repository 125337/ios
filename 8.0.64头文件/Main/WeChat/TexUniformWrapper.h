@interface TexUniformWrapper : NSObject
{
    unsigned int _texUniformY; // +0x8
    unsigned int _texUniformUV; // +0xc
}
- (id)initWithTexUniformY:(unsigned int)arg1 texUniformUV:(unsigned int)arg2;
- (unsigned int)texUniformY;
- (void)setTexUniformY:(unsigned int)arg1;
- (unsigned int)texUniformUV;
- (void)setTexUniformUV:(unsigned int)arg1;
@end
