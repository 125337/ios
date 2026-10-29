@interface MJTimelineViewConfiguration : NSObject
{
    BOOL _shouldShowMusicPlaceholder; // +0x8
    BOOL _shouldShowNarrationPlaceholder; // +0x9
    BOOL _shouldShowSnapMarksView; // +0xa
    BOOL _shouldShowAudialLaneBackground; // +0xb
    BOOL _shouldShowVolumeButton; // +0xc
    BOOL _shouldShowRecordButton; // +0xd
    BOOL _shouldShowOSTRecognitionRetryButton; // +0xe
    BOOL _isStorySegmentEditingEnabled; // +0xf
    BOOL _isAnchoredSegmentOverlapEnabled; // +0x10
    BOOL _shouldShowTransitionPart; // +0x11
    BOOL _isTransitionEditingEnabled; // +0x12
    BOOL _showAnchoredSegmentTrimHandleOverStoryline; // +0x13
    BOOL _shouldTrimSnapToVisualAnchoredSegments; // +0x14
    BOOL _shouldResponseToSegmentInteraction; // +0x15
    BOOL _useNewTimelineSelectInteraction; // +0x16
    unsigned long long _anchoredSegmentAutoFocusTargetType; // +0x18
    unsigned long long _anchoredSegmentAutoFocusBehaviorType; // +0x20
    NSArray * _visibleSegmentTypes; // +0x28
    double _storylineHeight; // +0x30
    double _audialLaneHeight; // +0x38
    double _visualLaneHeight; // +0x40
    double _storyline2AudialLaneSpacing; // +0x48
    double _timeRulerTopSpacing; // +0x50
    double _defaultTimelineScale; // +0x58
    UIEdgeInsets _trimHandleViewInsets; // +0x60
}
+ (id)defaultConfigurationForClipping;
+ (id)defaultConfigurationForTrimming;
+ (id)defaultConfigurationForNarration;
+ (id)defaultConfigurationForOSTRecognition;
- (id)initWithShouldShowMusicPlaceholder:(BOOL)arg1 shouldShowNarrationPlaceholder:(BOOL)arg2 shouldShowSnapMarksView:(BOOL)arg3 shouldShowAudialLaneBackground:(BOOL)arg4 shouldShowVolumeButton:(BOOL)arg5 shouldShowRecordButton:(BOOL)arg6 shouldShowOSTRecognitionRetryButton:(BOOL)arg7 isStorySegmentEditingEnabled:(BOOL)arg8 anchoredSegmentAutoFocusTargetType:(unsigned long long)arg9 anchoredSegmentAutoFocusBehaviorType:(unsigned long long)arg10 visibleSegmentTypes:(id)arg11 storylineHeight:(double)arg12 audialLaneHeight:(double)arg13 visualLaneHeight:(double)arg14 isAnchoredSegmentOverlapEnabled:(BOOL)arg15;
- (BOOL)shouldShowSegmentWithType:(unsigned long long)arg1;
- (id)description;
- (BOOL)shouldShowMusicPlaceholder;
- (BOOL)shouldShowNarrationPlaceholder;
- (BOOL)shouldShowSnapMarksView;
- (BOOL)shouldShowAudialLaneBackground;
- (BOOL)shouldShowVolumeButton;
- (BOOL)shouldShowRecordButton;
- (BOOL)shouldShowOSTRecognitionRetryButton;
- (BOOL)isStorySegmentEditingEnabled;
- (unsigned long long)anchoredSegmentAutoFocusTargetType;
- (unsigned long long)anchoredSegmentAutoFocusBehaviorType;
- (id)visibleSegmentTypes;
- (double)storylineHeight;
- (double)audialLaneHeight;
- (double)visualLaneHeight;
- (double)storyline2AudialLaneSpacing;
- (void)setStoryline2AudialLaneSpacing:(double)arg1;
- (double)timeRulerTopSpacing;
- (void)setTimeRulerTopSpacing:(double)arg1;
- (double)defaultTimelineScale;
- (void)setDefaultTimelineScale:(double)arg1;
- (BOOL)isAnchoredSegmentOverlapEnabled;
- (BOOL)shouldShowTransitionPart;
- (void)setShouldShowTransitionPart:(BOOL)arg1;
- (BOOL)isTransitionEditingEnabled;
- (void)setIsTransitionEditingEnabled:(BOOL)arg1;
- (UIEdgeInsets)trimHandleViewInsets;
- (void)setTrimHandleViewInsets:(UIEdgeInsets)arg1;
- (BOOL)showAnchoredSegmentTrimHandleOverStoryline;
- (void)setShowAnchoredSegmentTrimHandleOverStoryline:(BOOL)arg1;
- (BOOL)shouldTrimSnapToVisualAnchoredSegments;
- (void)setShouldTrimSnapToVisualAnchoredSegments:(BOOL)arg1;
- (BOOL)shouldResponseToSegmentInteraction;
- (void)setShouldResponseToSegmentInteraction:(BOOL)arg1;
- (BOOL)useNewTimelineSelectInteraction;
- (void)setUseNewTimelineSelectInteraction:(BOOL)arg1;
- (void).cxx_destruct;
@end

