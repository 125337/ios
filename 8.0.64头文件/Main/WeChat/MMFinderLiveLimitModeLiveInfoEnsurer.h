@interface MMFinderLiveLimitModeLiveInfoEnsurer : NSObject <WCFinderLiveExt>
{
    id /* block */ _onLiveInfoUpdated; // +0x8
    NSString * _tid; // +0x10
}
- (id)initWithTid:(id)arg1;
- (void)dealloc;
- (void)onFinderLiveInfoUpdated:(id)arg1 liveInfo:(id)arg2;
- (BOOL)ensureLiveInfoReadyIfNeededWithCompletion:(id /* block */)arg1 timeout:(double)arg2;
- (void)onLiveInfoUpdateTimeout;
- (id /* block */)onLiveInfoUpdated;
- (void)setOnLiveInfoUpdated:(id /* block */)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (void).cxx_destruct;
@end
