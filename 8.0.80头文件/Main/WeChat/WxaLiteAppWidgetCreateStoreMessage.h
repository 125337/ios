@interface WxaLiteAppWidgetCreateStoreMessage : NSObject
{
    NSString * _appId; // +0x8
    NSNumber * _aliveSeconds; // +0x10
    NSNumber * _waitDownload; // +0x18
    NSNumber * _downloadTimeout; // +0x20
}
+ (id)makeWithAppId:(id)arg1 aliveSeconds:(id)arg2 waitDownload:(id)arg3 downloadTimeout:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)aliveSeconds;
- (void)setAliveSeconds:(id)arg1;
- (id)waitDownload;
- (void)setWaitDownload:(id)arg1;
- (id)downloadTimeout;
- (void)setDownloadTimeout:(id)arg1;
- (void).cxx_destruct;
@end
