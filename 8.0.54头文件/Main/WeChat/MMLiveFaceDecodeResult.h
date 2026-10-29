@interface MMLiveFaceDecodeResult : NSObject
{
    char * _texBuff; // +0x8
    CGSize _texSize; // +0x10
}
- (BOOL)isValid;
- (char *)texBuff;
- (void)setTexBuff:(char *)arg1;
- (CGSize)texSize;
- (void)setTexSize:(CGSize)arg1;
@end

