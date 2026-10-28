@interface VSyncClient : NSObject
{
    function<void (std::unique_ptr<flutter::FrameTimingsRecorder>)> callback_; // +0x8
    scoped_nsobject<CADisplayLink> display_link_; // +0x28
    double current_refresh_rate_; // +0x30
    BOOL can_pause_; // +0x38
    BOOL enable_parallel_pipeline_; // +0x39
    BOOL _allowPauseAfterVsync; // +0x3a
}
- (id)initWithTaskRunner:(RefPtr<fml::TaskRunner>)arg1 callback:(function<void (std::unique_ptr<flutter::FrameTimingsRecorder>)>)arg2;
- (void)setMaxRefreshRate:(double)arg1;
- (void)setEnableParallelPipeline:(BOOL)arg1;
- (void)preventPausing;
- (void)resumePausing;
- (void)await;
- (void)pause;
- (void)onDisplayLink:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (double)getRefreshRate;
- (id)getDisplayLink;
- (void)didChangedQosLevel;
- (BOOL)allowPauseAfterVsync;
- (void)setAllowPauseAfterVsync:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
