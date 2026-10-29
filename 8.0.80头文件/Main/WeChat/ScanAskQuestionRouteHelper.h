@interface ScanAskQuestionRouteHelper : NSObject
{
    BOOL _didPrewarmVC; // +0x8
    NSString * _sourceId; // +0x10
    unsigned long long _prefetchStartTimeMs; // +0x18
    unsigned long long _prefetchFinishTimeMs; // +0x20
    unsigned long long _lastShowEnterTimeMs; // +0x28
    long long _lastShowBranch; // +0x30
    unsigned long long _lastDeferDispatchTimeMs; // +0x38
    NSString * _prefetchedImagePath; // +0x40
    long long _prefetchState; // +0x48
    CBTAsstMultimodalWrap * _prefetchedWrap; // +0x50
    id /* block */ _pendingShowBlock; // +0x58
    unsigned long long _pendingShowGeneration; // +0x60
}
- (void)reset;
- (void)clearPrefetchState;
- (void)invalidatePendingShow;
- (id)sourceId;
- (id)latestConversationSourceId;
- (void)setLatestConversationSourceId:(id)arg1;
- (void)applyContinueAskAIShortcutToOptionsIfNeeded:(id)arg1;
- (BOOL)isEntryEnabled;
- (void)prewarmHalfScreenVCIfNeeded;
- (void)showFromVC:(id)arg1 imagePath:(id)arg2 questionText:(id)arg3 triggerType:(long long)arg4 completion:(id /* block */)arg5 dismissCallback:(id /* block */)arg6;
- (void)showFromVC:(id)arg1 imagePath:(id)arg2 questionText:(id)arg3 triggerType:(long long)arg4 intentResult:(id)arg5 completion:(id /* block */)arg6 dismissCallback:(id /* block */)arg7;
- (void)showFromVC:(id)arg1 imagePath:(id)arg2 questionText:(id)arg3 triggerType:(long long)arg4 intentResult:(id)arg5 didAppearCallback:(id /* block */)arg6 completion:(id /* block */)arg7 dismissCallback:(id /* block */)arg8;
- (void)showFromVC:(id)arg1 imagePath:(id)arg2 questionText:(id)arg3 triggerType:(long long)arg4 intentResult:(id)arg5 didAppearCallback:(id /* block */)arg6 enterScene:(int)arg7 srcInfoParams:(id)arg8 completion:(id /* block */)arg9 dismissCallback:(id /* block */)arg10;
- (void)showFlutterFromVC:(id)arg1 imagePath:(id)arg2 questionText:(id)arg3 triggerType:(long long)arg4 intentResult:(id)arg5 didAppearCallback:(id /* block */)arg6 enterScene:(int)arg7 srcInfoParams:(id)arg8 useConversationRoute:(BOOL)arg9 completion:(id /* block */)arg10 dismissCallback:(id /* block */)arg11;
- (void)showHalfScreenImmediatelyFromVC:(id)arg1 imagePath:(id)arg2 triggerType:(long long)arg3 intentResult:(id)arg4 sourceId:(id)arg5 didAppearCallback:(id /* block */)arg6 enterScene:(int)arg7 srcInfoParams:(id)arg8 completion:(id /* block */)arg9 dismissCallback:(id /* block */)arg10;
- (void)dispatchDeferredShowFromVC:(id)arg1 imagePath:(id)arg2 triggerType:(long long)arg3 intentResult:(id)arg4 sourceId:(id)arg5 didAppearCallback:(id /* block */)arg6 enterScene:(int)arg7 srcInfoParams:(id)arg8 completion:(id /* block */)arg9 dismissCallback:(id /* block */)arg10;
- (void)prefetchUploadWithImagePath:(id)arg1;
- (void)handlePrefetchCompletionForImagePath:(id)arg1 wrap:(id)arg2;
- (BOOL)isImagePathMatchPrefetch:(id)arg1;
- (void)showConversationFromVC:(id)arg1 srcInfoParams:(id)arg2 didAppearCallback:(id /* block */)arg3 completion:(id /* block */)arg4 dismissCallback:(id /* block */)arg5;
- (id)scanAIPhotoLaunchConfigWithOptions:(id)arg1;
- (void)showConfiguredHalfScreenFromVC:(id)arg1 config:(id)arg2 didAppearCallback:(id /* block */)arg3 completion:(id /* block */)arg4 dismissCallback:(id /* block */)arg5;
- (void)setSourceId:(id)arg1;
- (unsigned long long)prefetchStartTimeMs;
- (void)setPrefetchStartTimeMs:(unsigned long long)arg1;
- (unsigned long long)prefetchFinishTimeMs;
- (void)setPrefetchFinishTimeMs:(unsigned long long)arg1;
- (unsigned long long)lastShowEnterTimeMs;
- (void)setLastShowEnterTimeMs:(unsigned long long)arg1;
- (long long)lastShowBranch;
- (void)setLastShowBranch:(long long)arg1;
- (unsigned long long)lastDeferDispatchTimeMs;
- (void)setLastDeferDispatchTimeMs:(unsigned long long)arg1;
- (BOOL)didPrewarmVC;
- (void)setDidPrewarmVC:(BOOL)arg1;
- (id)prefetchedImagePath;
- (void)setPrefetchedImagePath:(id)arg1;
- (long long)prefetchState;
- (void)setPrefetchState:(long long)arg1;
- (id)prefetchedWrap;
- (void)setPrefetchedWrap:(id)arg1;
- (id /* block */)pendingShowBlock;
- (void)setPendingShowBlock:(id /* block */)arg1;
- (unsigned long long)pendingShowGeneration;
- (void)setPendingShowGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
