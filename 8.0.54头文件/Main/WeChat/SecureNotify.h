@interface SecureNotify : NSObject
+ (id)decodeSecureActionNotifyData:(id)arg1 extraData:(id)arg2;
+ (id)decodeSecureNotifyData:(char *)arg1 length:(unsigned long long)arg2;
+ (id)decodeDataWithEncryptAlgo:(unsigned int)arg1 encryptVer:(unsigned int)arg2 encryptSalt:(unsigned int)arg3 compressAlgo:(unsigned int)arg4 compressVer:(unsigned int)arg5 compressLen:(unsigned int)arg6 checkSum:(unsigned int)arg7 data:(id)arg8;
@end

