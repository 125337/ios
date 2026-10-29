@interface TSMCryptoSM2Desc : NSObject
+ (id)encrypt:(int)arg1 desc:(id)arg2 plain:(id)arg3 error:(id *)arg4;
+ (id)decrypt:(int)arg1 desc:(id)arg2 cipher:(id)arg3 error:(id *)arg4;
+ (id)sign:(int)arg1 desc:(id)arg2 msg:(id)arg3 uid:(id)arg4 error:(id *)arg5;
+ (BOOL)verify:(int)arg1 desc:(id)arg2 msg:(id)arg3 uid:(id)arg4 sig:(id)arg5 error:(id *)arg6;
@end
