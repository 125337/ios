@interface WXGRoamImportMessageHandlerOPT : NSObject
{
    unsigned int _maxLocalID; // +0x8
    unsigned long long _taskId; // +0x10
    NSMutableSet * _setChatName; // +0x18
    NSMutableDictionary * _mediaPathMapTable; // +0x20
}
+ (void)finishAndUpdateSession;
+ (void)importChatPackage:(id)arg1 sessionName:(id)arg2 taskId:(unsigned long long)arg3;
+ (void)setupPatSvrIDCache;
+ (id)patSvrIDSetForSession:(id)arg1;
+ (void)addPatSvrIDs:(id)arg1 forSession:(id)arg2;
+ (void)clearPatSvrIDSetCache;
+ (id)msgWrapFromMsgItem:(id)arg1;
- (BOOL)recoverMessageWithPackage:(id)arg1 sessionName:(id)arg2;
- (BOOL)p_addMsgFromMsgList:(id)arg1 mediaInfoList:(id)arg2 sessionName:(id)arg3;
- (BOOL)p_performSpecialMessageInsert:(void *)arg1 inSession:(id)arg2;
- (BOOL)p_performMessageInsert:(void *)arg1 svrIDArray:(id)arg2 inSession:(id)arg3;
- (BOOL)p_performPatMsgFilter:(void *)arg1 inSession:(id)arg2;
- (id)sourcePathForMediaID:(id)arg1 mediaInfo:(id)arg2;
- (BOOL)p_handleMediaForMsgItem:(id)arg1 msgWrap:(id)arg2 mediaInfo:(id)arg3;
- (void)p_renameMediaFiles;
- (BOOL)p_addContactListChat;
- (unsigned int)maxLocalID;
- (void)setMaxLocalID:(unsigned int)arg1;
- (unsigned long long)taskId;
- (void)setTaskId:(unsigned long long)arg1;
- (id)setChatName;
- (void)setSetChatName:(id)arg1;
- (id)mediaPathMapTable;
- (void)setMediaPathMapTable:(id)arg1;
- (void).cxx_destruct;
@end
