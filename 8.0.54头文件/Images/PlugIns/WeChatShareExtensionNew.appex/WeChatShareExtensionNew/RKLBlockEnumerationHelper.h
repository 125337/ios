@interface RKLBlockEnumerationHelper : NSObject
{
    struct cachedRegex; // +0x8
    struct buffer; // +0x90
    void *[5] scratchBuffer; // +0xb0
    int : 1 needToFreeBufferUniChar; // +0xd8
}
- (id)initWithRegex:(id)arg1 options:(unsigned int)arg2 string:(id)arg3 range:(_NSRange)arg4 error:(id *)arg5;
- (void)dealloc;
@end

