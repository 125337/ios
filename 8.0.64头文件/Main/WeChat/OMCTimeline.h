@interface OMCTimeline : NSObject
{
    SharedPtr<XMSComposingSession> _composingSession; // +0x8
    OMCStoryline * _storyline; // +0x10
    struct _imageOriginDuration; // +0x18
    struct _minSegmentPreservedDuration; // +0x30
}
- (id)initWithBackingComposingSession:(const void *)arg1 imageOriginDuration:(struct)arg2 minSegmentPreservedDuration:(struct)arg3;
- (const void *)backingTimeline;
- (struct)duration;
- (struct)videoFrameDuration;
- (double)videoAspectRatio;
- (id)aspectRatioDesc;
- (double)frameRateValue;
- (unsigned long long)frameRateType;
- (CGSize)pointSize;
- (BOOL)hasAnyMutation;
- (BOOL)isOSTEnabled;
- (void)setIsOSTEnabled:(BOOL)arg1;
- (id)decorPackageID;
- (id)decorPackageDescFilePath;
- (id)segmentWithID:(id)arg1;
- (id)segmentWithXID:(const void *)arg1;
- (id)addPhotoVideoSegmentsWithAssetIDs:(id)arg1 isAudioMuted:(BOOL)arg2;
- (id)insertPhotoVideoSegmentsWithAssetIDs:(id)arg1 isAudioMuted:(BOOL)arg2 atTime:(struct)arg3;
- (id)anchorMovieTitleSegmentWithMaterialID:(id)arg1 atTime:(struct)arg2 duration:(struct)arg3 shouldUsePlaceholder:(BOOL)arg4;
- (id)anchorContentDescSegmentWithMaterialID:(id)arg1 belongingSegmentID:(id)arg2 shouldUsePlaceholder:(BOOL)arg3;
- (id)anchorFancyTextSegmentWithMaterialID:(id)arg1 atTime:(struct)arg2 duration:(struct)arg3 shouldUsePlaceholder:(BOOL)arg4;
- (id)anchorFancyTextSegmentWithMaterialID:(id)arg1 atTime:(struct)arg2 duration:(struct)arg3 shouldUsePlaceholder:(BOOL)arg4 shouldUseDefaultContent:(BOOL)arg5;
- (id)anchorWhenWhereSegmentWithMaterialID:(id)arg1 atTime:(struct)arg2 duration:(struct)arg3 shouldUsePlaceholder:(BOOL)arg4;
- (id)anchorEmoticonSegmentWithFilePath:(id)arg1 decoderType:(unsigned long long)arg2 timingFillMode:(unsigned long long)arg3 atTime:(struct)arg4 duration:(struct)arg5;
- (id)anchorMusicSegmentWithMusicInfo:(id)arg1 musicFilePath:(id)arg2 lyricStyleID:(id)arg3 atTime:(struct)arg4 duration:(struct)arg5 isLooping:(BOOL)arg6;
- (id)anchorNarrationSegmentWithFilePath:(id)arg1 audioFileID:(id)arg2 captionTexts:(id)arg3 captionStyleID:(id)arg4 atTime:(struct)arg5;
- (id)anchorCaptionSegmentWithMaterialID:(id)arg1 atTime:(struct)arg2 duration:(struct)arg3 shouldUsePlaceholder:(BOOL)arg4;
- (id)anchorVisualEffectSegmentAtTime:(struct)arg1 duration:(struct)arg2 normalizedContentSize:(CGSize)arg3 blurIntensity:(double)arg4;
- (void)removeSegmentWithID:(id)arg1;
- (id)splitSegmentWithID:(id)arg1 atTime:(struct)arg2 isAlignedToVideoFrameBoundary:(BOOL)arg3;
- (void)moveStorySegmentWithID:(id)arg1 beforeSegmentWithID:(id)arg2;
- (void)moveAnchoredSegmentWithID:(id)arg1 aboveSegmentWithID:(id)arg2 atTime:(struct)arg3;
- (struct)alignTimeToVideoFrameBoundary:(struct)arg1;
- (struct)alignTimeToVideoFrameBoundaryForward:(struct)arg1;
- (id)retrieveTimelineMutation;
- (void)updateAspectRatio:(id)arg1;
- (BOOL)isHDRRenderingEnabled;
- (void)setIsHDRRenderingEnabled:(BOOL)arg1;
- (BOOL)containsHDRVideoSegment;
- (void)removeUserInfoValueForKey:(id)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)userInfoValueForKey:(id)arg1;
- (id)fetchAIGCMetadata;
- (id)toJSONString;
- (id)toBinaryBuffer;
- (struct)imageOriginDuration;
- (struct)minSegmentPreservedDuration;
- (id)storyline;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
