@interface WAMainFrameAudioCenterBaseView : UIView
{
    BOOL _isVisible; // +0x8
    unsigned int _uiVersion; // +0xc
    id <WAMainFrameAudioCenterDelegate> _delegate; // +0x10
    TingTapePlayingInfo * _curPlayingInfo; // +0x18
}
+ (long long)syncVersion2Report:(int)arg1;
- (double)contentHeight;
- (void)onBecomeUnVisible;
- (void)onBecomeVisible;
- (void)tryShowFirstTask;
- (void)willBecomeVisible;
- (void)reportTaskBarAction:(long long)arg1;
- (int)taskBarVersion;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)curPlayingInfo;
- (void)setCurPlayingInfo:(id)arg1;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)arg1;
- (unsigned int)uiVersion;
- (void)setUiVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end

