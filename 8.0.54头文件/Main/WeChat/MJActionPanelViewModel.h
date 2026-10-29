@interface MJActionPanelViewModel : NSObject
{
    MJSegmentViewModel * _segmentVM; // +0x8
    MJPlaybackViewModel * _playbackVM; // +0x10
    MJTimelineViewModel * _timelineVM; // +0x18
    MJSpeechManager * _speechManager; // +0x20
}
- (id)initWithTimelineVM:(id)arg1 playbackVM:(id)arg2 speechManager:(id)arg3;
- (void)dealloc;
- (id)createSegmentPictureInspectorViewModel;
- (id)createSegmentAudioInspectorViewModel;
- (id)createSegmentFilterInspectorViewModel;
- (id)createSegmentCropInspectorViewModel;
- (id)createSegmentSpeedInspectorViewModel;
- (id)createVoiceChangeInspectorViewModel;
- (id)mainMenuItemsAtPlaybackTime:(struct)arg1;
- (id)mainMenuItemsWithSegmentType:(unsigned long long)arg1 playbackTime:(struct)arg2;
- (id)segmentVM;
- (void)setSegmentVM:(id)arg1;
- (id)playbackVM;
- (id)timelineVM;
- (id)speechManager;
- (void).cxx_destruct;
@end

