@interface GroupNoticeMgr : MMUserService <GroupNoticeUploadExt, IMsgExt, IGroupMgrExt, MMServiceProtocol>
{
    id /* block */ m_updateCompletionHandler; // +0x8
    GroupNoticeDB * _groupNoticeDB; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateItem:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)SetChatRoomDesc:(id)arg1 Item:(id)arg2 Flag:(unsigned int)arg3;
- (void)deleteResourceWithMsg:(id)arg1;
- (void)deleteResourceWithChatName:(id)arg1;
- (long long)getMaxResourceSize;
- (BOOL)canMigrateResource;
- (BOOL)isHistoryItem:(id)arg1;
- (id)getCurrentItem:(id)arg1;
- (void)onUploadGroupNoticeItem:(id)arg1 success:(BOOL)arg2;
- (id)groupNoticeDB;
- (void)addRelationWithSourceId:(id)arg1 msgLocalId:(unsigned int)arg2 userName:(id)arg3;
- (unsigned int)getMsgLocalIdWithSourceId:(id)arg1;
- (void)removeRelationWithSourceId:(id)arg1;
- (void)removeRelationWithUserName:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)canRevokeMsg;
- (void)revokeAnnouncementMsg:(id)arg1;
- (void)onRevokeMsgSuccess:(id)arg1;
- (id)getRevokeMsgByAnnouncementId:(id)arg1;
- (id)getRevokeMsgBySourceId:(id)arg1;
- (BOOL)insertRevokeMessage:(id)arg1;
- (BOOL)removeOldRevokeMessagesBefore:(unsigned int)arg1;
- (void)OnGetChatRoomInfo:(id)arg1 Info:(id)arg2 showBanner:(BOOL)arg3;
- (void)p_cleanTmpResource:(id)arg1;
- (void)setGroupNoticeDB:(id)arg1;
- (void).cxx_destruct;
@end

