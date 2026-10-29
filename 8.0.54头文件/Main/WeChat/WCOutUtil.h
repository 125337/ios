@interface WCOutUtil : NSObject
+ (id)getUserDataDir;
+ (id)getUserCommonDataDir;
+ (id)getWCOutDBPath;
+ (id)getWCOutPackagePath;
+ (id)getWCoutCouponResponseCachePath;
+ (id)getWCOutPackageDirPathForTid:(id)arg1;
+ (id)getWCOutPackageFilePathForTid:(id)arg1;
+ (id)getWCOutPackageVersionPathForTid:(id)arg1;
+ (id)genLastCallContactsCallTime:(unsigned int)arg1;
+ (id)wordingForPhoneLable:(id)arg1;
+ (void)showAlert:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4;
@end

