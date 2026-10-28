@interface MegaVideoPlayerDetailModelCpp : UnitRCObjcBaseProxyClass <MegaVideoPlayerDetailModel>
+ (id)createModel:(id)arg1 model:(id)arg2;
+ (id)createListModel:(int)arg1 feed:(id)arg2 channel:(id)arg3 commentScene:(int)arg4 requestScene:(int)arg5 fromSessionId:(id)arg6;
- (id)openParams;
- (void)setOpenParams:(id)arg1;
- (id)genOpenParams;
- (int)commentScene;
- (id)playSessionId;
- (void)setPlaySessionId:(id)arg1;
- (void)updateCurrentPlayerId:(long long)arg1;
- (long long)currentPlayerId;
- (id)currentChannel;
- (id)currentChannelId;
- (id)playingFeedId;
- (id)playingFeed;
- (void)setPlayingFeed:(id)arg1;
- (id)nextFeedId;
- (id)nextFeed;
- (int)playingListType;
- (id)playingListModel;
- (id)listModel;
- (id)nextListModel;
- (void)setNextListModel:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
@end
