@interface MMWebViewPlugin_MpImageForward : MMWebViewPluginBase
{
    NSMutableDictionary * _userNameMap; // +0x8
}
- (id)userNameMap;
- (BOOL)canForwardToFrontend;
- (BOOL)dispatchImageForwardEventWithImgUrl:(id)arg1 contentId:(id)arg2 replyId:(id)arg3 imgIndex:(id)arg4 sceneType:(id)arg5 selectedUserName:(id)arg6 source:(unsigned long long)arg7;
- (id)userNameForUserNameId:(id)arg1;
- (void)setUserNameMap:(id)arg1;
- (void).cxx_destruct;
@end
