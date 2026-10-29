@interface TAVKitReportCenter : NSObject
{
    NSString * _appID; // +0x8
    NSString * _directory; // +0x10
    NSObject<OS_dispatch_queue> * _queue; // +0x18
    long long _uploadingCount; // +0x20
    NSString * _appName; // +0x28
    NSString * _deviceID; // +0x30
    NSString * _deviceType; // +0x38
    NSString * _systemVersion; // +0x40
}
+ (id)instance;
- (id)init;
- (id)fetchDeviceType;
- (id)makeCommonReportFields;
- (id)makeHttpBodyForReportFile:(id)arg1 commonFields:(id)arg2;
- (void)reportFile:(id)arg1 commonFields:(id)arg2 isLast:(BOOL)arg3 callback:(id /* block */)arg4;
- (void)report:(id /* block */)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)directory;
- (void)setDirectory:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (long long)uploadingCount;
- (void)setUploadingCount:(long long)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)deviceID;
- (void)setDeviceID:(id)arg1;
- (id)deviceType;
- (void)setDeviceType:(id)arg1;
- (id)systemVersion;
- (void)setSystemVersion:(id)arg1;
- (void).cxx_destruct;
@end
