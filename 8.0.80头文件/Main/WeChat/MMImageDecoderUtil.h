@interface MMImageDecoderUtil : NSObject
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 subCode:(long long)arg3;
+ (void)transferHevcDataFrom:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)imageFromWXAMData:(id)arg1 error:(id *)arg2;
+ (id)imageOfFrame:(StWxAMFrame *)arg1 scale:(double)arg2;
+ (id)imageOfPsdkFrame:(stPhotoFrm *)arg1 scale:(double)arg2;
+ (id)regionImgOfPNG:(id)arg1 nX:(int)arg2 nY:(int)arg3 width:(int)arg4 height:(int)arg5;
+ (int)SplitPngImg:(id)arg1 width:(int)arg2 height:(int)arg3 callback:(id /* block */)arg4;
+ (int)SplitPngImg:(id)arg1 width:(int)arg2 height:(int)arg3 context:(void *)arg4;
+ (id)getKeyFromPNGImageData:(id)arg1 key:(id)arg2;
+ (id)writeKeyValueToPNGImageData:(id)arg1 key:(id)arg2 value:(id)arg3;
@end
