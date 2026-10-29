@interface WCAdCardClickEventManager : MMObject
+ (id)getInstance;
- (BOOL)onClickEventFiredWithActionInfo:(id)arg1 dataItem:(id)arg2 cardType:(long long)arg3 contentItemScene:(unsigned long long)arg4 clickPos:(long long)arg5 clickIndex:(int)arg6 extInfo:(id)arg7;
- (BOOL)canJumpToCanvasWithAdInfo:(id)arg1;
- (BOOL)canJumpToGestureCanvasWithAdInfo:(id)arg1;
- (void)jumpToCustomerServiceWithActionInfo:(id)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 clickIndex:(int)arg4 originView:(id)arg5;
- (void)handleCustomerServiceContactWithResult:(BOOL)arg1 contact:(id)arg2 jumpParams:(id)arg3;
- (id)getAdActionLinkWithActionInfo:(id)arg1 adInfo:(id)arg2;
- (void)reportCollectedOuterClickMonitorIfNeeded:(id)arg1 clickPos:(long long)arg2 clickIndex:(int)arg3;
- (void)reportClick:(id)arg1 contentItemScene:(unsigned long long)arg2 clickPos:(long long)arg3 clickIndex:(int)arg4 clickActionType:(long long)arg5;
- (void)reportClickWithActionInfo:(id)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 clickPos:(long long)arg4 clickIndex:(int)arg5 clickActionType:(long long)arg6;
- (id)createClickPageWrap:(id)arg1 contentItemScene:(unsigned long long)arg2 clickPos:(long long)arg3 clickIndex:(int)arg4 clickActionType:(long long)arg5;
- (id)createClickPageWrapWithActionInfo:(id)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 clickPos:(long long)arg4 clickIndex:(int)arg5 clickActionType:(long long)arg6;
- (void)reportClick:(id)arg1;
@end
