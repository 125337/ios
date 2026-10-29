@interface CdnComMgrUtils : NSObject
+ (BOOL)isShouldUseDCIP:(id)arg1 CreateTime:(unsigned long long)arg2;
+ (BOOL)isShouldUseDCIPForSnsImg:(id)arg1 CreateTime:(unsigned long long)arg2;
+ (id)syncBlockGetIPByUrl:(id)arg1 isOldData:(BOOL)arg2 dnsType:(unsigned int *)arg3;
@end

