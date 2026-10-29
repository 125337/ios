@interface FBSDKUtility : NSObject
+ (id)dictionaryWithQueryString:(id)arg1;
+ (id)queryStringWithDictionary:(id)arg1 error:(id *)arg2;
+ (id)URLDecode:(id)arg1;
+ (id)URLEncode:(id)arg1;
+ (id)startGCDTimerWithInterval:(double)arg1 block:(id /* block */)arg2;
+ (void)stopGCDTimer:(id)arg1;
+ (id)SHA256Hash:(id)arg1;
@end

