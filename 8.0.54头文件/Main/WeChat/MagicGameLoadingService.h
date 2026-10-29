@interface MagicGameLoadingService : MMUserService <MMServiceProtocol>
{
    _TtC6WeChat19MagicGameLoadingBiz * _biz; // +0x8
    long long _reference; // +0x10
    NSMutableDictionary * __speedCollection; // +0x18
    NSMutableDictionary * _loadingStatus; // +0x20
}
+ (void)preprocess:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (void)ensureBiz;
- (id)status:(id)arg1;
- (id)status:(id)arg1 autoCreate:(BOOL)arg2;
- (id)statusForRequestKey:(id)arg1;
- (void)removeStatus:(id)arg1;
- (void)checkMainThread;
- (void)preload:(id)arg1 extra_data:(id)arg2;
- (void)start:(id)arg1 extra_data:(id)arg2;
- (void)stop:(id)arg1;
- (void)cancelPreload:(id)arg1;
- (void)forceStop;
- (void)notifyPreloadEndIfNeeded:(id)arg1;
- (void)onSetDownloadingSpeed:(id)arg1 speed:(id)arg2;
- (void)onPreloadEnd:(id)arg1;
- (id)getDownloadingSpeed:(id)arg1;
- (void)prefetchGetCodeWithResult:(unsigned long long)arg1 preDownloadRequestkey:(id)arg2;
- (id)biz;
- (void)setBiz:(id)arg1;
- (long long)reference;
- (void)setReference:(long long)arg1;
- (id)_speedCollection;
- (void)set_speedCollection:(id)arg1;
- (id)loadingStatus;
- (void)setLoadingStatus:(id)arg1;
- (void).cxx_destruct;
@end

