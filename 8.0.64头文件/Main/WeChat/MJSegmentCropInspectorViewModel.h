@interface MJSegmentCropInspectorViewModel : MJSegmentInspectorViewModel
{
    MJTimelineViewModel * _timelineVM; // +0x8
    MJPlaybackViewModel * _playbackVM; // +0x10
    CGRect _previousEffectiveCroppedRect; // +0x18
}
- (id)initWithWithSegment:(id)arg1 type:(unsigned long long)arg2 timelineVM:(id)arg3 playbackVM:(id)arg4;
- (BOOL)isCropRectsAlmostEqualWithRect1:(CGRect)arg1 rect2:(CGRect)arg2;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (BOOL)hasChanges;
- (id)timelineVM;
- (id)playbackVM;
- (CGRect)previousEffectiveCroppedRect;
- (void).cxx_destruct;
@end
