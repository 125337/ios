@interface ChatRoomToolMgr : MMObject <IGroupMgrExt, IMsgExt>
{
    NSRecursiveLock * m_oLock; // +0x8
    NSDictionary * m_nativeWeAppIconUrlDic; // +0x10
    NSDictionary * m_nativeWeAppNickNameDic; // +0x18
    ChatRoomFamilyEdcationDataPB * m_chatRoomFamilyEdcationData; // +0x20
}
- (id)init;
- (void)initRegister;
- (void)initData;
- (BOOL)isNativeWeApp:(id)arg1;
- (BOOL)isNativeWeAppWithAppUserName:(id)arg1;
- (id)getIconUrlWithAppUserName:(id)arg1;
- (id)getNickNameWithAppUserName:(id)arg1;
- (id)getNativeWeAppInfoList;
- (BOOL)isWeAppMsgWithMessageWrap:(id)arg1;
- (id)genChatRoomToolWeAppInfoWithMessageWrap:(id)arg1;
- (BOOL)checkUpdateFamilyChatRoomtToolHadNeedGetContactDetail:(id)arg1;
- (void)setUpdateFamilyChatRoomtToolHadGetContactDetail:(id)arg1;
- (id)getMMKVUpdateChatRoomtToolWeAppHadGetContactArKey;
- (BOOL)updateChatRoomtToolWeAppInfoListWithUserName:(id)arg1 weAppInfoList:(id)arg2;
- (id)getWeAppInfoListWithUserName:(id)arg1;
- (void)updateChatRoomtToolWeAppInfoListFromRoomToolsWxApp:(id)arg1 roomToolsWxApp:(id)arg2;
- (BOOL)isC2CAAMsgWrap:(id)arg1;
- (id)getNativeChatRoomToolWeAppInfo:(id)arg1;
- (void)reportChatRoomToolAttachmentExposureWithGroupUserName:(id)arg1;
- (void)reportChatRoomToolAttachmentClickWithGroupUserName:(id)arg1 andTopCount:(long long)arg2 andUsedCount:(long long)arg3 topAppListStr:(id)arg4 usedAppListStr:(id)arg5;
- (void)reportChatRoomToolClickWeApptWithGroupUserName:(id)arg1 weAppInfo:(id)arg2 isTop:(BOOL)arg3;
- (void)reportChatRoomToolEditWithGroupUserName:(id)arg1 andExitType:(unsigned long long)arg2 andTopBefore:(long long)arg3 andTopAfter:(long long)arg4;
- (long long)getGroupRoleWithGroupUserName:(id)arg1;
- (void)onUpdateChatRoomtToolWeAppInfoListWithUserName:(id)arg1 roomToolsWxApps:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4;
- (void).cxx_destruct;
@end
