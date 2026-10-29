@interface TXLiveBaseAdapter : MMRootService <TXLiveAudioSessionDelegate, V2TXLivePremierObserver, MMServiceProtocol>
{
    BOOL _isWXTalking; // +0x8
    BOOL _isInVoIP; // +0x9
    NSString * _pusherAppId; // +0x10
    id <TXLivePushJSAdapterProtocol> _pusher; // +0x18
    unsigned long long _loggingBusinessType; // +0x20
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)startLogWithType:(long long)arg1;
- (void)stopLogWithType:(long long)arg1;
- (BOOL)isWeAppLivePusherWorking;
- (void)didMonoServiceRejectMsg;
- (void)onLog:(long long)arg1 log:(id)arg2;
- (BOOL)setActive:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setMode:(id)arg1 error:(id *)arg2;
- (BOOL)setCategory:(id)arg1 error:(id *)arg2;
- (BOOL)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)isAudioModuleActiving;
- (id)pusherAppId;
- (void)setPusherAppId:(id)arg1;
- (BOOL)isWXTalking;
- (void)setIsWXTalking:(BOOL)arg1;
- (BOOL)isInVoIP;
- (void)setIsInVoIP:(BOOL)arg1;
- (id)pusher;
- (void)setPusher:(id)arg1;
- (unsigned long long)loggingBusinessType;
- (void)setLoggingBusinessType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

