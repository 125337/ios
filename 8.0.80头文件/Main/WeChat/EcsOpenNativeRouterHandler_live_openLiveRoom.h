@interface EcsOpenNativeRouterHandler_live_openLiveRoom : EcsOpenNativeRouterHandler_Base
- (void)handleOpen:(id)arg1 context:(id)arg2 callback:(id)arg3;
- (BOOL)shouldUseNewLiveJumpWithContext:(id)arg1;
- (id)forceNativeLiveJumpInfoFromJumpInfo:(id)arg1;
- (void)openLiveRoomWithNativeLiveJumpInfo:(id)arg1 context:(id)arg2 callback:(id)arg3;
- (id)buildLiveRoomCustomParamWithLiveJumpInfo:(id)arg1 context:(id)arg2;
- (void)appendProductFeedIdWithContext:(id)arg1 customParam:(id)arg2;
- (id)productFeedIdFromNativeExtraData:(id)arg1;
- (id)convertEcsBSLiveInfoToBrandFinderLiveInfo:(id)arg1;
@end
