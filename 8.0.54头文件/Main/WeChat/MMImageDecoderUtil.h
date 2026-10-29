@interface MMImageDecoderUtil : NSObject
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 subCode:(long long)arg3;
+ (void)transferHevcDataFrom:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)imageFromWXAMData:(id)arg1 error:(id *)arg2;
+ (id)imageOfFrame:(StWxAMFrame *)arg1 scale:(double)arg2;
@end

