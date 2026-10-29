@interface OpenImContactMgr : NSObject <PBMessageObserverDelegate, IMsgExt>
{
    OpenImSyncMgr * m_OpenImSyncMgr; // +0x8
    OpenImResourceMgr * m_OpenImResourceMgr; // +0x10
    OpenIMContactExtendCodePB * m_openImExtendInfo; // +0x18
}
+ (id)convertToCContact:(id)arg1;
+ (void)fillToCContact:(id)arg1 from:(id)arg2;
+ (id)convertChatRoomContactToCContact:(id)arg1;
+ (void)fillToCContact:(id)arg1 fromChatRoomContact:(id)arg2;
+ (void)fillToOpenImContact:(id)arg1 withOpenImContact:(id)arg2;
+ (id)convertChatRoomMemberToCContact:(id)arg1 isSimplify:(BOOL)arg2;
+ (void)fillToCContact:(id)arg1 fromChatRoomMember:(id)arg2 isSimplify:(BOOL)arg3;
+ (id)getWordingIDFromCContact:(id)arg1;
+ (id)getWordingIDFromOpenIMInfo:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)reportOpenIMNewSucceedAcceptSucceedMessagewrapWithUsrName:(id)arg1 andMessageWrap:(id)arg2;
- (void)disableOpenIMFriReqAcceptedInWxWorkWithSystemMsgWrap:(id)arg1 andNsUsrName:(id)arg2;
- (void)doOpenIMStorageArchivePopUpWithSystemMsgWrap:(id)arg1 andNsUsrName:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)initListen;
- (void)removeListen;
- (id)resourceMgr;
- (void)batchCheckAndUpdataOpenImResource:(id)arg1;
- (BOOL)getOpenIMContactOpenUrlFromServer:(id)arg1 andLastReceiveContent:(id)arg2;
- (void)onGetOpenIMContactOpenUrl:(id)arg1;
- (BOOL)getContactsFromServer:(id)arg1 chatContact:(id)arg2 withTicket:(id)arg3;
- (void)onGetContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)addOplogType:(unsigned int)arg1 Buffer:(id)arg2;
- (unsigned int)setOpenImContact:(id)arg1 remark:(id)arg2;
- (unsigned int)setOpenImContact:(id)arg1 black:(BOOL)arg2;
- (unsigned int)setOpenImContact:(id)arg1 top:(BOOL)arg2;
- (unsigned int)setOpenImContact:(id)arg1 mute:(BOOL)arg2;
- (unsigned int)setOpenImContact:(id)arg1 favour:(BOOL)arg2;
- (unsigned int)setOpenImContact:(id)arg1 fold:(BOOL)arg2;
- (unsigned int)deleteOpenImContact:(id)arg1 isRetainChatHistory:(BOOL)arg2;
- (void)getOpenIMArchivePopUpInfo:(id)arg1 privacyAgreementUrl:(id)arg2;
- (void)onGetOpenIMArchivePopUpInfo:(id)arg1;
- (void)updateOpenIMArchiveStatus:(id)arg1 privacyAgreementUrl:(id)arg2 isAgreementArchiveStatus:(BOOL)arg3;
- (void)onUpdateOpenIMArchiveStatus:(id)arg1;
- (void)safeCallOpenIMStorageArchivePopUp:(id)arg1 privacyAgreementUrl:(id)arg2;
- (void)saveOpenIMContactHadShowSucceedContactWindow:(id)arg1;
- (void)saveOpenIMContactHadSucceedContact:(id)arg1;
- (BOOL)openIMContactHadShowSucceedContactWindow:(id)arg1;
- (BOOL)openIMContactHadSucceedContact:(id)arg1;
- (id)getOpenImExtendInfoDataFilePath;
- (void)saveOpenImExtendInfoToDataFileInternal;
- (void)loadOpenImExtendInfoInternal;
- (void).cxx_destruct;
@end
