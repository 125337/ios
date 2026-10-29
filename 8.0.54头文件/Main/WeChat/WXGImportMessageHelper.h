@interface WXGImportMessageHelper : NSObject
{
    BOOL _bShouldImport; // +0x8
    BOOL _bShouldFilterMsg; // +0x9
    unsigned int _maxLocalID; // +0xc
    id <WXGImportMessageHelperDelegate> _delegate; // +0x10
    NSMutableSet * _importChatName; // +0x18
    WXGImportAnalyseInfo * _analyseInfo; // +0x20
    NSMutableSet * _setChatName; // +0x28
    NSMutableDictionary * _mediaPathMapTable; // +0x30
    NSString * _folderPath; // +0x38
}
+ (void)finishAndUpdateSession;
+ (id)splitMsgListIDArray:(id)arg1;
+ (id)getBakChatMsgList:(id)arg1;
- (id)init;
- (id)initWithMsgListFolderPath:(id)arg1;
- (void)stopImport;
- (BOOL)internalRecoverMessage:(id)arg1 withSessionName:(id)arg2 withStartTime:(unsigned int)arg3 withEndTime:(unsigned int)arg4;
- (BOOL)internalRecoverMessage:(id)arg1 withSessionName:(id)arg2 withStartTime:(unsigned int)arg3 withEndTime:(unsigned int)arg4 textOnly:(BOOL)arg5;
- (BOOL)internalRecoverMessage:(id)arg1 withSessionName:(id)arg2 withStartTime:(unsigned int)arg3 withEndTime:(unsigned int)arg4 textOnly:(BOOL)arg5 pathRelative:(BOOL)arg6;
- (BOOL)p_addMsgFromMsgList:(id)arg1 withSessionName:(id)arg2 withStartTime:(unsigned int)arg3 withEndTime:(unsigned int)arg4 textOnly:(BOOL)arg5 isPathRelative:(BOOL)arg6;
- (void)callBackImportOneMsgList:(id)arg1;
- (BOOL)p_performSpecialMessageInsert:(void *)arg1 inSession:(id)arg2;
- (BOOL)p_performMessageInsert:(void *)arg1 svrIDArray:(id)arg2 inSession:(id)arg3 chatInfo:(id)arg4;
- (BOOL)p_performPatMsgFilter:(void *)arg1 inSession:(id)arg2;
- (BOOL)p_handleMediaForBakChatMsgItem:(id)arg1 msgWrap:(id)arg2 chatInfo:(id)arg3;
- (void)p_renameMediaFiles;
- (BOOL)p_addContactListChat;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)importChatName;
- (id)analyseInfo;
- (void)setAnalyseInfo:(id)arg1;
- (unsigned int)maxLocalID;
- (void)setMaxLocalID:(unsigned int)arg1;
- (BOOL)bShouldImport;
- (void)setBShouldImport:(BOOL)arg1;
- (id)setChatName;
- (void)setSetChatName:(id)arg1;
- (id)mediaPathMapTable;
- (void)setMediaPathMapTable:(id)arg1;
- (id)folderPath;
- (void)setFolderPath:(id)arg1;
- (BOOL)bShouldFilterMsg;
- (void)setBShouldFilterMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end

