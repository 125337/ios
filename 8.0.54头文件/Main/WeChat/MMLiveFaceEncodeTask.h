@interface MMLiveFaceEncodeTask : NSObject
{
    char * _alphaBuffer; // +0x8
    CGSize _alphaTexSize; // +0x10
}
+ (BOOL)checkParamValidForAlphaBuffer:(char *)arg1 alphaTexSize:(CGSize)arg2;
+ (id)encode:(id)arg1;
+ (void)clearEncodeStreamBuffer;
- (id)initWithAlphaBuffer:(char *)arg1 alphaTexSize:(CGSize)arg2;
- (void)dealloc;
- (char *)alphaBuffer;
- (void)setAlphaBuffer:(char *)arg1;
- (CGSize)alphaTexSize;
- (void)setAlphaTexSize:(CGSize)arg1;
@end

