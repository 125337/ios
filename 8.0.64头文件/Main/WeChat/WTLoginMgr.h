@interface WTLoginMgr : MMObject
+ (id)getWTLoginAPIInstance;
+ (id)getLoginBuffer:(id)arg1 psw:(id)arg2 pwdMd5:(id)arg3;
+ (id)getCheckVerifyBuffer:(id)arg1;
+ (BOOL)resolveServerPackage:(id)arg1 WithDictionary:(id)arg2;
+ (void)clearPwdSig:(unsigned long long)arg1;
@end
