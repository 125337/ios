@interface RfxPagView (fps)
+ (void)startHookForFinderLive;
+ (void)load;
- (id)finderLiveRenderStatistics;
- (void)setFinderLiveRenderStatistics:(id)arg1;
- (id)mm_initWithFrame:(CGRect)arg1;
- (void)mm_setRepeatCount:(int)arg1;
- (int)finderLivePAGRepeatCount;
- (void)setFinderLivePAGRepeatCount:(int)arg1;
- (BOOL)mm_flush;
@end
