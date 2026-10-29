@interface WeNoteDictationMinimizeMgr : MMUserService <MinimizeTaskStateInfoDelegate, MMServiceProtocol, WeNoteDictationDelegate, IMinimizeTaskDelegateInterface>
{
    BOOL _floatingWindowVisible; // +0x8
    unsigned int _hostedFavLocalId; // +0xc
    long long _hostedDictationInputRangeStart; // +0x10
    long long _hostedDictationInputRangeLength; // +0x18
    WeNoteDictationController * _hostedController; // +0x20
    NSString * _pendingFinalText; // +0x28
}
- (id)init;
- (BOOL)isFloatingWindowVisible;
- (void)onServiceClearData;
- (void)takeOverDictation:(id)arg1 favLocalId:(unsigned int)arg2 inputRangeStart:(long long)arg3 inputRangeLength:(long long)arg4;
- (id)releaseDictation;
- (void)updateHostedFavLocalId:(unsigned int)arg1;
- (void)clearHostedDictationInputRange;
- (BOOL)hasActiveHostedDictationForFavLocalId:(unsigned int)arg1;
- (void)showFloatingWindow;
- (void)hideFloatingWindow;
- (void)forceStopDictationAndDismissWithReason:(long long)arg1;
- (void)showMinimizeTask;
- (id)buildMinimizeTaskData;
- (void)WeNoteDictationWillStart;
- (void)WeNoteDictationUIStateChanged:(int)arg1 withText:(id)arg2;
- (void)WeNoteDictationLevelMeterChanged:(float)arg1;
- (void)onCloseBtnClicked:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)navigateBackToNote;
- (void)postDictationStateChanged;
- (void)flushPendingTextToNoteViaDocLayer;
- (unsigned int)hostedFavLocalId;
- (void)setHostedFavLocalId:(unsigned int)arg1;
- (long long)hostedDictationInputRangeStart;
- (void)setHostedDictationInputRangeStart:(long long)arg1;
- (long long)hostedDictationInputRangeLength;
- (void)setHostedDictationInputRangeLength:(long long)arg1;
- (id)hostedController;
- (void)setHostedController:(id)arg1;
- (id)pendingFinalText;
- (void)setPendingFinalText:(id)arg1;
- (BOOL)floatingWindowVisible;
- (void)setFloatingWindowVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
