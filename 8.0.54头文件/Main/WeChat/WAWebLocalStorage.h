@interface WAWebLocalStorage : NSObject
+ (id)getQueue;
+ (void)getData:(id *)arg1 dataType:(id *)arg2 withKey:(id)arg3 storageId:(int)arg4 appID:(id)arg5;
+ (void)batchGetDataList:(id *)arg1 dataTypeList:(id *)arg2 withKeyList:(id)arg3 storageId:(int)arg4 appID:(id)arg5;
+ (BOOL)setData:(id)arg1 dataType:(id)arg2 withKey:(id)arg3 storageId:(int)arg4 appID:(id)arg5 getError:(id *)arg6;
+ (BOOL)batchSetDataList:(id)arg1 dataTypeList:(id)arg2 withKeyList:(id)arg3 storageId:(int)arg4 appID:(id)arg5 getError:(id *)arg6;
+ (BOOL)removeDataWithKey:(id)arg1 storageId:(int)arg2 appID:(id)arg3 getError:(id *)arg4;
+ (void)clearDataWithAppID:(id)arg1 storageId:(int)arg2;
+ (unsigned long long)maxStorageLengthWithAppID:(id)arg1 storageId:(int)arg2;
+ (unsigned long long)maxItemLengthWithAppID:(id)arg1;
+ (BOOL)getStorageInfoWithAppID:(id)arg1 storageId:(int)arg2 forKeys:(id *)arg3 currentSize:(unsigned long long *)arg4 limitSize:(unsigned long long *)arg5 error:(id *)arg6;
+ (BOOL)getStorageSizeWithAppID:(id)arg1 currentSize:(unsigned long long *)arg2 error:(id *)arg3;
+ (unsigned long long)ceilToKBWithByte:(unsigned long long)arg1;
@end

