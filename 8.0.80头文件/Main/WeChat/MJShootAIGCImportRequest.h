@interface MJShootAIGCImportRequest : NSObject
{
    MJShootAIGCImportMaterial * _material; // +0x8
    NSString * _requestID; // +0x10
    unsigned long long _state; // +0x18
    NSString * _savedDraftPath; // +0x20
    NSArray * _renderedAssetInfos; // +0x28
    NSArray * _generatedAssetInfos; // +0x30
    OMJCamoSession * _session; // +0x38
    id /* block */ _completion; // +0x40
    id /* block */ _cancellationCompletion; // +0x48
    NSError * _terminalError; // +0x50
    OMJAIGCExplicitRequestResult * _terminalResult; // +0x58
    OMJAsyncAIGCInfo * _savedDraftInfo; // +0x60
    double _previewDeadline; // +0x68
    NSString * _pendingDraftPath; // +0x70
    id /* block */ _pendingDraftCompletion; // +0x78
}
- (id)initWithMaterial:(id)arg1;
- (void)didPrepareMaterial;
- (id)invalidResultError;
- (void)startWithSession:(id)arg1 completion:(id /* block */)arg2;
- (void)submitWhenPreviewReady;
- (BOOL)acceptsResultForID:(id)arg1;
- (void)didRenderAssets:(id)arg1;
- (void)completeWithResult:(id)arg1;
- (void)failRequestID:(id)arg1 error:(id)arg2;
- (void)deliverTerminal;
- (void)cancelWithCompletion:(id /* block */)arg1;
- (void)finishCancellation;
- (void)failPendingDraftWithError:(id)arg1;
- (void)saveDraftToPath:(id)arg1 completion:(id /* block */)arg2;
- (void)finishSavingWithError:(id)arg1;
- (id)material;
- (void)setMaterial:(id)arg1;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)savedDraftPath;
- (void)setSavedDraftPath:(id)arg1;
- (id)renderedAssetInfos;
- (void)setRenderedAssetInfos:(id)arg1;
- (id)generatedAssetInfos;
- (void)setGeneratedAssetInfos:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)cancellationCompletion;
- (void)setCancellationCompletion:(id /* block */)arg1;
- (id)terminalError;
- (void)setTerminalError:(id)arg1;
- (id)terminalResult;
- (void)setTerminalResult:(id)arg1;
- (id)savedDraftInfo;
- (void)setSavedDraftInfo:(id)arg1;
- (double)previewDeadline;
- (void)setPreviewDeadline:(double)arg1;
- (id)pendingDraftPath;
- (void)setPendingDraftPath:(id)arg1;
- (id /* block */)pendingDraftCompletion;
- (void)setPendingDraftCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
