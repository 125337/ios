@interface MSEMsgDataUtil : NSObject
+ (id)genClientMsgIDWithLocalID:(unsigned long long)arg1;
+ (CGSize)resultImageSizeForImageSize:(CGSize)arg1 scene:(unsigned long long)arg2;
+ (id)resizeToNormalCompressImage:(id)arg1 scene:(unsigned long long)arg2;
+ (id)resizeToNormalCompressImage:(id)arg1 ImageData:(id)arg2 scene:(unsigned long long)arg3;
+ (id)resizeToNormalCompressImage:(id)arg1 ImageData:(id)arg2 scene:(unsigned long long)arg3 imageType:(unsigned long long)arg4;
+ (void)asyncCompressImageUrl:(id)arg1 scene:(unsigned long long)arg2 complete:(id /* block */)arg3;
+ (id)genNormalCompressImageData:(id)arg1;
+ (id)genNormalCompressImageDataForSns:(id)arg1;
+ (id)genThumbnailImage:(id)arg1;
+ (id)genThumbnailImageData:(id)arg1;
+ (BOOL)isLongImage:(CGSize)arg1;
+ (CGSize)LongImageSizeWithOriginSize:(CGSize)arg1;
+ (CGSize)getNormalImageSizeWithOriginImageSize:(CGSize)arg1 targetSize:(CGSize)arg2;
+ (CGSize)calculateThumbnailFitSize:(CGSize)arg1 maxWidth:(int)arg2 maxHeight:(int)arg3;
+ (id)scaledImageWithData:(id)arg1 withSize:(CGSize)arg2 scale:(double)arg3 orientation:(long long)arg4;
+ (id)getVideoCacheFilePathFrom:(id)arg1;
+ (id)getVideoOutputFilePathFrom:(id)arg1;
+ (void)compressVideoFromUrl:(id)arg1 toOutputUrl:(id)arg2 shouldScaleDuration:(BOOL)arg3 withBlock:(id /* block */)arg4;
+ (unsigned int)getVideoDuration:(id)arg1;
+ (id)genVideoThumbImage:(id)arg1 atTime:(double)arg2;
+ (id)genVideoThumbnailImage:(id)arg1;
+ (id)genVideoThumbnailData:(id)arg1;
+ (BOOL)isSlowMotionVideo:(id)arg1;
+ (unsigned int)getFileSizeWithFilePath:(id)arg1;
+ (id)getFileMd5WithFilePath:(id)arg1;
+ (id)genWeChatSvrResourceEncryptKeyWithKeyBuf:(char *)arg1;
+ (BOOL)genCdnResourceEncryptKey:(char *)arg1;
+ (BOOL)readAndEncryptFile:(id)arg1 withEncryptKey:(char *)arg2 withResultBuffer:(AutoBuffer *)arg3;
+ (BOOL)encryptTheResourceEncryptKey:(char *)arg1 withResultBuffer:(AutoBuffer *)arg2;
@end

