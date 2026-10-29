@interface TrackRoomEventReporter : NSObject
+ (long long)currentLogVersion;
+ (id)baseParamsWithContext:(id)arg1;
+ (void)reportClick:(id)arg1 params:(id)arg2 context:(id)arg3;
+ (void)reportEvent:(id)arg1 params:(id)arg2 context:(id)arg3;
+ (id)voipCallStartCustomInfoWithContext:(id)arg1 inPoiShareProgress:(BOOL)arg2;
@end
