@interface QBBeaconBundleUtil : NSObject
+ (void)encodeWithCoder:(id)arg1 forObject:(id)arg2;
+ (id)initWithCoder:(id)arg1 forObject:(id)arg2;
+ (BOOL)saveQimei:(id)arg1;
+ (id)getQimei;
+ (id)getBundleId;
+ (id)getBundleVersion;
+ (id)getBundleShortVer;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (BOOL)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(BOOL)arg4 error:(id *)arg5;
+ (BOOL)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
@end
