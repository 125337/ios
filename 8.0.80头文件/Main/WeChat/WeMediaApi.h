@interface WeMediaApi : NSObject
{
    void * runtime; // +0x8
    OpaqueJSContext * js_context; // +0x10
    id <WeMediaDelegate> _delegate; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setLoglvl:(int)arg1;
- (void)setJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2 baseDir:(id)arg3;
- (void)setJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2;
- (void)onSuspend;
- (void)onBackground;
- (void)onForeground;
- (void)stopAllAudioPlayer;
- (void)startAllAudioPlayer;
- (BOOL)isAudioPlaying;
- (void)releaseContext;
- (id)delegate;
- (void).cxx_destruct;
@end
