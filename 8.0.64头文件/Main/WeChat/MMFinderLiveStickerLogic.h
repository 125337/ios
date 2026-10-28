@interface MMFinderLiveStickerLogic : NSObject <MMFinderLiveStickerEditingViewControllerDelegate, MMFinderLiveStickerEditingActivatorContainerViewDelegate, MMLiveTaskMgrExt>
{
    BOOL _reviewSubmissionOngoing; // +0x8
    BOOL _stickerEditing; // +0x9
    MMFinderLiveTaskId * _taskId; // +0x10
    MMFinderLiveStickerItemBase * _imageSticker; // +0x18
    MMFinderLiveStickerItemBase * _textSticker; // +0x20
    MMFinderLiveStickerItemBase * _bottomMostSticker; // +0x28
    NSMutableDictionary * _pendingReviewSubmissionItems; // +0x30
    NSMutableSet * _pendingReviewRemovalItems; // +0x38
    NSMutableArray * _editingActivatorContainerViewItems; // +0x40
    MMFinderLiveStickerTextTemplateResourceRepository * _textTemplateResources; // +0x48
    unsigned long long _preemptions; // +0x50
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)setPreemptions:(unsigned long long)arg1;
- (void)showStickerActionSheetWithEditVcPresentingViewController:(id)arg1 actionSheetHostingView:(id)arg2 reporter:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)showStickerActionSheetForStickerType:(unsigned long long)arg1 withEditVcPresentingViewController:(id)arg2 actionSheetHostingView:(id)arg3 reporter:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)loadPersistentStickers;
- (void)clearPersistentStickers;
- (void)submitExistingStickersForReview;
- (void)updateStickerEnablementSwitches;
- (void)removeStickerWithSubmissionId:(id)arg1;
- (id)createEditingActivatorContainerViewWithEditVcPresentingViewController:(id)arg1 actionSheetHostingView:(id)arg2 reporter:(id)arg3;
- (void)beginOrientationChange;
- (void)endOrientationChange;
- (void)reFitPersistStickersInCurrOrientation;
- (void)updateTextTemplateResourcesWithBackendEntitiesForTextTemplates:(id)arg1 templateFonts:(id)arg2;
- (CGRect)onLiveStickerEditingViewController:(id)arg1 requestingCanvasFrameInCoordinateSpace:(id)arg2;
- (void)onLiveStickerEditingViewController:(id)arg1 addingOrChangingSticker:(id)arg2;
- (void)handleForStickerItemUpdated:(id)arg1 archiveUponFinish:(BOOL)arg2;
- (void)onLiveStickerEditingViewController:(id)arg1 removingSticker:(id)arg2;
- (void)onLiveStickerEditingViewController:(id)arg1 cancelingWithOriginalSticker:(id)arg2;
- (void)onStickerEditingActivatorViewTappedForStickerItem:(id)arg1 inContainerView:(id)arg2;
- (void)onStickerEditingActivatorViewDoubleTappedForStickerItem:(id)arg1 inContainerView:(id)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onLiveTask:(id)arg1 applyingOrConnectingMicWithOtherAnchorChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 didChangeViewCapturing:(BOOL)arg2;
- (id)liveTask;
- (void)removeSticker:(id)arg1;
- (BOOL)inLive;
- (void)navigateToEditPageForStickerType:(unsigned long long)arg1 configuration:(id)arg2 fromViewController:(id)arg3 reporter:(id)arg4;
- (void)openStickerEditingVC:(id)arg1 fromViewController:(id)arg2;
- (void)addStickerToComposition:(id)arg1;
- (void)removeStickerFromComposition:(id)arg1;
- (void)sendStickerToBackInComposition:(id)arg1;
- (void)submitPendingStickersForReview;
- (void)submitPendingStickersForRemoval:(id)arg1 failedSubmissionCount:(unsigned long long)arg2;
- (void)addStickerToTransmitComposition:(id)arg1;
- (void)removeStickerFromTransmitComposition:(id)arg1;
- (void)removeStickterItemFromAllCompositions:(id)arg1;
- (void)persistStickerItem:(id)arg1;
- (id)reFitStickerItemRenderParam:(id)arg1 forLive:(id)arg2 inOrientation:(long long)arg3;
- (void)pauseStickerComposition;
- (void)restoreStickerComposition;
- (void)updatePreemptions;
- (void)showToastMessageForCurrentPreemptions;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)imageSticker;
- (void)setImageSticker:(id)arg1;
- (id)textSticker;
- (void)setTextSticker:(id)arg1;
- (id)bottomMostSticker;
- (void)setBottomMostSticker:(id)arg1;
- (id)pendingReviewSubmissionItems;
- (void)setPendingReviewSubmissionItems:(id)arg1;
- (id)pendingReviewRemovalItems;
- (void)setPendingReviewRemovalItems:(id)arg1;
- (BOOL)reviewSubmissionOngoing;
- (void)setReviewSubmissionOngoing:(BOOL)arg1;
- (id)editingActivatorContainerViewItems;
- (void)setEditingActivatorContainerViewItems:(id)arg1;
- (id)textTemplateResources;
- (void)setTextTemplateResources:(id)arg1;
- (unsigned long long)preemptions;
- (BOOL)stickerEditing;
- (void)setStickerEditing:(BOOL)arg1;
- (void).cxx_destruct;
@end
