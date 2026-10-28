@interface MMLiveTextureBuffer : NSObject
{
    char * _texBuff; // +0x8
    CGSize _texSize; // +0x10
}
- (id)initWithTexBuff:(char *)arg1 texSize:(CGSize)arg2;
- (void)dealloc;
- (char *)texBuff;
- (void)setTexBuff:(char *)arg1;
- (CGSize)texSize;
- (void)setTexSize:(CGSize)arg1;
@end
