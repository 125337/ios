@interface WCFinderLiveNowViewHelper : NSObject
+ (id)getLiveNowViewDisplayTextFromMsg:(id)arg1;
+ (id)getLiveNowViewDisplayTextFromCellViewType:(int)arg1 sharePageStatus:(unsigned int)arg2;
+ (void)updateLiveNowView:(id)arg1 msg:(id)arg2;
+ (void)updateLiveNowView:(id)arg1 shareItem:(id)arg2;
+ (void)updateLiveNowView:(id)arg1 liveInfo:(id)arg2;
+ (void)updateLiveNowView:(id)arg1 cellViewType:(int)arg2 sharePageStatus:(unsigned int)arg3;
+ (int)getLiveCellViewTypeWithLiveInfo:(id)arg1;
+ (BOOL)isEndCardNewLiveState:(id)arg1;
+ (BOOL)isLiveEndState:(id)arg1;
+ (BOOL)isRePlayJumpFeed:(id)arg1;
+ (BOOL)isPaidLive:(id)arg1;
+ (int)getLiveCellViewType:(id)arg1;
+ (void)onFinderLiveShareViewReplayUpdateLiveInfo:(id)arg1 tid:(id)arg2;
+ (void)preloadReplayWithShareItem:(id)arg1;
+ (BOOL)needPreloadReplay:(id)arg1;
+ (void)fetchReplayData:(id)arg1;
+ (void)realPreloadReplayFeed:(id)arg1;
+ (void)preloadCompleteVcReplayFeed:(id)arg1;
+ (void)reportAudienceCardViewFromLiveInfo:(id)arg1 isClick:(BOOL)arg2;
+ (void)reportAudienceCardViewFromShareItem:(id)arg1 shareType:(long long)arg2 isClick:(BOOL)arg3;
+ (id)getReportAudienceCardViewFromShareItem:(id)arg1;
+ (BOOL)shouldReportAudienceCardView:(id)arg1;
+ (BOOL)openAudienceNewReplayCardView:(unsigned int)arg1;
+ (BOOL)openAudienceNewLivingCardView:(unsigned int)arg1;
+ (BOOL)openAudienceNewRecommendCardView:(unsigned int)arg1;
@end

