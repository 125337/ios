@interface TPDelegateManager : NSObject
{
    id <TPDLProxyDelegate> _proxyDelegate; // +0x8
    NSLock * _playLock; // +0x10
    NSLock * _proxyPlayLock; // +0x18
    NSLock * _preloadLock; // +0x20
    NSLock * _offlineLock; // +0x28
    NSMutableDictionary * _mPlayDelegateMap; // +0x30
    NSMutableDictionary * _mPreLoadDelegateMap; // +0x38
    NSMutableDictionary * _mOfflineDownloadDelegateMap; // +0x40
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x48
    NSObject<OS_dispatch_source> * _timer; // +0x50
}
+ (id)sharedInstance;
- (void)mm_initTimer;
- (void)mm_deinit;
- (void)mm_reinit:(long long)arg1;
- (id)init;
- (void)initTimer;
- (void)addPlayDelegate:(id)arg1 playId:(int)arg2;
- (void)removePlayDelegateWithPlayId:(int)arg1;
- (id)getPlayDelegateWithPlayId:(int)arg1;
- (void)addPreLoadyDelegate:(id)arg1 preloadId:(int)arg2;
- (void)removePreLoadDelegateWithPreloadId:(int)arg1;
- (id)getPreLoadDelegateWithPreloadId:(int)arg1;
- (void)addOfflineDelegate:(id)arg1 downloadId:(int)arg2;
- (void)removeOfflineDelegateWithId:(int)arg1;
- (id)getOfflineDelegateWithId:(int)arg1;
- (void)handleCallbackMessage:(long long)arg1 taskId:(int)arg2 param1:(id)arg3 param2:(id)arg4 param3:(id)arg5 param4:(id)arg6 param5:(id)arg7;
- (void)deinit;
- (void)reinit:(long long)arg1;
- (void)dispatchCallbackMessage:(long long)arg1 taskId:(int)arg2 param1:(id)arg3 param2:(id)arg4 param3:(id)arg5 param4:(id)arg6 param5:(id)arg7;
- (void)dispatchPlayMessageWithDelegate:(id)arg1 message:(long long)arg2 taskId:(int)arg3 param1:(id)arg4 param2:(id)arg5 param3:(id)arg6 param4:(id)arg7 param5:(id)arg8;
- (void)dispatchGeneralMessageWithDelegate:(id)arg1 message:(long long)arg2 taskId:(int)arg3 param1:(id)arg4 param2:(id)arg5 param3:(id)arg6 param4:(id)arg7 param5:(id)arg8;
- (void)dispatchPreloadMessageWithDelegate:(id)arg1 message:(long long)arg2 taskId:(int)arg3 param1:(id)arg4 param2:(id)arg5 param3:(id)arg6 param4:(id)arg7 param5:(id)arg8;
- (void)dispatchOfflineMessageWithDelegate:(id)arg1 message:(long long)arg2 taskId:(int)arg3 param1:(id)arg4 param2:(id)arg5 param3:(id)arg6 param4:(id)arg7 param5:(id)arg8;
- (void)dispatchUniversalMessageWithDelegate:(id)arg1 message:(long long)arg2 taskId:(int)arg3 param1:(id)arg4 param2:(id)arg5 param3:(id)arg6 param4:(id)arg7 param5:(id)arg8;
- (id)proxyDelegate;
- (void)setProxyDelegate:(id)arg1;
- (id)playLock;
- (void)setPlayLock:(id)arg1;
- (id)proxyPlayLock;
- (void)setProxyPlayLock:(id)arg1;
- (id)preloadLock;
- (void)setPreloadLock:(id)arg1;
- (id)offlineLock;
- (void)setOfflineLock:(id)arg1;
- (id)mPlayDelegateMap;
- (void)setMPlayDelegateMap:(id)arg1;
- (id)mPreLoadDelegateMap;
- (void)setMPreLoadDelegateMap:(id)arg1;
- (id)mOfflineDownloadDelegateMap;
- (void)setMOfflineDownloadDelegateMap:(id)arg1;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
