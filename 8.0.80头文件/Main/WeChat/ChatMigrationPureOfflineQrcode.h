@interface ChatMigrationPureOfflineQrcode : NSObject
+ (void)getInfoByUrl:(id)arg1 completion:(id /* block */)arg2;
+ (void)getQrcodeWithIP:(id)arg1 Port:(unsigned short)arg2 WifiName:(id)arg3 PcName:(id)arg4 TotalSize:(unsigned long long)arg5 completion:(id /* block */)arg6;
+ (void)checkQrcodeBind:(id)arg1 completion:(id /* block */)arg2;
+ (id)genIdByHello:(id)arg1 withOk:(id)arg2;
@end
