@interface MJTimelineViewModel : NSObject
{
    BOOL _shouldShowVoiceChangeInspectorAfterRecording; // +0x8
    BOOL _isContentDescStyleSynced; // +0x9
    BOOL _isOSTCaptionStyleSynced; // +0xa
    BOOL _isNarrationCaptionStyleSynced; // +0xb
    BOOL _isNarrationVoiceSynced; // +0xc
    BOOL _isTTSVoiceSynced; // +0xd
    BOOL _isTimeScaleChanged; // +0xe
    BOOL _isPreviousFocusedSegmentAnchored; // +0xf
    BOOL _isAutoVolumeAdjustmentEnabled; // +0x10
    float _narrationSegmentsVolume; // +0x14
    OMCTimeline * _timeline; // +0x18
    id <MJMovieComposingContext> _composingContext; // +0x20
    MJStorylineViewModel * _storylineVM; // +0x28
    MJTimelineViewConfiguration * _configuration; // +0x30
    double _firstRecordingEndTime; // +0x38
    unsigned long long _narrationType; // +0x40
    unsigned long long _OSTRecognitionStatus; // +0x48
    NSString * _syncedNarrationRoleID; // +0x50
    NSString * _syncedNarrationRoleName; // +0x58
    NSString * _syncedTTSRoleID; // +0x60
    NSString * _syncedTTSRoleName; // +0x68
    UBValueSignal * _playheadTimeDidChangeSignal; // +0x70
    UBValueSignal * _previewSeekToTimeSignal; // +0x78
    UBDictionarySignal * _scrollToTimeSignal; // +0x80
    double _timeScaleInPoints; // +0x88
    double _timeScaleInPixels; // +0x90
    UBEmptySignal * _timeScaleDidChangeSignal; // +0x98
    unsigned long long _timelineEditingState; // +0xa0
    UBDictionarySignal * _timelineEditingStateDidChangeSignal; // +0xa8
    NSMutableDictionary * _didSelectSegmentHandlers; // +0xb0
    OMJAspectRatio * _originalVideoAspectRatioDesc; // +0xb8
    unsigned long long _previousFocusedSegmentType; // +0xc0
    MJSegmentViewModel * _focusedSegmentVM; // +0xc8
    NSIndexPath * _trimPrepareSegmentIndexPath; // +0xd0
    UBDictionarySignal * _timelineDidMutateSignal; // +0xd8
    MJSegmentEditingStateViewModel * _segmentEditingStateVM; // +0xe0
    struct _playheadTime; // +0xe8
    struct _targetPlayheadTimeOnce; // +0x100
    struct _anchoredSegmentStartTimeBeforeMove; // +0x118
}
+ (void)disableAllImagesDigiZoomIfNeededWithTimeline:(id)arg1;
- (BOOL)isCurrentStateSegmentTrimPrepare;
- (BOOL)isCurrentStateSegmentTrimming;
- (BOOL)isCurrentStateSegmentMoving;
- (BOOL)isCurrentStateGeneralEditing;
- (void)registerCommandHandlers;
- (void)handleRenderTouchOnSegmentWithID:(id)arg1;
- (id)handleSelectSegmentAtIndexPath:(id)arg1;
- (id)handleSelectSegmentVM:(id)arg1;
- (id)autoFocusTargetSegmentAtTime:(struct)arg1;
- (id)autoFocusTargetStorySegmentAtTime:(struct)arg1;
- (id)autoFocusTargetAnchoredSegmentAtTime:(struct)arg1;
- (void)handleStayOnSegmentAtTime:(struct)arg1;
- (BOOL)shouldBeginReorderingSegmentAtIndexPath:(id)arg1;
- (BOOL)shouldBeginMovingSegmentAtIndexPath:(id)arg1;
- (void)handleBeginMovingSegmentVM:(id)arg1;
- (void)handleEndMoving;
- (void)handleBeginTrimmingSegmentWithEdge:(unsigned long long)arg1;
- (void)handleEndTrimmingSegmentWithShouldTakeSnapshot:(BOOL)arg1;
- (void)enterTrimPrepareForSegmentWithID:(id)arg1;
- (void)enterTrimPrepareWithSegmentVM:(id)arg1;
- (void)exitTrimPrepareForSegmentWithID:(id)arg1;
- (void)exitTrimPrepareWithSegmentVM:(id)arg1;
- (void)handleTapTimelineBackground;
- (void)resetTimelineEditingState;
- (id)initWithTimeline:(id)arg1 composingContext:(id)arg2;
- (void)dealloc;
- (void)setConfiguration:(id)arg1;
- (void)syncWithConfiguration:(id)arg1;
- (unsigned long long)numberOfSegmentVMs;
- (id)segmentVMAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSegmentVM:(id)arg1;
- (BOOL)containsSegmentVMAtIndexPath:(id)arg1;
- (id)segmentVMAtIndexPath:(id)arg1;
- (id)indexPathOfSegmentVM:(id)arg1;
- (id)indexPathOfSegmentVMWithID:(id)arg1;
- (BOOL)containsSegmentVMWithID:(id)arg1;
- (id)segmentVMWithID:(id)arg1;
- (BOOL)containsSegmentVMWithType:(unsigned long long)arg1;
- (BOOL)containsSegmentVMWithType:(unsigned long long)arg1 atTime:(struct)arg2;
- (id)allSegmentVMs;
- (BOOL)isEmpty;
- (unsigned long long)numberOfStoryElementSegmentVMs;
- (id)storyElementSegmentVMAtIndex:(unsigned long long)arg1;
- (id)storyElementSegmentVMAtIndexPath:(id)arg1;
- (id)storyElementSegmentVMAtTime:(struct)arg1;
- (id)firstContentDescSegment;
- (id)firstCaptionSegment;
- (id)firstNarrationSegment;
- (id)firstMusicSegment;
- (id)allSegmentIDsWithType:(unsigned long long)arg1;
- (id)nearstAnchoredSegmentAtTime:(struct)arg1 withType:(unsigned long long)arg2;
- (id)nearstNextAnchoredSegmentAtTime:(struct)arg1 withType:(unsigned long long)arg2;
- (void)ensureAllSegmentsNotInEditingState;
- (id)previousStoryElementSegment:(id)arg1;
- (id)nextStoryElementSegment:(id)arg1;
- (id)previousStorySegmentVM:(id)arg1;
- (id)nextStorySegmentVM:(id)arg1;
- (id)movieTitleSegmentVM;
- (BOOL)hasMovieTitleSegment;
- (BOOL)isOSTEnabled;
- (void)setIsOSTEnabled:(BOOL)arg1;
- (void)updateOSTEnabledFromSegments;
- (void)toggleOSTEnabled;
- (void)updateOSTRecognitionStatus:(unsigned long long)arg1;
- (CGPoint)textSegmentDefaultScale;
- (double)movieTitleSegmentDefaultY;
- (double)contentDescSegmentDefaultY;
- (double)narrationSegmentDefaultY;
- (double)captionSegmentDefaultY;
- (double)musicSegmentLyricsDefaultY;
- (struct)duration;
- (struct)timeRange;
- (id)durationDidChangeSignal;
- (void)setPlayheadTime:(struct)arg1;
- (void)setPlayheadTime:(struct)arg1 shouldUpdatePreview:(BOOL)arg2;
- (void)updatePlayheadTimeSilently:(struct)arg1;
- (void)setTimeScaleInPoints:(double)arg1;
- (void)setTimelineEditingState:(unsigned long long)arg1;
- (struct)videoFrameDuration;
- (double)videoAspectRatio;
- (double)safeVideoAspectRatio;
- (id)videoAspectRatioDesc;
- (double)frameRateValue;
- (unsigned long long)frameRateType;
- (CGSize)pointSize;
- (id)firstMovieClipSegmentVM;
- (BOOL)isFocusedOnStorySegment;
- (BOOL)isFocusedOnAnchoredSegment;
- (void)focusOnSegmentVM:(id)arg1;
- (void)resignSegmentVMFocus;
- (void)setFocusedSegmentVM:(id)arg1;
- (BOOL)canReorderSegmentAtIndexPath:(id)arg1;
- (BOOL)canMoveSegmentAtIndexPath:(id)arg1;
- (void)beginMovingSegmentWithVM:(id)arg1;
- (void)endMovingSegment;
- (BOOL)moveFocusedAnchoredSegmentAboveSegmentWithID:(id)arg1 toTime:(struct)arg2;
- (void)beginTrimmingOnFocusedSegmentWithEdge:(unsigned long long)arg1;
- (BOOL)applyTrimmingOnFocusedSegmentWithDeltaTime:(struct)arg1;
- (BOOL)applyTrimmingOnFocusedSegmentWithSnapTime:(struct)arg1;
- (void)endTrimmingOnFocusedSegmentWithShouldTakeSnapshot:(BOOL)arg1;
- (void)endTrimmingOnFocusedSegmentWithShouldTakeSnapshot:(BOOL)arg1 shouldSkim:(BOOL)arg2;
- (BOOL)hasAnyDecoration;
- (BOOL)hasAnyMutation;
- (BOOL)retriveTimelineMutationInfoWithOptions:(unsigned long long)arg1;
- (id)retriveTimelineMutationInfoSilently;
- (struct)suggestedOverlappingTransitionDurationWithSegmentID:(id)arg1;
- (struct)suggestedNonOverlappingTransitionDurationWithSegmentID:(id)arg1;
- (struct)suggestedTransitionDurationWithSegmentID:(id)arg1 isOverlappingTransition:(BOOL)arg2;
- (id)_firstElementSegmentIDFromIDs:(id)arg1;
- (id)insertPhotoVideoSegmentsWithAssetIDs:(id)arg1 atTime:(struct)arg2 shouldAutoFocus:(BOOL)arg3 targetEditingState:(unsigned long long)arg4;
- (id)anchorMovieTitleSegmentWithMaterialID:(id)arg1 atTime:(struct)arg2 duration:(struct)arg3 shouldAutoFocus:(BOOL)arg4 targetEditingState:(unsigned long long)arg5;
- (id)anchorContentDescSegmentWithMaterialID:(id)arg1 belongingSegmentID:(id)arg2 shouldAutoFocus:(BOOL)arg3 targetEditingState:(unsigned long long)arg4 outputSegmentID:(id *)arg5;
- (id)anchorFancyTextSegmentWithMaterialID:(id)arg1 atTime:(struct)arg2 duration:(struct)arg3 shouldAutoFocus:(BOOL)arg4 targetEditingState:(unsigned long long)arg5 outputSegmentID:(id *)arg6;
- (id)anchorCaptionSegmentWithMaterialID:(id)arg1 atTime:(struct)arg2 duration:(struct)arg3 shouldAutoFocus:(BOOL)arg4 targetEditingState:(unsigned long long)arg5;
- (id)anchorWhenWhereSegmentWithMaterialID:(id)arg1 atTime:(struct)arg2 duration:(struct)arg3 shouldAutoFocus:(BOOL)arg4 targetEditingState:(unsigned long long)arg5;
- (id)anchorEmoticonSegmentWithFilePath:(id)arg1 decoderType:(unsigned long long)arg2 timingFillMode:(unsigned long long)arg3 atTime:(struct)arg4 duration:(struct)arg5 shouldAutoFocus:(BOOL)arg6 targetEditingState:(unsigned long long)arg7;
- (id)anchorMusicSegmentWithMusicInfo:(id)arg1 musicFilePath:(id)arg2 lyricStyleID:(id)arg3 atTime:(struct)arg4 shouldAutoFocus:(BOOL)arg5 targetEditingState:(unsigned long long)arg6;
- (id)anchorNarrationSegmentWithFilePath:(id)arg1 audioFileID:(id)arg2 captionTexts:(id)arg3 captionStyleID:(id)arg4 atTime:(struct)arg5 shouldAutoFocus:(BOOL)arg6 targetEditingState:(unsigned long long)arg7 outputSegmentID:(id *)arg8;
- (BOOL)canSetAllStorySegmentsDurationTo:(struct)arg1;
- (BOOL)setAllStorySegmentsDurationTo:(struct)arg1;
- (BOOL)canSetAllStorySegmentsDurationToOrigin;
- (BOOL)setAllStorySegmentsDurationToOrigin;
- (BOOL)updateAllContentDescStylesWithMaterialID:(id)arg1;
- (BOOL)updateAllContentDescColorStylesWithID:(id)arg1;
- (BOOL)updateAllContentDescFontsWithName:(id)arg1;
- (BOOL)updateAllOSTCaptionStylesWithMaterialID:(id)arg1;
- (BOOL)updateAllOSTCaptionColorStylesWithID:(id)arg1;
- (BOOL)updateAllOSTCaptionFontsWithName:(id)arg1;
- (BOOL)updateAllOSTCaptionAnimPresetsWithID:(id)arg1;
- (BOOL)updateAllNarrationCaptionStylesWithMaterialID:(id)arg1;
- (BOOL)updateAllNarrationCaptionColorStylesWithID:(id)arg1;
- (BOOL)updateAllNarrationCaptionFontsWithName:(id)arg1;
- (BOOL)updateAllNarrationAnimPresetsWithID:(id)arg1;
- (void)updateNarrationVoiceSyncWithRoleID:(id)arg1 roleName:(id)arg2;
- (void)updateTTSVoiceSyncWithRoleID:(id)arg1 roleName:(id)arg2;
- (void)setIsAutoVolumeAdjustmentEnabled:(BOOL)arg1;
- (void)applyAutoVolumeAdjustmentIfNeeded;
- (float)musicSegmentVolume;
- (BOOL)canUpdateMusicSegmentVolume;
- (BOOL)updateMusicSegmentWithVolume:(float)arg1;
- (BOOL)updateAllNarrationSegmentsWithVolume:(float)arg1;
- (float)storyElementSegmentsVolume;
- (BOOL)canUpdateStoryElementSegmentsVolume;
- (BOOL)updateAllStoryElementSegmentsWithVolume:(float)arg1;
- (id)splitFocusedSegmentVM;
- (BOOL)moveStorySegmentVMAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (BOOL)shouldRemoveSegmentWithID:(id)arg1;
- (id)removeSegmentWithID:(id)arg1 shouldAutoFocus:(BOOL)arg2 autoFocusTargetTime:(struct)arg3 targetEditingState:(unsigned long long)arg4;
- (id)removeSegmentsWithIDs:(id)arg1 shouldAutoFocus:(BOOL)arg2 autoFocusTargetTime:(struct)arg3 targetEditingState:(unsigned long long)arg4;
- (void)applyAdjustmentValuesToAllSegmentsConformsToProtocols:(id)arg1 referenceToObject:(id)arg2;
- (void)applyAdjustmentValuesToAllSegmentsConformsToProtocols:(id)arg1 referenceToObject:(id)arg2 strictTypeCheck:(BOOL)arg3;
- (void)applyAdjustmentValuesToAllSegmentsConformsToProtocols:(id)arg1 referenceToObject:(id)arg2 mutationOptions:(unsigned long long)arg3 strictTypeCheck:(BOOL)arg4;
- (void)applyAdjustmentValuesToTransitionSegment:(id)arg1 referenceSegment:(id)arg2;
- (BOOL)canApplyAdjsutableValueBetweenSegmentVM:(id)arg1 andSegmentVM:(id)arg2 strictTypeCheck:(BOOL)arg3;
- (void)syncWithOpDesc:(id)arg1;
- (void)syncRoleIDAndRoleNameAfterUndoRedo;
- (BOOL)shouldLimitTrimToTargetTime:(struct)arg1 segmentVM:(id)arg2;
- (void)adjustMusicConstraints;
- (void)adjustMusicDurationAndConstraintsOnDidMove;
- (BOOL)updateAspectRatio:(id)arg1;
- (id)recordSegmentNormalizedPositions;
- (void)restoreSegmentNormalizedPositions:(id)arg1;
- (void)updateContentScaleMode:(unsigned long long)arg1;
- (double)calcScaleForAspectFillWithSegmentVM:(id)arg1;
- (void)disableImagesDigiZoomIfNeededWithSegmentIDs:(id)arg1;
- (void)setNarrationType:(unsigned long long)arg1;
- (void)cacheUserNarrationType:(unsigned long long)arg1;
- (unsigned long long)getUserNarrationTypeCacheValue;
- (void)updateVideoTagFromSegments;
- (id)timeline;
- (id)composingContext;
- (id)storylineVM;
- (id)configuration;
- (BOOL)shouldShowVoiceChangeInspectorAfterRecording;
- (void)setShouldShowVoiceChangeInspectorAfterRecording:(BOOL)arg1;
- (double)firstRecordingEndTime;
- (void)setFirstRecordingEndTime:(double)arg1;
- (unsigned long long)narrationType;
- (unsigned long long)OSTRecognitionStatus;
- (BOOL)isContentDescStyleSynced;
- (void)setIsContentDescStyleSynced:(BOOL)arg1;
- (BOOL)isOSTCaptionStyleSynced;
- (void)setIsOSTCaptionStyleSynced:(BOOL)arg1;
- (BOOL)isNarrationCaptionStyleSynced;
- (void)setIsNarrationCaptionStyleSynced:(BOOL)arg1;
- (BOOL)isNarrationVoiceSynced;
- (void)setIsNarrationVoiceSynced:(BOOL)arg1;
- (BOOL)isTTSVoiceSynced;
- (void)setIsTTSVoiceSynced:(BOOL)arg1;
- (id)syncedNarrationRoleID;
- (id)syncedNarrationRoleName;
- (id)syncedTTSRoleID;
- (id)syncedTTSRoleName;
- (struct)playheadTime;
- (id)playheadTimeDidChangeSignal;
- (id)previewSeekToTimeSignal;
- (id)scrollToTimeSignal;
- (struct)targetPlayheadTimeOnce;
- (void)setTargetPlayheadTimeOnce:(struct)arg1;
- (BOOL)isTimeScaleChanged;
- (double)timeScaleInPoints;
- (double)timeScaleInPixels;
- (id)timeScaleDidChangeSignal;
- (unsigned long long)timelineEditingState;
- (id)timelineEditingStateDidChangeSignal;
- (id)didSelectSegmentHandlers;
- (void)setDidSelectSegmentHandlers:(id)arg1;
- (id)originalVideoAspectRatioDesc;
- (unsigned long long)previousFocusedSegmentType;
- (BOOL)isPreviousFocusedSegmentAnchored;
- (id)focusedSegmentVM;
- (id)trimPrepareSegmentIndexPath;
- (void)setTrimPrepareSegmentIndexPath:(id)arg1;
- (id)timelineDidMutateSignal;
- (id)segmentEditingStateVM;
- (BOOL)isAutoVolumeAdjustmentEnabled;
- (struct)anchoredSegmentStartTimeBeforeMove;
- (void)setAnchoredSegmentStartTimeBeforeMove:(struct)arg1;
- (float)narrationSegmentsVolume;
- (void)setNarrationSegmentsVolume:(float)arg1;
- (void).cxx_destruct;
@end

