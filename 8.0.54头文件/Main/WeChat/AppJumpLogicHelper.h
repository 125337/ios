@interface AppJumpLogicHelper : NSObject
{
    long long _jumpSource; // +0x8
}
- (BOOL)isShowTimeLineJumpLink:(id)arg1;
- (BOOL)isCanJumpWithAppId:(id)arg1;
- (BOOL)jumpByAppIdInMessage:(id)arg1 chatRoom:(BOOL)arg2;
- (BOOL)jumpByAppIdInTimeline:(id)arg1;
- (BOOL)jumpToGameDetailView:(id)arg1 chatType:(int)arg2;
- (BOOL)innerJumpByAppId:(id)arg1 chatType:(int)arg2;
- (BOOL)isShowTimelineSource:(id)arg1;
- (BOOL)isShowAppMessageBottom:(id)arg1;
- (BOOL)isCanShowSource:(id)arg1;
- (id)getAppIdByFunctionType:(long long)arg1;
- (long long)getJumpFunctionTypeByAppId:(id)arg1;
- (long long)jumpSource;
- (void)setJumpSource:(long long)arg1;
@end

