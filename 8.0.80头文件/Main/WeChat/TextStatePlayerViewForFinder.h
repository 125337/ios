@interface TextStatePlayerViewForFinder : WCFinderFullNewMultiMediaView <WCFinderDataItemExt, WCFinderDataSourceCleanExt, WCFinderFeedContentMediaActionProtocol, TextStateBaseMediaView>
{
    BOOL _muted; // +0x8
    id <TextStateBaseMediaViewDelegate> _textStateDelegate; // +0x10
}
+ (id)mediaWithContentVM:(id)arg1 isSubScene:(BOOL)arg2;
- (BOOL)isVideo;
- (void)startPlayMedia;
- (void)pausePlayMedia;
- (double)mediaAspectRatio;
- (void)setMuted:(BOOL)arg1;
- (void)resetPlayMedia;
- (void)onPlayToEnd;
- (void)layoutSubviews;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderFeedDataSourceBeCleanWithTid:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (BOOL)isMuted;
- (id)textStateDelegate;
- (void)setTextStateDelegate:(id)arg1;
- (void).cxx_destruct;
@end
