@interface VoicePrintReportManager : NSObject
{
    NSString * _data; // +0x8
    NSString * _deviceId; // +0x10
}
+ (id)sharedInstance;
- (id)getSessionID;
- (void)clearSessionID;
- (id)getDeviceId;
- (void)reportEvent:(id)arg1 withParams:(id)arg2;
- (void)reportViewId:(id)arg1 withEvent:(id)arg2 withParams:(id)arg3;
- (void)setSessionID:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)deviceId;
- (void)setDeviceId:(id)arg1;
- (void).cxx_destruct;
@end
