@interface MJGlobalFilterViewModel : NSObject
{
    BOOL _listFailed; // +0x8
    BOOL _wasPlaying; // +0x9
    BOOL _stopped; // +0xa
    BOOL _submitting; // +0xb
    BOOL _selectionPending; // +0xc
    BOOL _listLoading; // +0xd
    BOOL _resourceLoading; // +0xe
    NSArray * _items; // +0x10
    MJGlobalFilterState * _displayState; // +0x18
    id /* block */ _finishPresentation; // +0x20
    id /* block */ _didChange; // +0x28
    id /* block */ _didFail; // +0x30
    MJMovieComposingViewModel * _composingVM; // +0x38
    OMCPlaybackSession * _playbackSession; // +0x40
    unsigned long long _phase; // +0x48
    MJGlobalFilterSnapshot * _entranceSnapshot; // +0x50
    MJGlobalFilterSnapshot * _successfulSnapshot; // +0x58
    MJGlobalFilterState * _pendingState; // +0x60
    unsigned long long _pendingGeneration; // +0x68
    unsigned long long _selectionGeneration; // +0x70
    unsigned long long _listGeneration; // +0x78
    NSMutableArray * _finishHandlers; // +0x80
    id /* block */ _pendingDraftAutoSave; // +0x88
    struct _resumeTime; // +0x90
}
- (id)initWithComposingViewModel:(id)arg1;
- (BOOL)isPlaybackSessionCurrent;
- (BOOL)ready;
- (BOOL)loading;
- (BOOL)canAdjustIntensity;
- (BOOL)closing;
- (BOOL)finished;
- (void)begin;
- (void)fetchItems;
- (void)selectItem:(id)arg1;
- (void)setIntensity:(float)arg1;
- (void)drainPendingUpdate;
- (void)rollbackFailedUpdate:(id)arg1 generation:(unsigned long long)arg2;
- (void)deferDraftAutoSaveUntilFinished:(id /* block */)arg1;
- (void)finishWithCompletion:(id /* block */)arg1;
- (void)drainClosingUpdate;
- (void)completeVisit;
- (id)items;
- (void)setItems:(id)arg1;
- (id)displayState;
- (void)setDisplayState:(id)arg1;
- (id /* block */)finishPresentation;
- (void)setFinishPresentation:(id /* block */)arg1;
- (BOOL)listFailed;
- (void)setListFailed:(BOOL)arg1;
- (BOOL)wasPlaying;
- (struct)resumeTime;
- (id /* block */)didChange;
- (void)setDidChange:(id /* block */)arg1;
- (id /* block */)didFail;
- (void)setDidFail:(id /* block */)arg1;
- (id)composingVM;
- (void)setComposingVM:(id)arg1;
- (id)playbackSession;
- (void)setPlaybackSession:(id)arg1;
- (unsigned long long)phase;
- (void)setPhase:(unsigned long long)arg1;
- (id)entranceSnapshot;
- (void)setEntranceSnapshot:(id)arg1;
- (id)successfulSnapshot;
- (void)setSuccessfulSnapshot:(id)arg1;
- (id)pendingState;
- (void)setPendingState:(id)arg1;
- (BOOL)stopped;
- (void)setStopped:(BOOL)arg1;
- (BOOL)submitting;
- (void)setSubmitting:(BOOL)arg1;
- (unsigned long long)pendingGeneration;
- (void)setPendingGeneration:(unsigned long long)arg1;
- (BOOL)selectionPending;
- (void)setSelectionPending:(BOOL)arg1;
- (unsigned long long)selectionGeneration;
- (void)setSelectionGeneration:(unsigned long long)arg1;
- (unsigned long long)listGeneration;
- (void)setListGeneration:(unsigned long long)arg1;
- (id)finishHandlers;
- (void)setFinishHandlers:(id)arg1;
- (id /* block */)pendingDraftAutoSave;
- (void)setPendingDraftAutoSave:(id /* block */)arg1;
- (BOOL)listLoading;
- (void)setListLoading:(BOOL)arg1;
- (BOOL)resourceLoading;
- (void)setResourceLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
