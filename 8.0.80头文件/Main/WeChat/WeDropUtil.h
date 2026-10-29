@interface WeDropUtil : NSObject
+ (id)AESGCMDecryptWithKeyData:(id)arg1 andData:(id)arg2;
+ (id)AESGCMDEncryptWithKeyData:(id)arg1 andData:(id)arg2;
+ (long long)getMaxCapableProtocolVersion:(unsigned long long)arg1 and:(unsigned long long)arg2;
+ (id)AESKeyFromString:(id)arg1;
+ (void)openPhotosApp;
+ (void)openPhotosAppWithCompletion:(id /* block */)arg1;
+ (void)openFilesApp:(id)arg1;
+ (void)doHaptic;
+ (id)getQRCode:(id)arg1 centerImage:(id)arg2;
+ (QBarImageInfo)getQBarImageInfoForUIImage:(id)arg1;
+ (void)freePersonalParam:(PersonalParam)arg1;
+ (void)freeQBarImageInfo:(QBarImageInfo)arg1;
+ (unsigned long long)getFreeDiskSpace;
+ (void)showLocalNotification:(BOOL)arg1;
+ (id)getSavedExternalDestinationPath;
+ (BOOL)checkDestinationWritable:(id)arg1;
+ (BOOL)isLivePhotoEnabled;
+ (unsigned long long)getSupportedProtocolVersions;
+ (void)openSystemSettings;
@end
