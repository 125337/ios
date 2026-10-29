@interface BotContactMgr : MMObject <PBMessageObserverDelegate>
{
    BotContactCachedData * m_botContactCachedData; // +0x8
    WCMultiShareHelper * _shareHelper; // +0x10
}
+ (BOOL)isBotContactWithUserName:(id)arg1;
+ (unsigned int)getBizTypeWithUserName:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)initListen;
- (void)removeListen;
- (BOOL)getContactsFromServer:(id)arg1;
- (BOOL)getContactsFromServer:(id)arg1 scene:(int)arg2;
- (BOOL)getContactsFromServer:(id)arg1 scene:(int)arg2 bizType:(unsigned int)arg3;
- (void)onGetContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getFunctionInfoWithBizType:(unsigned int)arg1;
- (void)onGetFunctionInfo:(id)arg1;
- (void)syncClawBotContactsWithFunctionInfo:(id)arg1;
- (unsigned int)addOplogType:(unsigned int)arg1 bizType:(unsigned int)arg2 Buffer:(id)arg3;
- (unsigned int)setBotContact:(id)arg1 remark:(id)arg2;
- (unsigned int)setBotContact:(id)arg1 nickname:(id)arg2;
- (unsigned int)setBotContact:(id)arg1 top:(BOOL)arg2;
- (unsigned int)setBotContact:(id)arg1 mute:(BOOL)arg2;
- (unsigned int)deleteBotContact:(id)arg1 isRetainChatHistory:(BOOL)arg2;
- (id)buildShareItemMapForMsgList:(id)arg1 isMergeForward:(BOOL)arg2;
- (unsigned int)delBotContact:(id)arg1 retainHistory:(BOOL)arg2;
- (id)p_getCachedDataDirPath;
- (id)p_getCachedDataFilePath;
- (void)p_loadCachedDataInfo;
- (void)p_saveCachedData;
- (BOOL)hasClawBotFunctionInfoCache;
- (id)getClawBotCachedFunctionInfo;
- (id)getCachedFunctionInfoInClawBotContact;
- (void)getClawBotContactFunctionInfo;
- (id)shareHelper;
- (void)setShareHelper:(id)arg1;
- (void).cxx_destruct;
@end
