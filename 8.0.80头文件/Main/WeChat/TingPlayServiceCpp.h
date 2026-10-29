@interface TingPlayServiceCpp : TingApiPlayTaskControllerListenerCpp <TingPlayService>
+ (void)playSingleListenIdWithPlayTask:(id)arg1 fromScene:(int)arg2 task:(id)arg3;
+ (id)taskServiceFromTaskSnapshot:(id)arg1 info:(id)arg2;
- (id)playingTask;
- (void)playSingle:(id)arg1 info:(id)arg2;
- (void)playTaskSnapshot:(id)arg1 info:(id)arg2;
- (BOOL)isPlayingItem:(id)arg1;
- (BOOL)isPlayingClientId:(id)arg1;
@end
