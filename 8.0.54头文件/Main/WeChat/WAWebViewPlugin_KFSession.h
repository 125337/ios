@interface WAWebViewPlugin_KFSession : WAWebViewPluginBase <IMsgExt>
{
    NSString * _userName; // +0x8
    unsigned int _lastUnreadCount; // +0x10
}
- (unsigned int)getSessionUnreadCount;
- (void)notifyUnreadCountChangeTo:(unsigned int)arg1;
- (void)checkUnreadCountChange;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void).cxx_destruct;
@end

