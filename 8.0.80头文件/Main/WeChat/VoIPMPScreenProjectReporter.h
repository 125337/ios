@interface VoIPMPScreenProjectReporter : NSObject
{
    BOOL _hasPresented; // +0x8
    BOOL _hasReportedEntryExposure; // +0x9
    NSString * _sessionId; // +0x10
    long long _role; // +0x18
    unsigned long long _roomId; // +0x20
    unsigned long long _startTimeMs; // +0x28
    NSDictionary * _contentParams; // +0x30
}
+ (id)contentParamsForArguments:(id)arg1;
- (void)reportEntryExposureForView:(id)arg1;
- (id)currentCallParams;
- (id)localInitiatorType;
- (void)reportEvent:(id)arg1 viewId:(id)arg2 params:(id)arg3;
- (void)sendEvent:(id)arg1 viewId:(id)arg2 params:(id)arg3 callParams:(id)arg4;
- (void)beginRole:(long long)arg1;
- (void)beginPresentationWithArguments:(id)arg1;
- (void)beginViewing;
- (void)replaceContentType:(long long)arg1 imageCount:(long long)arg2 videoCount:(long long)arg3;
- (void)endSessionWithCallParams:(id)arg1;
- (void)endSession;
- (void)endCallForRoomId:(unsigned long long)arg1;
- (void)preserveCallForRoomId:(unsigned long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (long long)role;
- (void)setRole:(long long)arg1;
- (unsigned long long)roomId;
- (void)setRoomId:(unsigned long long)arg1;
- (unsigned long long)startTimeMs;
- (void)setStartTimeMs:(unsigned long long)arg1;
- (BOOL)hasPresented;
- (void)setHasPresented:(BOOL)arg1;
- (id)contentParams;
- (void)setContentParams:(id)arg1;
- (BOOL)hasReportedEntryExposure;
- (void)setHasReportedEntryExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
