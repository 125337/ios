@interface MinimizeAuduiEventBaseHandler : NSObject <IMinimizeAudioEventHandler>
{
    MinimizeAudioPanelPlayingInfo * _playingInfo; // +0x8
    id <IMinimizeAudioEventHandlerDelegate> _delegate; // +0x10
}
+ (id)tapeTintColorForPlayingInfo:(id)arg1;
+ (id)tapeSourceIconForPlayingInfo:(id)arg1;
- (id)initWithPlayingInfo:(id)arg1;
- (void)onPlay;
- (void)onPause;
- (void)onStop;
- (void)onOpen;
- (void)onOpenDetail;
- (void)onEnterTaskWithTransitionContext:(id)arg1;
- (void)onOpenWithTransitionContext:(id)arg1;
- (id)previewView;
- (void)setDelegate:(id)arg1;
- (void)onPlayingInfoChanged;
- (void)onPlayingInfoBizIdReplacedByNewBizId:(id)arg1;
- (id)playingInfo;
- (void)setPlayingInfo:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
@end

