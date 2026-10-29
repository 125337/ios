@interface MMFinderLiveFrontEndPreviewView : UIView <MMLiveCDNPlayerViewDelegate>
{
    NSString * _anchor; // +0x8
    MMLiteAppViewController * _liteApp; // +0x10
    id <MMFinderLiveFrontEndPreviewViewChannel> _channel; // +0x18
    MMLiveCDNPlayerView * _playerView; // +0x20
    WCFinderDataItem * _dataItem; // +0x28
    long long _lastControlAction; // +0x30
    CGSize _videoSize; // +0x38
}
+ (id)viewStartIfNeededWithFrame:(CGRect)arg1 params:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)startLiveWithAnchor:(id)arg1;
- (void)startLive:(id)arg1;
- (void)startLive:(id)arg1 forPlayControl:(BOOL)arg2;
- (void)onPlayBegin;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayChangeSize:(CGSize)arg1;
- (void)onPlayAudioModeChange:(BOOL)arg1;
- (void)updateWithDictionary:(id)arg1;
- (void)updateObjectFit:(id)arg1;
- (void)handleJSMethod:(id)arg1 params:(id)arg2 WithResult:(id /* block */)arg3;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)enterLive:(id)arg1;
- (void)prepareEnterLive;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (id)liteApp;
- (void)setLiteApp:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (long long)lastControlAction;
- (void)setLastControlAction:(long long)arg1;
- (void).cxx_destruct;
@end

