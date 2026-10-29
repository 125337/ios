@interface TLProfilePlayerViewForFinder : WCFinderFullNewMultiMediaView <TLProfileBaseMediaView>
{
    BOOL _tl_muted; // +0x8
    id <TLProfileBaseMediaViewDelegate> _tl_profileDelegate; // +0x10
}
+ (id)mediaWithContentVM:(id)arg1;
- (BOOL)isVideo;
- (void)tl_startPlayMedia;
- (void)tl_pausePlayMedia;
- (void)tl_stopPlayMedia;
- (double)tl_mediaAspectRatio;
- (void)setTl_muted:(BOOL)arg1;
- (void)tl_resetPlayMedia;
- (void)onPlayToEnd;
- (void)layoutSubviews;
- (BOOL)tl_muted;
- (id)tl_profileDelegate;
- (void)setTl_profileDelegate:(id)arg1;
- (void).cxx_destruct;
@end

