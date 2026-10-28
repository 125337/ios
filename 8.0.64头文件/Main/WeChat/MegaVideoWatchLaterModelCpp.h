@interface MegaVideoWatchLaterModelCpp : MegaVideoFeedFlowModelCpp <MegaVideoWatchLaterModel>
+ (id)createModel:(int)arg1 autoApplyChanges:(BOOL)arg2;
- (void)setAutoApplyChanges:(BOOL)arg1;
- (void)onFeedWatchLaterStatusChanged:(id)arg1 action:(int)arg2;
@end
