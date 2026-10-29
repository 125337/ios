@interface SubscribeStorageProvider : NSObject <BizFansStorageProvider>
+ (id)shared;
- (int)bizType;
- (long long)serviceType;
- (id)sessionStorage;
- (id)brandNotification;
- (id)selfBizuin;
- (BOOL)msgNotifyEnable;
- (void)updateMsgNotifyEnable:(BOOL)arg1;
- (void)clearAllUnreadCountForBizuin:(id)arg1;
- (id)personalCenterRedDotManager;
- (id)officialNoticeSessionId;
- (id)officialNoticeSessionTitle;
@end
