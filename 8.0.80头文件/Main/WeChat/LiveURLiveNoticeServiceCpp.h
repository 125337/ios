@interface LiveURLiveNoticeServiceCpp : UnitRCObjcBaseProxyClass <LiveURLiveNoticeService>
- (void)requestLiveNoticeInfo:(id)arg1 callback:(id /* block */)arg2;
- (id)getCachedLiveNoticeInfo:(id)arg1;
- (void)updateCachedLiveNoticeInfo:(id)arg1;
- (void)reserveLiveNotice:(id)arg1 callback:(id /* block */)arg2;
- (void)reserveNextLiveNotification:(id)arg1 callback:(id /* block */)arg2;
- (void)modifyLiveNotificationFollowSettings:(id)arg1 blockNotify:(BOOL)arg2 callback:(id /* block */)arg3;
@end
