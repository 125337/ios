@interface MessageCommonUploadUtil : NSObject
+ (BOOL)isEnableThumbSizeLimit;
+ (unsigned long long)getThumbSizeLimit;
+ (BOOL)isThumbImageExceedLimit:(id)arg1;
+ (BOOL)compressThumbImageIfNeeded:(id)arg1 scene:(unsigned long long)arg2;
+ (unsigned int)maxMiddleImageSize;
+ (BOOL)isMidImageInvalidForMsg:(id)arg1;
+ (id)compressImageByConfig:(id)arg1 imageData:(id)arg2 image:(id)arg3;
+ (void)generateMidImageWithPath:(id)arg1 midPath:(id)arg2 complete:(id /* block */)arg3;
+ (void)generateMidImage:(id)arg1 midPath:(id)arg2 complete:(id /* block */)arg3;
+ (void)generateMidImageWithImageData:(id)arg1 midPath:(id)arg2 complete:(id /* block */)arg3;
+ (void)generateMidImageForStorage:(id)arg1 complete:(id /* block */)arg2;
+ (void)compressMidImageForStorage:(id)arg1 imgPath:(id)arg2 complete:(id /* block */)arg3;
+ (void)generateMidImageForMsg:(id)arg1 complete:(id /* block */)arg2;
+ (void)convertImgToWxamIn:(id)arg1 complete:(id /* block */)arg2;
+ (long long)getNewToolValueForC2CWxamEncode;
@end
