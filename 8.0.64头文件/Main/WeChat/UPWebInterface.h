@interface UPWebInterface : NSObject
+ (id)getDeviceInfo;
+ (id)infoPath;
+ (BOOL)saveData:(id)arg1 error:(id *)arg2;
+ (id)getDataForKey:(id)arg1;
+ (BOOL)removeData:(id)arg1;
+ (BOOL)downloadApp:(id)arg1 error:(id *)arg2;
@end
