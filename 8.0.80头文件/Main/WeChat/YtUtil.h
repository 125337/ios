@interface YtUtil : NSObject
+ (id)getStringWithDic:(id)arg1;
+ (id)SelectDataStr:(id)arg1;
+ (id)UpdateSelectDataConfig:(id)arg1 withSdcs:(id)arg2 withAvcs:(id)arg3 withIsUpdateSdcs:(BOOL)arg4 withCameraConfig:(id)arg5;
+ (id)UpdateSelectDataConfig:(id)arg1 withSdcs:(id)arg2 withAvcs:(id)arg3 withIsUpdateSdcs:(BOOL)arg4;
+ (id)YTDict2NSSString:(id)arg1;
+ (id)actionSeq2Str:(id)arg1;
+ (id)jsonDict2Str:(id)arg1 withError:(id)arg2;
+ (unsigned long long)nowMs;
+ (unsigned long long)nowUs;
+ (id)encodeBase64:(id)arg1;
+ (id)UIImageWithCVMat:(void *)arg1;
+ (id)getBase64Image:(id)arg1;
@end
