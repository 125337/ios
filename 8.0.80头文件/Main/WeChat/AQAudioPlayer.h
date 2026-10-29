@interface AQAudioPlayer : BaseAudioPlayer
{
    BOOL mIsBindMuteSwitch; // +0x19
    NSString * mCachedTag; // +0x20
}
- (void)openAudioFile:(id)arg1;
- (void)setDataFormat;
- (void)setMagicCookieForPlayBack;
- (void)prepareBuffers;
- (void)setBindMuteSwitch:(BOOL)arg1;
- (void)updateSession;
- (BOOL)preparePlayWithAudioFile:(id)arg1 cachedForTag:(id)arg2;
- (void)play;
- (void)replay;
- (void)stop;
- (void)autostop;
- (id)mCachedTag;
- (void)setMCachedTag:(id)arg1;
- (void).cxx_destruct;
@end
