@interface TPPreloadProxyInternalDelegate : NSObject <TPDLProxyPreloadDelegate>
{
    int _playId; // +0x8
    id <TPPreloadProxyDelegate> _delegate; // +0x10
    id <ITPPreloadProxyLifeCycleDelegate> _lifeDelegate; // +0x18
}
- (id)initWithDelegate:(id)arg1 lifeCycleDelegate:(id)arg2;
- (void)onPrepareSuccess;
- (void)onPrepareErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(id)arg3;
- (void)onPrepareDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4 extInfo:(id)arg5;
- (int)playId;
- (void)setPlayId:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lifeDelegate;
- (void)setLifeDelegate:(id)arg1;
- (void).cxx_destruct;
@end
