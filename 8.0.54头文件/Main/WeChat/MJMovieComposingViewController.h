@interface MJMovieComposingViewController : MMUIViewController <MJMovieComposingTitleGuideViewDelegate, MJMovieTextSuggestionContextDataSource, MJMovieTextSuggestionProcessorDelegate, MJMovieTextSuggestionSnapshotGeneratorDelegate, MJMovieTextEditInspectorDelegate, MJMovieTextTitleViewControllerDelegate, MJMovieTextContentDescViewControllerDelegate, MJMovieTextOSTRecognitionViewControllerDelegate, MJVoiceCloneViewControllerDelegate, MJStickerPickerViewControllerDelegate, MJEmotionViewControllerDelegate, MJMetaEditInspectorDelegate, MJMovieComposingRecognitionGuideViewDelegate, MMBGMSelectHalfScreenViewControllerDelegate, MJStyleEditViewModelDataSource, MJStyleEditViewControllerDelegate, OMJPlaybackOverlayViewDelegate, MJSegmentCropGestureCaptureViewDelegate, MJTimelineCanvasEditViewDelegate, MJComposingPagePanelViewDelegate, MJClippingPanelDelegate, MJTimelineContentRangeEditViewDelegate, MJPlaybackViewModelDelegate, MJSegmentSpeedInspectorViewDelegate, MJTransitionInspectorViewDelegate, MJMovieComposingInspectorDelegate, MJExportProgressMaskViewDelegate, MMMenuControllerExt>
{
    BOOL _isFirstAppear; // +0x68
    BOOL _isRenderViewShrinked; // +0x69
    BOOL _shouldAutoStartPlaying; // +0x6a
    BOOL _isTitleGuideShrinked; // +0x6b
    BOOL _shouldLeaveTextEditingWhenTextInspectorDidFinish; // +0x6c
    BOOL _isShowingTitleInputGuideInProgress; // +0x6d
    id <MJMovieComposingViewControllerDelegate> _delegate; // +0x70
    MJMovieComposingViewModel * _viewModel; // +0x78
    MJMovieComposingSession * _publisherMCSession; // +0x80
    unsigned long long _state; // +0x88
    UIImageView * _initialContentImageView; // +0x90
    MMUIButton * _exitButton; // +0x98
    MMUIButton * _feedbackButton; // +0xa0
    MMUIButton * _completeButton; // +0xa8
    MJPublisherPlaybackProgressSlider * _playbackProgressSlider; // +0xb0
    UIView * _backgroundGRView; // +0xb8
    UIView * _renderView; // +0xc0
    UIView * _renderViewContainer; // +0xc8
    OMJPlaybackOverlayView * _overlayView; // +0xd0
    MJSegmentViewModel * _previousFocusedSegmentVM; // +0xd8
    MMUIButton * _skipMovieTilteInputGuideButton; // +0xe0
    MMUIButton * _playButton; // +0xe8
    MJMovieComposingBottomBar * _bottomBar; // +0xf0
    MJGradientView * _bottomGradientView; // +0xf8
    NSMutableArray * _panelStack; // +0x100
    MJPassthroughView * _panelContainer; // +0x108
    MJClippingPanel * _clippingPanel; // +0x110
    MJTimelineViewController * _clippingTimelineVC; // +0x118
    MJActionPanelViewController * _actionPanelVC; // +0x120
    MJNarrationRecordingControlView * _recordingControlView; // +0x128
    NSMapTable * _narrationSegmentIDsByIdentifier; // +0x130
    MJMovieComposingTitleGuideView * _titleGuideView; // +0x138
    MJMovieComposingRecognitionGuideView * _recognitionGuideView; // +0x140
    MJAnalysisGuidanceManager * _analysisGuidanceManager; // +0x148
    unsigned long long _prevEditContentType; // +0x150
    MJMovieTextEditInspector * _textInspector; // +0x158
    unsigned long long _stickerEditingOptions; // +0x160
    MMBGMSelectHalfScreenViewController * _musicPickingVC; // +0x168
    MJMusicPickingViewModel * _musicPickingVM; // +0x170
    MJExportProgressMaskView * _progressView; // +0x178
    NSMutableArray * _toolbarSignalObservers; // +0x180
    MMUILabel * _canvasUserInteractionTipLabel; // +0x188
    MJSegmentViewModel * _handleBoxSegmentVM; // +0x190
    unsigned long long _handleBoxOptions; // +0x198
    OMJHandleBoxBorderStyle * _handleBoxBorderStyle; // +0x1a0
    MJVideoSafeAreaTipsView * _safeAreaTipsView; // +0x1a8
    MJSegmentCropBoxView * _cropBoxView; // +0x1b0
    MJSegmentCropGestureCaptureView * _cropGestureCaptureView; // +0x1b8
    MJMovieTextSuggestionProcessor * _movieTextSuggestionProcessor; // +0x1c0
    MJMovieTextSuggestionContext * _movieTextSuggestionContext; // +0x1c8
    MJMovieTextSuggestionSnapshotGenerator * _movieTextSuggestionSnapshotGenerator; // +0x1d0
    struct _playbackResumeTime; // +0x1d8
    struct _narrationStartTimeInTimeline; // +0x1f0
}
+ (float)calculateEmoticonAdaptiveScaleWithImageSize:(CGSize)arg1 canvasSize:(CGSize)arg2;
+ (id)defaultHandleBoxTitlesWithSegmentVM:(id)arg1 hasButton:(BOOL)arg2;
+ (id)defaultHandleBoxTitleWithSegmentType:(unsigned long long)arg1;
+ (id)defaultSpeechRoleTitleWithName:(id)arg1 hasButton:(BOOL)arg2;
+ (BOOL)shouldHandleExportError:(id)arg1;
- (void)enterTrimmingWithCompletionHandler:(id /* block */)arg1;
- (void)leaveTrimming;
- (void)setupTrimmingViews;
- (void)setupTitleGuideView;
- (void)layoutTitleGuideView;
- (void)movieComposingTitleGuideViewDidSelectCloseButton:(id)arg1;
- (void)movieComposingTitleGuideViewDidTouchUpInside:(id)arg1;
- (void)updateTitleGuideForState:(unsigned long long)arg1;
- (id)snapshotDataForMovieTextSuggestionContext:(id)arg1;
- (id)feedLocationsForMovieTextSuggestionContext:(id)arg1;
- (id)userLocationForMovieTextSuggestionContext:(id)arg1;
- (id)musicIDForMovieTextSuggestionContext:(id)arg1;
- (id)templateIDForMovieTextSuggestionContext:(id)arg1;
- (void)movieTextSuggestionProcessor:(id)arg1 didUpdateSuggestions:(id)arg2;
- (void)movieTextSuggestionSnapshotGenerator:(id)arg1 didGenerateSnapShot:(id)arg2;
- (void)preloadTextEditingMaterials;
- (void)enterTextEditingWithOptions:(unsigned long long)arg1 segmentVM:(id)arg2 editContentType:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)addTextForFancyTextSegmentVM:(id)arg1;
- (void)enterTextEditingStateWithPanel:(BOOL)arg1 shouldShrinkRenderView:(BOOL)arg2 hidePanelDuringAnimation:(BOOL)arg3 segmentVM:(id)arg4 editContentType:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (void)leaveTextEditing;
- (void)leaveTextEditingStateWithPanel:(BOOL)arg1;
- (id)setupTextEditingViewsWithSegmentVM:(id)arg1 editContentType:(unsigned long long)arg2;
- (id)setupTextPagePanelViewModelWithSegmentVM:(id)arg1 editContentType:(unsigned long long)arg2;
- (BOOL)reloadTextPagePanelIfNeeded;
- (BOOL)resetPreviewForTextPagePanelIfNeeded;
- (BOOL)updateTextPagePanelOnSkimTimeDidChange:(struct)arg1;
- (BOOL)updateTextPagePanelOnPlaybackTimeDidChange:(struct)arg1;
- (BOOL)updateTextPagePanelOnIsPlayingDidChange:(BOOL)arg1;
- (id)topTextViewController;
- (void)movieTitleVCNeedsUpdate:(id)arg1 onSkimTimeDidChange:(struct)arg2;
- (void)movieTitleVCNeedsUpdate:(id)arg1 onPlaybackTimeDidChange:(struct)arg2;
- (void)movieTitleVCNeedsUpdate:(id)arg1 onIsPlayingDidChange:(BOOL)arg2;
- (void)movieTitleVCNeedsReload:(id)arg1;
- (void)movieTitleVCNeedsResetPreview:(id)arg1;
- (void)skimToMovieTitleSegmentHeadTimeIfNeeded;
- (void)showHandleboxForMovieTitleSegment;
- (void)enterEditingStateForForMovieTitleSegment;
- (void)movieTitleVCDidSelectEditText:(id)arg1;
- (void)movieTitleHandlePanelVCTextActionWithCompletionHandler:(id /* block */)arg1;
- (void)movieTitleVCDidSelectEditStyle:(id)arg1;
- (void)movieTitleVCDidSelectTrim:(id)arg1;
- (void)movieTitleVCDidSelectDelete:(id)arg1;
- (void)movieTitleVCDidSelectTTS:(id)arg1;
- (id)movieTitleSegmentVM;
- (BOOL)checkIfMovieTitleSegmentExists:(id)arg1;
- (void)contentDescVCNeedsUpdate:(id)arg1 onSkimTimeDidChange:(struct)arg2;
- (void)contentDescVCNeedsUpdate:(id)arg1 onPlaybackTimeDidChange:(struct)arg2;
- (void)contentDescVCNeedsUpdate:(id)arg1 onIsPlayingDidChange:(BOOL)arg2;
- (void)contentDescVCNeedsReload:(id)arg1;
- (void)contentDescVCNeedsResetPreview:(id)arg1;
- (void)showHandleboxForContentDescSegmentAtTime:(struct)arg1;
- (void)contentDescVCDidSelectEditText:(id)arg1;
- (void)contentDescVCDidSelectEditStyle:(id)arg1;
- (void)contentDescVCDidSelectDelete:(id)arg1;
- (id)contentDescSegmentVM;
- (BOOL)checkIfContentDescSegmentExists:(id)arg1;
- (void)focusOnCurrentContentDescBelongingVM;
- (void)focusOnCurrentContentDescVM;
- (id)contentDescSegmentVMWitStorylineSegmentVM:(id)arg1;
- (long long)contentDescVCRequestNumberOfStoryElementSegmentVMs:(id)arg1;
- (id)contentDescVC:(id)arg1 requestStoryElementSegmentVMAtIndexPath:(id)arg2;
- (long long)contentDescVC:(id)arg1 willScrollThumbnailToTime:(struct)arg2 showHandleBox:(BOOL)arg3;
- (void)contentDescVC:(id)arg1 didTapOnSegmentAtIndexPath:(id)arg2;
- (void)OSTRecognitionVCDidSelectEditCaptionText:(id)arg1;
- (void)OSTRecognitionVCDidSelectEditCaptionStyle:(id)arg1;
- (void)OSTRecognitionVC:(id)arg1 didUpdateTimelineViewController:(id)arg2;
- (void)stickerPickerNeedsResetPreview:(id)arg1;
- (void)stickerPickerNeedsResetPreviewNeedsUpdate:(id)arg1 onIsPlayingDidChange:(BOOL)arg2;
- (void)textEditingHandlePopMenuActionWith:(id)arg1 type:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)isShowingTextInspector;
- (void)dismissTextInspector;
- (void)forceCleanupTextInspector;
- (void)enterInspectorWithEntranceType:(long long)arg1 editType:(long long)arg2 scene:(unsigned long long)arg3 segment:(id)arg4 completion:(id /* block */)arg5;
- (void)textEditInspector:(id)arg1 keyboardWillShow:(double)arg2 inspectorHeight:(double)arg3;
- (void)textEditInspector:(id)arg1 keyboardWillHide:(BOOL)arg2 inspectorHeight:(double)arg3;
- (id)textEditInspector:(id)arg1 anchorMovieTextWithMaterialID:(id)arg2;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateText:(id)arg3;
- (void)textEditInspector:(id)arg1 updateUnmarkedText:(id)arg2 isUsingSuggestion:(BOOL)arg3;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateSubText:(id)arg3;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateMaterialID:(id)arg3;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateFont:(id)arg3;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateColor:(id)arg3;
- (void)textEditInspector:(id)arg1 segmentID:(id)arg2 updateTextAnimPreset:(id)arg3;
- (void)stopPlayingAndSkimToSegmentHeadTimeIfNeeded:(id)arg1 shouldEnterEditingState:(BOOL)arg2;
- (void)textEditInspector:(id)arg1 didEndChangeMaterialWithDataType:(unsigned long long)arg2;
- (void)textEditInspectorWillBeginEditing:(id)arg1;
- (void)textEditInspectorDidFinish:(id)arg1;
- (void)showTTSTipsWithSegmentVM:(id)arg1 cancelHandler:(id /* block */)arg2 confirmHandler:(id /* block */)arg3;
- (void)showVoiceChangeTipsWithNarrationSegmentVM:(id)arg1 cancelHandler:(id /* block */)arg2 confirmHandler:(id /* block */)arg3;
- (void)textEditInspectorWillAppear:(id)arg1;
- (void)textEditInspectorWillDisappear:(id)arg1;
- (void)notifyTextEditingSegmentDidDelete;
- (BOOL)handleOverlayViewSingleTapActionForTextEdtingWithSegmentID:(id)arg1;
- (BOOL)isShowingTTSInspector;
- (void)showTTSInspectorWithSegmentVM:(id)arg1 shouldRequestVoiceChange:(BOOL)arg2;
- (void)setupClippingPanelForTTS;
- (id)setupTTSInspectorWithSegmentVM:(id)arg1 shouldRequestVoiceChange:(BOOL)arg2;
- (void)showTTSInspectorInPreviewingState:(id)arg1;
- (void)showTTSInspectorInEditingState:(id)arg1;
- (void)dismissTTSInspector;
- (void)dismissTTSInspectorInPreviewingState;
- (void)dismissTTSInspectorInEditingState;
- (void)showVoiceCloneViewController;
- (void)voiceCloneViewControllerDidFinishCloning:(id)arg1;
- (BOOL)reloadTTSInspectorContents;
- (void)enterStickerEditingWithCompletionHandler:(id /* block */)arg1;
- (void)enterStickerEditingWithSegmentVM:(id)arg1 options:(unsigned long long)arg2 editType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)leaveStickerEditing;
- (void)leaveStickerEditingWithCompletion:(id /* block */)arg1;
- (BOOL)handleOverlayViewSingleTapActionForStickerEdtingWithSegmentID:(id)arg1;
- (BOOL)isShowingWhenWhereEditInspector;
- (void)showWhenWhereEditInspectorAnimated:(BOOL)arg1 editType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)dismissWhenWhereEditInspectorWithCompletionHandler:(id /* block */)arg1;
- (id)setupStickerEditingViewsWithSegmentVM:(id)arg1;
- (id)setupStickerPagePanelViewModelWithSegmentVM:(id)arg1;
- (void)notifyStickerEditingSegmentDidDelete;
- (void)stickerPicker:(id)arg1 didChangeSelection:(id)arg2 atIndex:(long long)arg3;
- (void)updateStickerWithMaterialID:(id)arg1 forSegmentWithID:(id)arg2;
- (void)anchorStickerWithMaterialID:(id)arg1 type:(unsigned long long)arg2;
- (void)handleWhenWhereSegmentAfterAdded:(id)arg1 completion:(id /* block */)arg2;
- (void)requestLocationItemForClipSegment:(id)arg1 wwSegment:(id)arg2 completion:(id /* block */)arg3;
- (void)didEndReplaceWithStickerPicker:(id)arg1;
- (void)stickerPicker:(id)arg1 didCancelReplace:(id)arg2;
- (void)emoticonPickerWillStartLoading:(id)arg1;
- (void)emoticonPickerDidFinishLoading:(id)arg1;
- (void)emoticonPicker:(id)arg1 selectedEmoticon:(id)arg2;
- (void)updateEmoticonItem:(id)arg1 forSegmentWithID:(id)arg2;
- (void)anchorEmoticonWithEmoticonItem:(id)arg1;
- (void)fetchAnchorTimeBlock:(id /* block */)arg1;
- (void)metaEditInspector:(id)arg1 segmentVM:(id)arg2 replaceItem:(id)arg3;
- (void)metaEditInspector:(id)arg1 segmentVM:(id)arg2 updateDate:(id)arg3;
- (void)metaEditInspector:(id)arg1 segmentVM:(id)arg2 updateGeographic:(id)arg3;
- (void)didEndEditWithMetaEditInspector:(id)arg1;
- (void)metaEditInspector:(id)arg1 segmentVM:(id)arg2 didCancelEditWithBackupItem:(id)arg3;
- (void)showRecognitionGuideIfNeeded;
- (void)recognitionGuideViewDidCancel:(id)arg1;
- (void)dismissRecognitionGuideIfNeeded;
- (void)recognitionGuideViewDidConfirm:(id)arg1;
- (void)setupPanels;
- (void)presentPanel:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPanels:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)presentPanel:(id)arg1 bottomOffset:(double)arg2 animated:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)presentPanels:(id)arg1 bottomOffset:(double)arg2 animated:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)dismissPanel:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)dismissPanelWithContentView:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)containsPanelWithType:(unsigned long long)arg1;
- (id)panelWithType:(unsigned long long)arg1;
- (BOOL)_validateForPresentPanel:(id)arg1;
- (BOOL)_validateForDismissPanel:(id)arg1;
- (void)_pushPanel:(id)arg1;
- (void)_popPanel:(id)arg1;
- (id)topPanel;
- (id)topPanelViewModel;
- (void)setupNarrationViews;
- (void)updateNarrationOnFocusedSegmentDidChange;
- (void)updateNarrationOnPlayheadTimeDidChange:(struct)arg1;
- (void)updateNarrationOnPlayheadTimeDidChangeInNarrationSpeak:(struct)arg1;
- (void)updateNarrationOnPlayheadTimeDidChangeInNarrationTextInput:(struct)arg1;
- (void)_enableRecordingControl;
- (void)_disableRecordingControl;
- (BOOL)handleOverlayViewSingleTapActionForNarrationEdtingWithSegmentID:(id)arg1;
- (void)requestSpeechRecognitionWithSegmentVM:(id)arg1;
- (void)handleRecordFailureWithError:(id)arg1;
- (void)narrationRecordingControlViewDidStartRecording:(id)arg1;
- (void)narrationRecordingControlViewDidStopRecording:(id)arg1;
- (void)narrationRecordingControlViewDidCancelRecording:(id)arg1;
- (void)narrationRecordingControlViewDidTapOnTypeSwitchButton:(id)arg1;
- (void)handleDidStartRecordingInNarrationSpeak;
- (void)handleDidStartRecordingInNarrationTextInput;
- (void)handleDidStopRecordingInNarrationSpeak;
- (void)handleDidStopRecordingInNarrationTextInput;
- (void)handleDidCancelRecordingInNarrationSpeak;
- (void)handleDidCancelRecordingInNarrationTextInput;
- (void)expandPlaybackDurationForRecording;
- (void)resetPlaybackDuration;
- (void)_showConfirmTipWithNarrationType:(unsigned long long)arg1 exitHandler:(id /* block */)arg2;
- (void)_updateRecordingViewWithNarrationType:(unsigned long long)arg1 recordingControlView:(id)arg2;
- (void)voiceInputManager:(id)arg1 didUpdateAudioLevel:(float)arg2 withIdentifier:(id)arg3;
- (void)voiceInputManager:(id)arg1 didStartRecordingWithIdentifier:(id)arg2 error:(id)arg3;
- (void)voiceInputManager:(id)arg1 didStopRecordingWithIdentifier:(id)arg2 isCancelled:(BOOL)arg3 audioFilePath:(id)arg4 captions:(id)arg5 error:(id)arg6;
- (void)voiceInputManager:(id)arg1 didUpdateRecognitionResult:(id)arg2 withIdentifier:(id)arg3 error:(id)arg4;
- (void)voiceInputManager:(id)arg1 didFinishRecognitionWithResult:(id)arg2 identifier:(id)arg3 error:(id)arg4;
- (void)voiceInputManager:(id)arg1 didUpdateSentenceInfo:(unsigned int)arg2 withIdentifier:(id)arg3;
- (void)voiceInputManager:(id)arg1 didUpdateDecibels:(const void *)arg2 withIdentifier:(id)arg3;
- (void)voiceInputManager:(id)arg1 didUpdateRecognitionState:(unsigned long long)arg2 withIdentifier:(id)arg3;
- (void)voiceInputManager:(id)arg1 didReachRecordingDurationLimitWithToastText:(id)arg2 identifier:(id)arg3;
- (BOOL)isRecordingAvailableAtTime:(struct)arg1;
- (float)recordingDurationLimitAtTime:(struct)arg1;
- (id)narrationSegmentVMWithIdentifier:(id)arg1;
- (void)timelineViewControllerDidSelectAdjustVolume:(id)arg1;
- (void)showTimelineVolumeInspector;
- (BOOL)dismissTimelineVolumeInspector;
- (BOOL)isShowingVoiceChangeInspector;
- (BOOL)reloadVoiceChangeInspectorContents;
- (void)enterMusicPickingWithChangeComposingState:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)leaveMusicPicking;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)bgmSelectedViewController:(id)arg1 didClickMusicOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickLyricOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickOSTOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewControllerWillClose:(id)arg1;
- (void)bgmSelectedViewControllerDidClose:(id)arg1;
- (void)handleMusicSelectResult:(id)arg1;
- (void)anchorMusicSegmentIfNeeded:(id)arg1;
- (void)anchorMusicSegment:(id)arg1;
- (void)anchorMusicSegmentInternal:(id)arg1;
- (void)didFinishMusicPicking;
- (void)enterLyricsEditingWithSegmentVM:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)leaveLyricsEditing;
- (void)setupLyricEditingViews;
- (id)currentStyleEditingSegmentVM;
- (void)styleEditVC:(id)arg1 didSelectedMaterial:(id)arg2;
- (void)styleEditVC:(id)arg1 didSelectedFont:(id)arg2;
- (void)styleEditVC:(id)arg1 didSelectedColor:(id)arg2;
- (void)styleEditVC:(id)arg1 didCancelWithBackupStyles:(id)arg2 font:(id)arg3 color:(id)arg4 anim:(id)arg5 needBackup:(BOOL)arg6;
- (void)didDoneWithStyleEditVC:(id)arg1;
- (void)bindHandleBox;
- (void)internalUpdateHandleBoxWithSettings:(id)arg1;
- (void)handleSyncPositionWith:(id)arg1;
- (void)updateHandleBoxOnFocusedSegmentDidChange;
- (void)updateHandleBoxOnTimelineDidMutate:(id)arg1 options:(unsigned long long)arg2;
- (void)updateHandleBoxOnSkimTimeDidChange;
- (void)overlayView:(id)arg1 didTapCanvasAtPoint:(CGPoint)arg2;
- (void)handleOverlayViewSingleTapActionOnBackground;
- (void)handleOverlayViewSingleTapActionWithSegmentID:(id)arg1;
- (void)overlayView:(id)arg1 didDoubleTapOnHandleBox:(id)arg2 atPoint:(CGPoint)arg3;
- (void)updateCurrentStoryElementSegmentHandleBoxWithStrokeColor:(id)arg1;
- (void)overlayViewWillUpdatePosition:(id)arg1;
- (void)overlayView:(id)arg1 didUpdatePosition:(CGPoint)arg2;
- (void)overlayViewDidEndUpdatingPosition:(id)arg1;
- (void)overlayViewWillUpdateRotation:(id)arg1;
- (void)overlayView:(id)arg1 didUpdateRotation:(double)arg2;
- (void)overlayViewDidEndUpdatingRotation:(id)arg1;
- (void)overlayViewWillUpdateScale:(id)arg1;
- (void)overlayView:(id)arg1 didUpdateScale:(double)arg2;
- (void)overlayViewDidEndUpdatingScale:(id)arg1;
- (void)syncSpatialInfoIfNeeded;
- (id)handleBoxItemsForSegmentVM:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)handleBoxOptionsForSegmentVM:(id)arg1 excludedOptions:(unsigned long long)arg2;
- (void)showHandleBoxWithSegmentID:(id)arg1;
- (void)showHandleBoxWithSegmentVM:(id)arg1 options:(unsigned long long)arg2;
- (void)showHandleBoxWithSegmentVM:(id)arg1 options:(unsigned long long)arg2 shouldStopPlaying:(BOOL)arg3;
- (void)showHandleBoxWithSegmentID:(id)arg1 borderStyle:(id)arg2;
- (void)showHandleBoxWithSegmentVM:(id)arg1 options:(unsigned long long)arg2 borderStyle:(id)arg3 shouldStopPlaying:(BOOL)arg4;
- (void)removeHandleBox;
- (void)updateHandleBoxWithIsPlaying:(BOOL)arg1;
- (void)addSafeAreaTipsView;
- (void)removeSafeAreaTipsView;
- (void)beginTrackingSafeArea;
- (void)endTrackingSafeArea;
- (void)handleBoxDeleteItemAction;
- (void)handleBoxEditItemContentAction;
- (void)handleBoxEditItemStyleAction;
- (void)handleBoxTrimItemAction;
- (void)handleBoxTTSItemAction;
- (void)handleBoxSyncPositionAction;
- (void)delayedTakingSnapshotAfterRotationOrScale;
- (void)internalTakeSnapshotAfterRotationOrScale;
- (void)enterTextEditingModeIfNeeded;
- (void)updateOverlayViewSpatialInfo;
- (void)exportAndPublish;
- (void)_exportAndPublishInnerV1;
- (void)_exportAndPublishInnerV2;
- (void)notifyComposingDidFinishWithVideoFileAtPath:(id)arg1 userInfo:(id)arg2;
- (void)notifyComposingDidFinishWithAsyncTask:(id)arg1 userInfo:(id)arg2;
- (void)notifyComposingDidFailWithError:(id)arg1;
- (BOOL)shouldInterruptExportInRedPacketEntry;
- (id)completeExportUserInfoIfNeeded:(id)arg1;
- (void)willShowCropInspector:(id)arg1;
- (void)willDismissCropInspector:(id)arg1 isFinished:(BOOL)arg2;
- (void)beginClipSkimmingForEnterCropMode;
- (void)endClipSkimmingForExitCropMode;
- (void)transitionRenderView;
- (void)layoutCropForFixedHorizontalPaddingWithVideoAspectRatio:(double)arg1;
- (void)layoutCropForFixedVerticalPaddingWithVideoAspectRatio:(double)arg1;
- (void)dismissCropInspector:(id)arg1 isFinished:(BOOL)arg2;
- (void)bindCropInspector:(id)arg1;
- (void)applyCroppedResultWithViewModel:(id)arg1 resultRect:(CGRect)arg2;
- (void)cropGestureCaptureView:(id)arg1 handlePanGesture:(id)arg2;
- (void)cropGestureCaptureView:(id)arg1 handlePinchGesture:(id)arg2;
- (void)showCropTipLabel;
- (void)removeCropTipLabel;
- (void)enterClipEditingWithNarration:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)enterClipEditingWithNarration:(BOOL)arg1 popSubPanelType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)createPanelViewWithInspectorView:(id)arg1 panelHeight:(double)arg2;
- (void)handleBackgroundTapActionForClipEditing;
- (void)setupClippingViewsWithNarration:(BOOL)arg1;
- (void)addingButtonTouchUpInside:(id)arg1;
- (void)insertPhotoVideoSegmentWithAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showCanvasPanel;
- (BOOL)dismissCanvasEditPanel;
- (void)canvasEditView:(id)arg1 didChangeAspectRatio:(id)arg2;
- (void)canvasEditView:(id)arg1 didChangeContentScaleMode:(unsigned long long)arg2;
- (void)updateWithOpDesc:(id)arg1;
- (void)showReorderClipPanel;
- (BOOL)dismissReorderClipPanel;
- (void)showEditClipContentRangePanel;
- (BOOL)dismissEditClipContentRangePanel;
- (void)timelineViewControllerDidSelectAddMusic:(id)arg1;
- (void)timelineViewControllerDidLongPress:(id)arg1;
- (void)timelineViewController:(id)arg1 didSelectTransition:(id)arg2;
- (void)actionPanelViewController:(id)arg1 showInspectorView:(id)arg2;
- (void)willShowTransitionInspector:(id)arg1;
- (void)willShowVoiceChangeInspector:(id)arg1;
- (void)actionPanelViewController:(id)arg1 dismissInspectorView:(id)arg2 isFinished:(BOOL)arg3;
- (void)willDismissTransitionInspector:(id)arg1;
- (void)actionPanelViewControllerDidSelectRemove:(id)arg1;
- (void)actionPanelViewControllerDidSelectCanvas:(id)arg1;
- (void)actionPanelViewControllerDidSelectReorder:(id)arg1;
- (void)actionPanelViewControllerDidSelectContentRange:(id)arg1;
- (void)actionPanelViewControllerDidSelectEditCaptionText:(id)arg1;
- (void)actionPanelViewControllerDidSelectEditCaptionStyle:(id)arg1;
- (void)actionPanelViewControllerDidSelectSpeechRecognition:(id)arg1;
- (void)actionPanelViewControllerDidSelectSplit:(id)arg1;
- (void)actionPanelViewControllerDidSelectRotate:(id)arg1;
- (void)actionPanelViewControllerDidSelectBatchClipping:(id)arg1 withType:(unsigned long long)arg2 duration:(struct)arg3;
- (void)timelineReorderView:(id)arg1 didSelectSegmentVM:(id)arg2;
- (unsigned long long)nextAnticlockwiseContentRotationModeWithCurrentMode:(unsigned long long)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingWithAssetInfos:(id)arg2 isUsingTemplate:(BOOL)arg3;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (void)handleImagePickerDidFinishPickingMediaActionWithAssetInfos:(id)arg1;
- (CGSize)renderSizeWithContainerSize:(CGSize)arg1;
- (CGSize)maxRenderSizeShrinked;
- (CGSize)maxRenderSizeExpanded;
- (double)composingPanelHeight;
- (void)renderViewShrinkNoAnimationWithHeight:(double)arg1;
- (void)animateRenderViewShrinkWithHeight:(double)arg1;
- (void)animateRenderViewExpandWithCompletion:(id /* block */)arg1;
- (void)layoutRenderViewOnAspectRatioDidChange;
- (id)initWithViewModel:(id)arg1;
- (void)_registerNotifications;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)showKeyboardForMovieTitleIfNeeded;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupViews;
- (void)setupInitailContentTransitionViewIfNeeded;
- (void)removeInitailContentTransitionViewIfNeeded;
- (id)overlayView;
- (id)bottomBar;
- (id)bottomGradientView;
- (id)exitButton;
- (id)feedbackButton;
- (id)completeButton;
- (id)skipMovieTilteInputGuideButton;
- (id)playButton;
- (id)playbackProgressSlider;
- (id)progressView;
- (void)autoLayoutRenderView;
- (void)layoutViews;
- (void)bindViews;
- (void)setupGestures;
- (id)timelineVM;
- (id)playbackVM;
- (void)registerYReportSdk;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)willEnterState:(unsigned long long)arg1;
- (void)willLeaveState:(unsigned long long)arg1;
- (void)didEnterState:(unsigned long long)arg1;
- (void)updatePlaybackButtonWithIsPlaying:(BOOL)arg1;
- (void)updateHandleBoxWithMutationInfo:(id)arg1;
- (void)leavePreviewing;
- (void)showExitConfirmTipWithExitHandler:(id /* block */)arg1;
- (void)exitButtonTouchUpInside:(id)arg1;
- (void)completeButtonTouchUpInside:(id)arg1;
- (void)feedbackButtonTouchUpInside:(id)arg1;
- (void)skipMovieTilteInputGuideButtonTouchUpInside:(id)arg1;
- (void)playButtonTouchUpInside:(id)arg1;
- (void)playbackControlViewValueChanged:(id)arg1;
- (void)playbackControlViewTouchDown:(id)arg1;
- (void)playbackControlViewTouchEnd:(id)arg1;
- (void)handleBottomBarAction:(long long)arg1;
- (void)bindToolbar;
- (void)toolbarPlayButtonTouchUpInside:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)toolbarUndoButtonTouchUpInside:(id)arg1;
- (void)toolbarRedoButtonTouchUpInside:(id)arg1;
- (void)reloadUndoRedoButtons;
- (id)mainPageButtons;
- (void)setMainPageButtonsHidden:(BOOL)arg1;
- (void)setButtons:(id)arg1 hidden:(BOOL)arg2;
- (void)hideMainPageButtonsAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)showMainPageButtonsAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)hideButtons:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)showButtons:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)startPlayingUsingPlaybackConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)setupPlayback;
- (void)teardownPlayback;
- (void)openAndResumePlayback:(BOOL)arg1;
- (void)pauseAndClosePlayback;
- (void)playbackViewModelWillStartPlaying:(id)arg1;
- (void)pagePanelView:(id)arg1 didAppearPageAtIndex:(long long)arg2;
- (void)pagePanelView:(id)arg1 didDisappearPageAtIndex:(long long)arg2;
- (void)clippingPanel:(id)arg1 playButtonTouchUpInside:(id)arg2;
- (void)clippingPanel:(id)arg1 undoButtonTouchUpInside:(id)arg2;
- (void)clippingPanel:(id)arg1 redoButtonTouchUpInside:(id)arg2;
- (void)clippingPanel:(id)arg1 playbackProgressSliderValueDidChange:(id)arg2;
- (void)clippingPanel:(id)arg1 playbackProgressSliderTouchDown:(id)arg2;
- (void)clippingPanel:(id)arg1 playbackProgressSliderTouchEnd:(id)arg2;
- (void)speedInspector:(id)arg1 willSelectRawSpeedRatio:(long long)arg2;
- (void)speedInspector:(id)arg1 didSelectRawSpeedRatio:(long long)arg2;
- (void)transitionInspectorDidSelectTransition:(id)arg1;
- (void)timelineContentRangeEditView:(id)arg1 didSelectSegmentVM:(id)arg2;
- (void)timelineContentRangeEditView:(id)arg1 didSkimToSegmentHeadAfterSelect:(id)arg2;
- (void)timelineContentRangeEditView:(id)arg1 selectedSegmentPlaybackTimeDidChange:(struct)arg2;
- (void)timelineContentRangeEditView:(id)arg1 selectedSegmentPlaybackDurationDidChange:(struct)arg2;
- (void)bindExport;
- (void)exportProgressMaskViewDidCancel:(id)arg1;
- (void)showTrimInspectorWithCancel:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)isShowingTrimInspector;
- (BOOL)isShowingClipEditingInspector;
- (struct)regulateTimecodeDurationWithPlaybackTime:(struct)arg1 playbackTimeRange:(struct)arg2;
- (void)showInfiniteProgressToast;
- (void)showInfiniteProgressToastWithText:(id)arg1;
- (void)showProgressToast;
- (void)showProgressToastWithText:(id)arg1;
- (void)dismissProgressToast;
- (void)showSucceededToast;
- (void)showFailedToastWithText:(id)arg1;
- (void)updateProgressToast:(double)arg1 withText:(id)arg2;
- (void)checkMemoryLeakOnExit;
- (BOOL)shouldAutorotate;
- (id)movieTextSuggestionContext;
- (id)movieTextSuggestionProcessor;
- (id)movieTextSuggestionSnapshotGenerator;
- (void)setTextInspector:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)publisherMCSession;
- (void)setPublisherMCSession:(id)arg1;
- (unsigned long long)state;
- (id)initialContentImageView;
- (void)setInitialContentImageView:(id)arg1;
- (void)setExitButton:(id)arg1;
- (void)setFeedbackButton:(id)arg1;
- (void)setCompleteButton:(id)arg1;
- (void)setPlaybackProgressSlider:(id)arg1;
- (BOOL)isFirstAppear;
- (void)setIsFirstAppear:(BOOL)arg1;
- (struct)playbackResumeTime;
- (void)setPlaybackResumeTime:(struct)arg1;
- (id)backgroundGRView;
- (void)setBackgroundGRView:(id)arg1;
- (id)renderView;
- (id)renderViewContainer;
- (BOOL)isRenderViewShrinked;
- (void)setIsRenderViewShrinked:(BOOL)arg1;
- (void)setOverlayView:(id)arg1;
- (BOOL)shouldAutoStartPlaying;
- (void)setShouldAutoStartPlaying:(BOOL)arg1;
- (id)previousFocusedSegmentVM;
- (void)setPreviousFocusedSegmentVM:(id)arg1;
- (void)setSkipMovieTilteInputGuideButton:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setBottomBar:(id)arg1;
- (void)setBottomGradientView:(id)arg1;
- (id)panelStack;
- (void)setPanelStack:(id)arg1;
- (id)panelContainer;
- (void)setPanelContainer:(id)arg1;
- (id)clippingPanel;
- (void)setClippingPanel:(id)arg1;
- (id)clippingTimelineVC;
- (void)setClippingTimelineVC:(id)arg1;
- (id)actionPanelVC;
- (void)setActionPanelVC:(id)arg1;
- (id)recordingControlView;
- (void)setRecordingControlView:(id)arg1;
- (struct)narrationStartTimeInTimeline;
- (void)setNarrationStartTimeInTimeline:(struct)arg1;
- (id)narrationSegmentIDsByIdentifier;
- (void)setNarrationSegmentIDsByIdentifier:(id)arg1;
- (id)titleGuideView;
- (void)setTitleGuideView:(id)arg1;
- (BOOL)isTitleGuideShrinked;
- (void)setIsTitleGuideShrinked:(BOOL)arg1;
- (id)recognitionGuideView;
- (void)setRecognitionGuideView:(id)arg1;
- (id)analysisGuidanceManager;
- (void)setAnalysisGuidanceManager:(id)arg1;
- (unsigned long long)prevEditContentType;
- (void)setPrevEditContentType:(unsigned long long)arg1;
- (id)textInspector;
- (BOOL)shouldLeaveTextEditingWhenTextInspectorDidFinish;
- (void)setShouldLeaveTextEditingWhenTextInspectorDidFinish:(BOOL)arg1;
- (BOOL)isShowingTitleInputGuideInProgress;
- (void)setIsShowingTitleInputGuideInProgress:(BOOL)arg1;
- (unsigned long long)stickerEditingOptions;
- (void)setStickerEditingOptions:(unsigned long long)arg1;
- (id)musicPickingVC;
- (void)setMusicPickingVC:(id)arg1;
- (id)musicPickingVM;
- (void)setMusicPickingVM:(id)arg1;
- (void)setProgressView:(id)arg1;
- (id)toolbarSignalObservers;
- (id)canvasUserInteractionTipLabel;
- (void)setCanvasUserInteractionTipLabel:(id)arg1;
- (id)handleBoxSegmentVM;
- (void)setHandleBoxSegmentVM:(id)arg1;
- (unsigned long long)handleBoxOptions;
- (void)setHandleBoxOptions:(unsigned long long)arg1;
- (id)handleBoxBorderStyle;
- (void)setHandleBoxBorderStyle:(id)arg1;
- (id)safeAreaTipsView;
- (void)setSafeAreaTipsView:(id)arg1;
- (id)cropBoxView;
- (void)setCropBoxView:(id)arg1;
- (id)cropGestureCaptureView;
- (void)setCropGestureCaptureView:(id)arg1;
- (void)setMovieTextSuggestionProcessor:(id)arg1;
- (void)setMovieTextSuggestionContext:(id)arg1;
- (void)setMovieTextSuggestionSnapshotGenerator:(id)arg1;
- (void).cxx_destruct;
@end

