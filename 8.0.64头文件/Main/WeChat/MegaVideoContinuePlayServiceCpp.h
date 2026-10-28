@interface MegaVideoContinuePlayServiceCpp : UnitRCObjcBaseProxyClass <MegaVideoContinuePlayService>
+ (id)sharedInstance;
- (void)updatePlayingFeed:(id)arg1 commentScene:(int)arg2 isFromContinuePlay:(BOOL)arg3;
- (id)playingFeed;
- (id)playingFeedId;
- (int)commentScene;
- (id)nextFeed;
- (id)nextFeedId;
- (void)updateRelatedListLastBuffer:(id)arg1;
- (void)prefetchNextFeed;
@end
