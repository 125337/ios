@interface WXGRoamImportMessageHandler : NSObject
{
    unsigned int _maxLocalID; // +0x8
    NSMutableSet * _setChatName; // +0x10
    NSMutableDictionary * _mediaPathMapTable; // +0x18
    NSString * _folderPath; // +0x20
}
+ (void)finishAndUpdateSession;
+ (id)msgWrapFromMsgItem:(id)arg1;
+ (id)getBakChatMsgList:(id)arg1;
- (BOOL)internalRecoverMessage:(id)arg1 mediaFolder:(id)arg2 sessionName:(id)arg3;
- (BOOL)p_addMsgFromMsgList:(id)arg1 sessionName:(id)arg2;
- (BOOL)p_performSpecialMessageInsert:(void *)arg1 inSession:(id)arg2;
- (BOOL)p_performMessageInsert:(void *)arg1 svrIDArray:(id)arg2 inSession:(id)arg3;
- (BOOL)p_performPatMsgFilter:(void *)arg1 inSession:(id)arg2;
- (BOOL)p_handleMediaForMsgItem:(id)arg1 msgWrap:(id)arg2;
- (void)p_renameMediaFiles;
- (BOOL)p_addContactListChat;
- (unsigned int)maxLocalID;
- (void)setMaxLocalID:(unsigned int)arg1;
- (id)setChatName;
- (void)setSetChatName:(id)arg1;
- (id)mediaPathMapTable;
- (void)setMediaPathMapTable:(id)arg1;
- (id)folderPath;
- (void)setFolderPath:(id)arg1;
- (void).cxx_destruct;
@end

