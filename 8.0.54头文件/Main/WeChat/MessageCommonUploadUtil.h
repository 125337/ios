@interface MessageCommonUploadUtil : NSObject
+ (unsigned int)maxMiddleImageSize;
+ (BOOL)isMidImageInvalidForMsg:(id)arg1;
+ (void)generateMidImage:(id)arg1 midPath:(id)arg2 complete:(id /* block */)arg3;
+ (void)generateMidImageForMsg:(id)arg1 complete:(id /* block */)arg2;
+ (void)convertImgToWxamIn:(id)arg1 complete:(id /* block */)arg2;
@end

