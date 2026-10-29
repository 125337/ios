@interface MJComposingCreationFancyTextCoordinator : UIResponder <MJComposingTextPageSheetViewControllerDelegate, MJStickerPickerViewControllerDelegate, MJStickerPickerViewModelContext, OMJPlaybackOverlayViewDelegate, MJBubbleTouchCaptureViewDelegate>
{
    BOOL _editing; // +0x8
    BOOL _interactionEnabled; // +0x9
    BOOL _editingChanged; // +0xa
    BOOL _createdSegmentInCurrentEditing; // +0xb
    BOOL _isFinalizingPageSheet; // +0xc
    BOOL _spatialChanged; // +0xd
    BOOL _spatialFinalizeScheduled; // +0xe
    BOOL _deleteMenuPresentationRequested; // +0xf
    id <MJComposingCreationFancyTextCoordinatorDelegate> _delegate; // +0x10
    OMJPlaybackOverlayView * _overlayView; // +0x18
    UIViewController * _hostViewController; // +0x20
    UIView * _renderViewContainer; // +0x28
    OMCTimeline * _timeline; // +0x30
    MJPlaybackViewModel * _playbackViewModel; // +0x38
    MJComposingTextPageSheetViewController * _pageSheetViewController; // +0x40
    MJStickerPickerViewController * _pickerViewController; // +0x48
    OMJID * _selectedSegmentID; // +0x50
    NSString * _pendingMaterialID; // +0x58
    NSString * _pendingInputText; // +0x60
    OMJID * _deleteMenuSegmentID; // +0x68
    unsigned long long _deleteMenuRequestGeneration; // +0x70
    MJBubbleTouchCaptureView * _deleteMenuTouchCaptureView; // +0x78
    MJCCFancyTextDeleteMenuView * _deleteMenuView; // +0x80
    NSObject * _positionCorrectionToken; // +0x88
    unsigned long long _dragBoundaryEdges; // +0x90
    UIImpactFeedbackGenerator * _dragBoundaryFeedbackGenerator; // +0x98
}
- (id)initWithHostViewController:(id)arg1 renderViewContainer:(id)arg2 timeline:(id)arg3 playbackViewModel:(id)arg4;
- (BOOL)canBecomeFirstResponder;
- (void)installOverlayView;
- (void)bindHandleBoxSettings;
- (void)setInteractionEnabled:(BOOL)arg1;
- (void)openNewFancyTextEditor;
- (void)finalizeEditingAndClearSelection;
- (void)playbackWillStart;
- (void)teardown;
- (void)presentEditorForSegmentID:(id)arg1;
- (void)finalizeEditingKeepingSelection:(BOOL)arg1 dismissPageSheet:(BOOL)arg2;
- (void)anchorPendingFancyTextIfReady;
- (long long)stickerPickerTextWordCountLimit;
- (id)stickerPickerPublisherSessionMetrics;
- (void)stickerPicker:(id)arg1 didChangeSelection:(id)arg2 atIndex:(long long)arg3;
- (void)stickerPicker:(id)arg1 didUpdateInputText:(id)arg2;
- (void)stickerPickerDidConfirmInput:(id)arg1;
- (void)stickerPicker:(id)arg1 keyboardWillShowWithInputBottomOffset:(double)arg2 animationDuration:(double)arg3 curve:(long long)arg4;
- (void)stickerPicker:(id)arg1 keyboardWillHideWithAnimationDuration:(double)arg2 curve:(long long)arg3;
- (void)textPageSheetViewControllerWillClose:(BOOL)arg1;
- (void)textPageSheetViewControllerDidClose:(BOOL)arg1;
- (void)overlayView:(id)arg1 didTapCanvasAtPoint:(CGPoint)arg2;
- (void)overlayView:(id)arg1 didDoubleTapOnHandleBox:(id)arg2 atPoint:(CGPoint)arg3;
- (void)selectSegmentID:(id)arg1;
- (void)removeSelection;
- (void)showHandleBoxForSelectedSegmentPresentMenu:(BOOL)arg1;
- (void)showHandleBoxForSelectedSegmentPresentMenu:(BOOL)arg1 waitForHandleBoxUpdate:(BOOL)arg2;
- (void)presentDeleteMenuWhenHandleBoxReady;
- (void)prepareDeleteMenuViewIfNeeded;
- (void)didTouchInBubbleTouchCaptureView;
- (void)dismissDeleteMenu;
- (void)deleteSelectedFancyText:(id)arg1;
- (void)overlayViewWillUpdatePosition:(id)arg1;
- (void)overlayView:(id)arg1 didUpdatePosition:(CGPoint)arg2;
- (void)overlayView:(id)arg1 didUpdateScale:(double)arg2;
- (void)overlayView:(id)arg1 didUpdateRotation:(double)arg2;
- (void)overlayViewDidEndUpdatingPosition:(id)arg1;
- (void)correctSelectedSegmentCenterPositionIfNeeded;
- (void)overlayViewDidEndUpdatingScale:(id)arg1;
- (void)overlayViewDidEndUpdatingScaleByGesture:(id)arg1;
- (void)overlayViewDidEndUpdatingScaleByControlHandle:(id)arg1;
- (void)overlayViewDidEndUpdatingRotation:(id)arg1;
- (void)overlayViewDidEndUpdatingRotationByGesture:(id)arg1;
- (void)overlayViewDidEndUpdatingRotationByControlHandle:(id)arg1;
- (void)scheduleSpatialFinalize;
- (BOOL)hasActiveSpatialGesture;
- (id)fancyTextSegmentWithID:(id)arg1;
- (void)commitTimelinePreview;
- (void)commitTimelinePreviewAtTime:(struct)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)overlayView;
- (void)setOverlayView:(id)arg1;
- (BOOL)isEditing;
- (void)setEditing:(BOOL)arg1;
- (BOOL)isInteractionEnabled;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (id)renderViewContainer;
- (void)setRenderViewContainer:(id)arg1;
- (id)timeline;
- (void)setTimeline:(id)arg1;
- (id)playbackViewModel;
- (void)setPlaybackViewModel:(id)arg1;
- (id)pageSheetViewController;
- (void)setPageSheetViewController:(id)arg1;
- (id)pickerViewController;
- (void)setPickerViewController:(id)arg1;
- (id)selectedSegmentID;
- (void)setSelectedSegmentID:(id)arg1;
- (id)pendingMaterialID;
- (void)setPendingMaterialID:(id)arg1;
- (id)pendingInputText;
- (void)setPendingInputText:(id)arg1;
- (BOOL)editingChanged;
- (void)setEditingChanged:(BOOL)arg1;
- (BOOL)createdSegmentInCurrentEditing;
- (void)setCreatedSegmentInCurrentEditing:(BOOL)arg1;
- (BOOL)isFinalizingPageSheet;
- (void)setIsFinalizingPageSheet:(BOOL)arg1;
- (BOOL)spatialChanged;
- (void)setSpatialChanged:(BOOL)arg1;
- (BOOL)spatialFinalizeScheduled;
- (void)setSpatialFinalizeScheduled:(BOOL)arg1;
- (BOOL)deleteMenuPresentationRequested;
- (void)setDeleteMenuPresentationRequested:(BOOL)arg1;
- (id)deleteMenuSegmentID;
- (void)setDeleteMenuSegmentID:(id)arg1;
- (unsigned long long)deleteMenuRequestGeneration;
- (void)setDeleteMenuRequestGeneration:(unsigned long long)arg1;
- (id)deleteMenuTouchCaptureView;
- (void)setDeleteMenuTouchCaptureView:(id)arg1;
- (id)deleteMenuView;
- (void)setDeleteMenuView:(id)arg1;
- (id)positionCorrectionToken;
- (void)setPositionCorrectionToken:(id)arg1;
- (unsigned long long)dragBoundaryEdges;
- (void)setDragBoundaryEdges:(unsigned long long)arg1;
- (id)dragBoundaryFeedbackGenerator;
- (void)setDragBoundaryFeedbackGenerator:(id)arg1;
- (void).cxx_destruct;
@end
