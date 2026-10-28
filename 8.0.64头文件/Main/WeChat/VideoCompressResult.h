@interface VideoCompressResult : NSObject
{
    BOOL _isSucc; // +0x8
    BOOL _isUseFFmpegHevcEncoding; // +0x9
    BOOL _isHitCache; // +0xa
    BOOL _isExportWithoutCompress; // +0xb
}
- (id)initWithSucc:(BOOL)arg1 hitCache:(BOOL)arg2 isUseFFmpegHevcEncoding:(BOOL)arg3;
- (id)initWithSucc:(BOOL)arg1 hitCache:(BOOL)arg2;
- (id)initWithUseFFmpegHevcEncoding:(BOOL)arg1;
- (BOOL)isSucc;
- (void)setIsSucc:(BOOL)arg1;
- (BOOL)isUseFFmpegHevcEncoding;
- (void)setIsUseFFmpegHevcEncoding:(BOOL)arg1;
- (BOOL)isHitCache;
- (void)setIsHitCache:(BOOL)arg1;
- (BOOL)isExportWithoutCompress;
- (void)setIsExportWithoutCompress:(BOOL)arg1;
@end
