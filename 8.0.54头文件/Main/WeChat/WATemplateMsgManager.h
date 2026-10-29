@interface WATemplateMsgManager : MMUserService <PBMessageObserverDelegate, MMKernelExt, IContactMgrExt, IMsgExt, MMServiceProtocol>
{
    BOOL _isManulLogined; // +0x8
    BOOL _isContactListUpdated; // +0x9
    WATemplateMsgInfoWrap * _infoWrap; // +0x10
    NSMutableArray * _debug_unreadUsernames; // +0x18
    NSString * _debug_lastUsername; // +0x20
    unsigned long long _debug_unreadMsgCount; // +0x28
    NSMutableDictionary * _debug_fakeTemplateMsgDic; // +0x30
    NSMutableArray * _debug_msgArray; // +0x38
}
- (id)init;
- (void)dealloc;
- (id)infoWrap;
- (void)updateTemplateMsgNotifyEnable:(unsigned long long)arg1;
- (void)batchUpdateAWeAppTemplateMsgStatusForAppArray:(id)arg1;
- (void)batchUpdateTemplateMsgNotifyEnable:(unsigned long long)arg1 audioNotifyEnable:(unsigned long long)arg2 msgStatusForApps:(id)arg3;
- (void)getTemplateMsgMngInfoFromSvr:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetServiceNotifyOptions:(id)arg1;
- (void)handleBatchSwitchServiceNotifyOption:(id)arg1;
- (void)handleUpdateSwitchServiceSuccess:(id)arg1;
- (void)handleUpdateSwitchServiceFail:(id)arg1;
- (void)saveTemplateMsgMngInfoToLocal:(id)arg1;
- (BOOL)getTemplateMsgNotifyStatusFromLocal;
- (BOOL)getTemplateMsgAudioNotifyStatusFromLocal;
- (id)getTemplateMsgBanListFromLocal;
- (id)getTemplateMsgMngInfoWrapFromLocal;
- (BOOL)isWeAppInTemplateMsgBanListFromLocal:(id)arg1;
- (BOOL)ifUserNameInBanListWithUserName:(id)arg1 banList:(id)arg2;
- (void)modifyServiceNotificationContactWithNotifyStatus:(BOOL)arg1;
- (void)modifyContactOptForUsername:(id)arg1 withOpt:(unsigned int)arg2;
- (void)onChangeBanListWithChangedArray:(id)arg1;
- (BOOL)isExistTemplateMsgAudioNotifyRecord:(id)arg1;
- (void)addTemplateMsgAudioNotifyRecord:(id)arg1;
- (void)onManulLoginOK;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)tryGetTemplateMsgMngInfoFromSvr;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnGetWXAPayInfoMsg:(id)arg1;
- (void)showLocalNotificationWithInfo:(id)arg1 msgWrap:(id)arg2;
- (void)setInfoWrap:(id)arg1;
- (id)debug_unreadUsernames;
- (void)setDebug_unreadUsernames:(id)arg1;
- (id)debug_lastUsername;
- (void)setDebug_lastUsername:(id)arg1;
- (unsigned long long)debug_unreadMsgCount;
- (void)setDebug_unreadMsgCount:(unsigned long long)arg1;
- (id)debug_fakeTemplateMsgDic;
- (void)setDebug_fakeTemplateMsgDic:(id)arg1;
- (id)debug_msgArray;
- (void)setDebug_msgArray:(id)arg1;
- (BOOL)isManulLogined;
- (void)setIsManulLogined:(BOOL)arg1;
- (BOOL)isContactListUpdated;
- (void)setIsContactListUpdated:(BOOL)arg1;
- (void).cxx_destruct;
@end

