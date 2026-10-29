@interface MJComposingCreationCamPreviewViewModel : NSObject
{
    MJComposingCreationCamPreviewSession * _session; // +0x8
}
- (id)initWithSession:(id)arg1;
- (id)params;
- (id)reeditEntryParams;
- (BOOL)isReeditScene;
- (BOOL)fancyTextEnabled;
- (BOOL)templateSettingEnabled;
- (id)renderView;
- (id)playbackViewModel;
- (id)timeline;
- (BOOL)isPlaying;
- (void)preparePreviewWithCompletion:(id /* block */)arg1;
- (void)notifyPreviewClosedWithCancel:(BOOL)arg1;
- (void)notifyPreviewClosedWithReedit;
- (void)completeTemplateReeditWithCompletion:(id /* block */)arg1;
- (void)openEditPageWithCompletion:(id /* block */)arg1;
- (void)openTemplatePublishSettingWithCompletion:(id /* block */)arg1;
- (void)stopPlayback;
- (void)stopPlaybackForApplicationLifecycle;
- (void)resumePlayback;
- (void)resumePlaybackForUserAction;
- (void)notifyFancyTextTimelineChangeDidFinalize;
- (void)teardownTimeline;
- (void)rebuildTimelineWithCompletion:(id /* block */)arg1;
- (void)uploadResourceAndPublishWithCompletion:(id /* block */)arg1;
- (void)exportVideoWithProgressHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)session;
- (void)setSession:(id)arg1;
- (void).cxx_destruct;
@end
