@interface _TtC6WeChat19MagicSnsTimelineBiz : _TtC6WeChat17MagicEmojiBaseBiz <_TtP6WeChat23IMagicBaseEmojiDelegate_>
{
     snsEmojiDelegate; // +0x90
     snsCurrentScene; // +0x98
}
- (void)start;
- (id)getMagicEmojiViewHolder;
- (void)sendFireWorkInfoEventWithInfo:(id)arg1;
- (void)onFireworkSceneChangeWithScene:(long long)arg1 fireworkPlayRect:(CGRect)arg2;
- (id)getFireworkInfoByIDWithId:(id)arg1;
- (void)onFireworkPlayEndWithId:(id)arg1;
- (void)destroy;
- (void)onCreated;
- (void)onMainScriptInjected:(id)arg1;
- (void)onDestroy:(int)arg1;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (id)init;
- (void).cxx_destruct;
@end
