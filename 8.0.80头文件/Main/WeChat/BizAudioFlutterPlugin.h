@interface BizAudioFlutterPlugin : NSObject <MMFlutterPlugin, BizAudioApi>
{
    UIViewController * _attachedViewController; // +0x8
    NSMutableDictionary * _impactGenerators; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (id)cachedImpactGeneratorForStyle:(long long)arg1;
- (void)performImpactFeedbackStyle:(unsigned long long)arg1 error:(id *)arg2;
- (void)openUrlArticleInfo:(id)arg1 error:(id *)arg2;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 brandUserName:(id)arg4 error:(id *)arg5;
- (void)addToStarListenItemData:(id)arg1 cancel:(BOOL)arg2 snapInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)removeStarListenItemData:(id)arg1 completion:(id /* block */)arg2;
- (void)containsInStarListenId:(id)arg1 completion:(id /* block */)arg2;
- (id)attachedViewController;
- (void)setAttachedViewController:(id)arg1;
- (id)impactGenerators;
- (void)setImpactGenerators:(id)arg1;
- (void).cxx_destruct;
@end
