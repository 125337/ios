@interface FlutterBizTempPlugin : NSObject <contactInfoDelegate, contactVerifyLogicDelegate, BrandTimelineNotifyLogicDelegate, IContactMgrExt, MMFlutterPlugin, BizTempApi, NotifyMsgApi>
{
    CContactVerifyLogic * _m_oLogic; // +0x8
    NotifyMsgCallbackApi * _notifyMsgCallback; // +0x10
    BrandTimelineNotifyLogic * _notifyTipsLogic; // +0x18
    NSMutableSet * _setFastLoadTemplateType; // +0x20
    long long _serviceType; // +0x28
}
- (id)initWithServiceType:(long long)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (id)getContactInfoUserName:(id)arg1 error:(id *)arg2;
- (id)getContactByUsername:(id)arg1;
- (id)genContactInfoFromContact:(id)arg1;
- (id)getNotificationTabInfoWithError:(id *)arg1;
- (id)getNotifyMsgListScene:(long long)arg1 buffer:(long long)arg2 size:(long long)arg3 error:(id *)arg4;
- (id)convertMsgWrapToNotifyMsg:(id)arg1;
- (void)setHasReadMsgIdList:(id)arg1 isFoldUnread:(BOOL)arg2 error:(id *)arg3;
- (void)onItemClickMsg:(id)arg1 error:(id *)arg2;
- (id)onItemDeleteMsg:(id)arg1 error:(id *)arg2;
- (void)addContactUsername:(id)arg1 error:(id *)arg2;
- (id)getNotifyUnReadCountWithError:(id *)arg1;
- (id)canUseStyleV2WhenMsgVersionMsgVersion:(long long)arg1 error:(id *)arg2;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 brandUserName:(id)arg4 completion:(id /* block */)arg5;
- (void)onNotifyMsgBlockStatusChangedMpArticleKey:(id)arg1 notifyMsgBlockFlag:(long long)arg2 completion:(id /* block */)arg3;
- (id)getNotifyCountWithError:(id *)arg1;
- (void)reportPersonalCenterAction:(long long)arg1 scene:(long long)arg2 redPointNum:(long long)arg3 biz:(id)arg4 hasSmallPoint:(BOOL)arg5 enterFromNotifyTips:(long long)arg6 error:(id *)arg7;
- (void)gotoBizProfileUsername:(id)arg1 addContactScene:(long long)arg2 serviceType:(long long)arg3 error:(id *)arg4;
- (void)pushBizProfileWithUsername:(id)arg1 brandContactType:(id)arg2 addContactScene:(unsigned int)arg3;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)onContactVerifyFail;
- (void)contactAddContactOk:(id)arg1;
- (void)onNewNotification:(id)arg1;
- (void)onNotifyMsgUpdated:(id)arg1;
- (void)onNewBrandContact:(id)arg1;
- (id)m_oLogic;
- (void)setM_oLogic:(id)arg1;
- (id)notifyMsgCallback;
- (void)setNotifyMsgCallback:(id)arg1;
- (id)notifyTipsLogic;
- (void)setNotifyTipsLogic:(id)arg1;
- (id)setFastLoadTemplateType;
- (void)setSetFastLoadTemplateType:(id)arg1;
- (long long)serviceType;
- (void)setServiceType:(long long)arg1;
- (void).cxx_destruct;
@end
