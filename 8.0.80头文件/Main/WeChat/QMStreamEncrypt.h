@interface QMStreamEncrypt : NSObject
{
    IStreamEncryptAndDecrypt * _streamEncryptAndDecrypt; // +0x8
    NSString * _ekey; // +0x10
    long long _tailSize; // +0x18
}
+ (BOOL)fileIsExistWithPath:(id)arg1;
+ (BOOL)writeEKeyToEndOfFile:(id)arg1 ekey:(id)arg2;
+ (IStreamEncryptAndDecrypt *)createStreamEncryptIns:(id)arg1;
- (id)initWithEKey:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (void)dealloc;
- (void)streamDecrypt:(char *)arg1 offset:(unsigned long long)arg2 size:(int)arg3;
- (void)streamEncrypt:(char *)arg1 offset:(unsigned long long)arg2 size:(int)arg3;
- (BOOL)writeEKeyToEndOfFile:(id)arg1;
- (BOOL)readEKeyFromFileHandle:(id)arg1;
- (BOOL)checkFileHeader:(id)arg1;
- (BOOL)isValidFile:(id)arg1;
- (id)ekey;
- (long long)tailSize;
- (void).cxx_destruct;
@end
