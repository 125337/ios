@interface UIViewController (FluencyScore) <MMFluencyScoreMgrDelegate>
- (void)mm_scrollViewWillBeginDragging:(id)arg1;
- (void)mm_scrollViewDidEndDecelerating:(id)arg1;
- (void)mm_scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)startFluencyScoreRecording:(id)arg1;
- (void)stopFluencyScoreRecording:(id)arg1;
- (id)fluencyScoreID;
- (unsigned long long)fluencyScoreScene;
@end

