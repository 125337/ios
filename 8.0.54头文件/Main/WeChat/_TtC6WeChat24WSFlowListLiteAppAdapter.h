@interface _TtC6WeChat24WSFlowListLiteAppAdapter : NSObject
{
     liteAppView; // +0x8
     dicQuery; // +0x10
     currentLiteAppInfo; // +0x18
     hasLiteAppStart; // +0x20
     isLiteAppStarting; // +0x21
     snapshotCache; // +0x28
     reportExtraInfo; // +0x30
}
- (id)reportExtraInfo;
- (void)setReportExtraInfo:(id)arg1;
- (id)init;
- (void)createLiteAppViewWithCurrentCell:(id)arg1 renderFinishHandler:(id /* block */)arg2;
- (void)replaceCardWithSnapshotOfCellWithCell:(id)arg1;
- (void)setCachedSnapshotForCell:(id)arg1 index:(long long)arg2;
- (void)clearCachedSnapshot;
- (void)addLiteAppViewToCellWithCell:(id)arg1 liteAppInfo:(id)arg2 waitRenderFinish:(BOOL)arg3 renderFinishHandler:(id /* block */)arg4;
- (void)dispatchOnSwipePageWithModel:(id)arg1;
- (void).cxx_destruct;
@end

