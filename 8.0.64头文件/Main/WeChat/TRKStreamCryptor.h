@interface TRKStreamCryptor : NSObject
+ (BOOL)cryptData:(char *)arg1 size:(int)arg2 atOffset:(int)arg3;
+ (BOOL)cryptFileAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
@end
