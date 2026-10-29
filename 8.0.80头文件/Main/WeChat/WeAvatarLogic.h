@interface WeAvatarLogic : NSObject <WCFinderLiveExt, MMLiveTaskMgrExt>
{
    BOOL _isReady; // +0x8
    long long _isRemoteOpen; // +0x10
    BOOL _isRuntimeError; // +0x18
    NSString * _handlingSEI; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    NSDate * _date; // +0x30
    NSDate * _requestDate; // +0x38
    NSArray * _anchor_username_list; // +0x40
    BOOL _audience_switch; // +0x48
    NSData * _server_session; // +0x50
    id <WeAvatarLogicDelegate> _delegate; // +0x58
}
- (id)taskId;
- (id)initWithTaskId:(id)arg1;
- (void)initABtest;
- (BOOL)checkAudienceNAnchorIsOpen;
- (void)setDelegate:(id)arg1;
- (void)onReceiveSEI:(id)arg1;
- (BOOL)isReady;
- (void)markRuntimeError;
- (id)generatePollingRequest;
- (void)onGetPollingFetchEventWithTaskId:(id)arg1 cmdId:(long long)arg2 respBuffer:(id)arg3 ret:(unsigned int)arg4 requestIntervalSec:(double)arg5;
- (void)onLiveTask:(id)arg1 receiveSEI:(id)arg2;
- (id)parsePollingResp:(id)arg1;
- (void)notifyOnReadyIfNeeded;
- (void)onPollingResponse:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
@end
