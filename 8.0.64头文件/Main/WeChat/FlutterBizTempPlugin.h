@interface FlutterBizTempPlugin : NSObject <contactInfoDelegate, contactVerifyLogicDelegate, BrandTimelineNotifyLogicDelegate, IContactMgrExt, MMFlutterPlugin, BizTempApi, NotifyMsgApi>
{
    CContactVerifyLogic * _m_oLogic; // +0x8
    NotifyMsgCallbackApi * _notifyMsgCallback; // +0x10
    BrandTimelineNotifyLogic * _notifyTipsLogic; // +0x18
    NSMutableSet * _setFastLoadTemplateType; // +0x20
}
- (id)init;
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
- (void)setHasReadMsgIdList:(id)arg1 error:(id *)arg2;
- (void)onItemClickMsg:(id)arg1 error:(id *)arg2;
- (id)onItemDeleteMsg:(id)arg1 error:(id *)arg2;
- (void)addContactUsername:(id)arg1 error:(id *)arg2;
- (id)getNotifyUnReadCountWithError:(id *)arg1;
- (id)canUseStyleV2WhenMsgVersionMsgVersion:(long long)arg1 error:(id *)arg2;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 brandUserName:(id)arg4 completion:(id /* block */)arg5;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)onContactVerifyFail;
- (void)contactAddContactOk:(id)arg1;
- (void)onNewNotification:(id)arg1;
- (void)onNewBrandContact:(id)arg1;
- (id)m_oLogic;
- (void)setM_oLogic:(id)arg1;
- (id)notifyMsgCallback;
- (void)setNotifyMsgCallback:(id)arg1;
- (id)notifyTipsLogic;
- (void)setNotifyTipsLogic:(id)arg1;
- (id)setFastLoadTemplateType;
- (void)setSetFastLoadTemplateType:(id)arg1;
- (void).cxx_destruct;
@end
