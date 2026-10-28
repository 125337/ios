@interface CContactMgr : MMUserService <IUpdateProfileMgrExt, INewSyncExt, CContactOPLogDelegate, MMServiceProtocol, PBMessageObserverDelegate, IMMLanguageMgrExt, IBrandAttrMgrExt, IMsgExt>
{
    NSRecursiveLock * m_oLock; // +0x8
    unsigned int m_uiLoadedType; // +0x10
    CContactDB * m_oContactDB; // +0x18
    NewContactDB * m_oNewContactDB; // +0x20
    CContactOPLog * m_oContactOPLog; // +0x28
    OpenImContactMgr * m_openImContactMgr; // +0x30
    CContactUpdateMgr * m_contactUpdateMgr; // +0x38
    CContactCacheOptimizeMgr * m_contactCacheOptimizeMgr; // +0x40
    CContactConfigMgr * m_contactConfigMgr; // +0x48
    NSMutableDictionary * m_dicRemark; // +0x50
    NSMutableDictionary * m_dicLastAccessTime; // +0x58
    NSMutableDictionary * m_dicContacts; // +0x60
    NSMutableDictionary * m_dicEncodeContacts; // +0x68
    NSMutableDictionary * m_mapLastGetTime; // +0x70
    NSMutableDictionary * m_dicHardCodeUsers; // +0x78
    unsigned int m_uiDBVersion; // +0x80
    BOOL m_bFirstContactDBMigration; // +0x84
    BOOL m_bHadLoadContactDBMigration; // +0x85
    BOOL m_bContactDBMigrationFinished; // +0x86
    NSMutableDictionary * m_dicContactSendMsgTickets; // +0x88
    NSMutableDictionary * m_dicLastSendMsgTicketAccessTime; // +0x90
    NSMutableDictionary * m_dicSyncShareCardMessageStatus; // +0x98
    NSMutableArray * m_arrNotExistUserName; // +0xa0
    NSRecursiveLock * m_cacheOptimizeDataLock; // +0xa8
    unsigned int m_uiMaxStrangerCache; // +0xb0
    BOOL m_bOpenStrangerCache; // +0xb4
    BOOL m_bFinishDelayLoadAllContact; // +0xb5
    NSRecursiveLock * m_loadAllDataLock; // +0xb8
}
+ (id)getShareCardMsgFtsTextWithMsgContent:(id)arg1;
+ (void)reportGroupCreateResultWithSessionId:(id)arg1 andChatRoomUserName:(id)arg2 andActionCode:(unsigned int)arg3 andChatRoomCreateResult:(int)arg4;
+ (void)reportGroupCreateResultWithSessionId:(id)arg1 andChatRoomUserName:(id)arg2 andActionCode:(unsigned int)arg3;
- (BOOL)batchInsertContactTag:(id)arg1;
- (BOOL)batchUpdateContactTagName:(id)arg1;
- (BOOL)batchUpdateContactTagOrder:(id)arg1;
- (BOOL)batchDeleteContactTagWithArrTagId:(id)arg1;
- (BOOL)batchInsertContactTagRelationWithUserName:(id)arg1 arrContactTagID:(id)arg2;
- (id)getArrContactTagIDWithUserName:(id)arg1;
- (void)saveArrSelectRecommTagForStrangerContact:(id)arg1 arrSelectRecommTagName:(id)arg2;
- (id)getRecommendTag:(id)arg1 arrHadTagID:(id)arg2;
- (void)DisabledShareCardMessageMsg:(id)arg1 shareCardMessageState:(unsigned int)arg2;
- (void)DisabledShareCardMessageMsg:(id)arg1 shareCardMessageState:(unsigned int)arg2 isSyncExtDevice:(BOOL)arg3;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)getMsgUserNameLocalID:(id)arg1;
- (void)udpateSendMsgActionFlag:(unsigned int)arg1;
- (void)asynUdpateContactSendMsgTicketList:(id)arg1;
- (unsigned int)getSendMsgActionFlag;
- (id)getSendMsgTicketWithUserName:(id)arg1;
- (id)getContactSendMsgTicketFromDic:(id)arg1;
- (void)updateContactSendMsgTicketCache;
- (void)updateContactSendMsgTicket:(id)arg1;
- (void)reportNewSyncCmdContactImportantChangeData:(id)arg1;
- (void)reportGetContactFromServiceContactImportantChangeData:(id)arg1;
- (void)reportContactImportantChangeData:(id)arg1 actionScene:(unsigned int)arg2;
- (void)reportContactImportantChangeData:(id)arg1 actionCode:(unsigned int)arg2 actionScene:(unsigned int)arg3;
- (void)reportContactImportantChangeData:(id)arg1 oldContact:(id)arg2 actionCode:(unsigned int)arg3 actionScene:(unsigned int)arg4;
- (void)reportContactImportantChangeData:(id)arg1 oldContact:(id)arg2 actionCode:(unsigned int)arg3 actionScene:(unsigned int)arg4 isPrintContactInfo:(BOOL)arg5;
- (void)printContactImportantChangeData:(id)arg1 oldContact:(id)arg2;
- (void)reportContactImportantChangeData:(id)arg1 actionCode:(unsigned int)arg2 actionScene:(unsigned int)arg3 oldValue:(id)arg4 newValue:(id)arg5;
- (void)makeSendMsgFailedWithSystemMsgWrap:(id)arg1;
- (void)makeUnavailableAccountTipWithSystemMsgWrap:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)modifyContact:(id)arg1 Des:(id)arg2 WithBlock:(id /* block */)arg3 WithDoneBlock:(id /* block */)arg4;
- (BOOL)modifyOrAddContact:(id)arg1 Des:(id)arg2 WithAddBlock:(id /* block */)arg3 AddDoneBlock:(id /* block */)arg4 WithModBlock:(id /* block */)arg5 ModDoneBlock:(id /* block */)arg6;
- (BOOL)modifyContact:(id)arg1 Des:(id)arg2 WithBlock:(id /* block */)arg3;
- (BOOL)modifyContactForInternel:(id)arg1 Des:(id)arg2 WithBlock:(id /* block */)arg3;
- (void)internalNewContact:(id)arg1;
- (BOOL)setContact:(id)arg1 remark:(id)arg2;
- (BOOL)setContact:(id)arg1 chatState:(unsigned int)arg2;
- (BOOL)setHDHeadUpdated:(id)arg1 Url:(id)arg2;
- (BOOL)setContact:(id)arg1 antispamTicket:(id)arg2;
- (BOOL)setContact:(id)arg1 groupMemberTicket:(id)arg2;
- (BOOL)setContact:(id)arg1 remark:(id)arg2 isLocal:(BOOL)arg3;
- (unsigned int)startModifyContactUserName:(id)arg1 remark:(id)arg2;
- (BOOL)setPhone:(id)arg1 Contact:(id)arg2;
- (BOOL)setContact:(id)arg1 cardDesc:(id)arg2;
- (BOOL)setContact:(id)arg1 cardUrl:(id)arg2;
- (BOOL)setContact:(id)arg1 arrCardItem:(id)arg2;
- (BOOL)setContact:(id)arg1 nickName:(id)arg2;
- (BOOL)clearDraftForContact:(id)arg1;
- (BOOL)setContact:(id)arg1 mobileIdentify:(id)arg2;
- (BOOL)setContact:(id)arg1 labelIDList:(id)arg2;
- (BOOL)setContact:(id)arg1 snsBlack:(BOOL)arg2;
- (BOOL)setContact:(id)arg1 WeRunBlack:(BOOL)arg2;
- (BOOL)setContact:(id)arg1 owner:(id)arg2;
- (BOOL)setContact:(id)arg1 chatRoomData:(id)arg2;
- (BOOL)setContact:(id)arg1 RoomDetail:(id)arg2;
- (BOOL)setContact:(id)arg1 chatRoomAccessType:(unsigned int)arg2 qrCodeAccessType:(unsigned int)arg3;
- (BOOL)setContact:(id)arg1 nsAdminList:(id)arg2 nsMemberList:(id)arg3;
- (BOOL)setContact:(id)arg1 RoomSpecialAttentionList:(id)arg2 isNotify:(BOOL)arg3;
- (BOOL)setContact:(id)arg1 chatRoomMemList:(id)arg2 isNotify:(BOOL)arg3;
- (BOOL)setContact:(id)arg1 chatRoomBusinessType:(unsigned long long)arg2;
- (BOOL)setContact:(id)arg1 localBitFlag:(unsigned long long)arg2;
- (BOOL)setContact:(id)arg1 localAddContactTime:(unsigned int)arg2;
- (BOOL)setBlackInLocal:(id)arg1 blackFlag:(BOOL)arg2;
- (BOOL)setBlack:(id)arg1 blackFlag:(BOOL)arg2 sync:(BOOL)arg3;
- (BOOL)setBlack:(id)arg1;
- (BOOL)setNoBlack:(id)arg1;
- (BOOL)setBlack:(id)arg1 sync:(BOOL)arg2;
- (BOOL)setNoBlack:(id)arg1 sync:(BOOL)arg2;
- (BOOL)addFromMobileContact:(id)arg1;
- (void)addContactInternal:(id)arg1;
- (BOOL)addLocalContact:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)addContact:(id)arg1 listType:(unsigned int)arg2 opLog:(BOOL)arg3 callExt:(BOOL)arg4;
- (BOOL)addContact:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)RemoveContactFromChatList:(id)arg1;
- (BOOL)setContact:(id)arg1 socialBlack:(BOOL)arg2;
- (BOOL)setContactUserName:(id)arg1 chatRoomLocalSendUpgradeType:(unsigned int)arg2;
- (BOOL)setLocalPatSuffixWithUserName:(id)arg1 patSuffix:(id)arg2;
- (id)getLocalSelfPatSuffixJson;
- (BOOL)setContactUserName:(id)arg1 textStateId:(id)arg2 extInfo:(id)arg3;
- (BOOL)setLocalListTypeWithUserName:(id)arg1 listType:(unsigned int)arg2 addFlag:(BOOL)arg3;
- (BOOL)setContact:(id)arg1 isInChatBox:(BOOL)arg2;
- (BOOL)setContact:(id)arg1 isShowOpenIMStoragePopUp:(BOOL)arg2 openIMPrivacyAgreementUrl:(id)arg3;
- (BOOL)deleteChatRoomTopMsgWithUserName:(id)arg1 insertNewTopMsgList:(id)arg2;
- (id)getChatRoomTopMsgInfoListWithUserName:(id)arg1 isAllResult:(BOOL)arg2;
- (BOOL)removeChatRoomTopMsgLocalWithUserName:(id)arg1 topId:(unsigned int)arg2;
- (BOOL)removeChatRoomTopMsgLocalWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (BOOL)addChatRoomTopMsgLocalWithUserName:(id)arg1 topMsgInfo:(id)arg2;
- (BOOL)setChatRoomTopMsgLocalRevokeWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (BOOL)setChatRoomTopMsgExposureTimeWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2 exposureTime:(unsigned int)arg3;
- (BOOL)insertOrUpdateNewTopMsgListWithUserName:(id)arg1 newTopMsgList:(id)arg2;
- (BOOL)checkIsHadTopMsgWithUserName:(id)arg1 msgSvrID:(unsigned long long)arg2;
- (id)getContactFromDic:(id)arg1;
- (void)setContactToDic:(id)arg1 forKey:(id)arg2;
- (void)removeContactFromDic:(id)arg1;
- (id)getContactFromDB:(id)arg1;
- (BOOL)removeContactFromDB:(id)arg1;
- (BOOL)addContactToDb:(id)arg1;
- (BOOL)updateContactToDb:(id)arg1;
- (BOOL)loadContactExtInfo:(id)arg1;
- (void)setMigrationFinished;
- (BOOL)splist_migrationContactList:(id)arg1;
- (void)reportMigrationStat:(unsigned int)arg1 status:(unsigned int)arg2;
- (BOOL)migrationContacts:(unsigned int)arg1 first:(BOOL)arg2;
- (BOOL)getAllContactList:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)getAllUserName:(id)arg1;
- (BOOL)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (id)addOrUpdateContactToDB:(id)arg1 listType:(unsigned int)arg2 add:(BOOL *)arg3 modify:(BOOL *)arg4;
- (BOOL)thread_BatchModifyContact:(id)arg1 isInit:(BOOL)arg2;
- (BOOL)thread_BatchModifyContact:(id)arg1;
- (BOOL)thread_onPushModifyContact:(id)arg1 isInit:(BOOL)arg2 arrNewContact:(id)arg3;
- (BOOL)ModifyNotifyStatus:(id)arg1 withStatus:(unsigned int)arg2;
- (BOOL)SetFriendMetaFlag:(unsigned int)arg1 ForUser:(id)arg2;
- (BOOL)ModifyContactEncryptSecret:(id)arg1 withEncryptSecretInfo:(id)arg2;
- (BOOL)deleteChatRoomToolWeAppInDBWithUserName:(id)arg1 insertNewWeAppItemList:(id)arg2;
- (id)getChatRoomToolWeAppListInDBWithUserName:(id)arg1;
- (id)getBestCacheOptimizeStrategyFromTime:(double)arg1;
- (unsigned int)getMatchStrategyFeatureRecordCountFromTime:(double)arg1 strategyFeature:(id)arg2;
- (BOOL)addContactCacheAccessUserFeatureRecrods:(id)arg1;
- (BOOL)removeContactCacheAccessUserFeatureRecrodsToTime:(unsigned int)arg1;
- (unsigned int)getAllChatRoomStrangerCount;
- (unsigned int)getFirstRecordCacheOptimizeInfoTime;
- (void)addChatRoomStrangerRemark:(id)arg1;
- (id)init;
- (void)initLock;
- (void)initListen;
- (void)removeListen;
- (void)dealloc;
- (BOOL)isCacheAllLoaded;
- (id)addSelfContactToCache;
- (int)autoreloadContacts:(unsigned int)arg1;
- (int)autoreloadContacts:(unsigned int)arg1 needLoadExt:(BOOL)arg2;
- (void)addDictoryDataToCache:(id)arg1 listType:(unsigned int)arg2;
- (void)refreshPluginNickName:(BOOL)arg1;
- (void)refreshContactLocalData;
- (void)internalUpdateContactLocalDataWithUserName:(id)arg1;
- (id)generatePluginContact:(id)arg1 uiType:(unsigned int)arg2;
- (id)generatePluginContact:(id)arg1;
- (id)generatePluginContactNoListContact:(id)arg1;
- (id)generateOfficialContact:(id)arg1;
- (void)addAddHardcodeContact:(id)arg1 selector:(SEL)arg2;
- (void)addHardCodeContacts;
- (void)addHardcodeOfficialContactWithUsrName:(id)arg1;
- (BOOL)isHardCodeContact:(id)arg1;
- (int)interalReloadContacts:(unsigned int)arg1 needLoadExt:(BOOL)arg2;
- (BOOL)isContactMatch:(id)arg1 listType:(unsigned int)arg2 contactType:(unsigned int)arg3;
- (void)handleOfficalContactName:(id)arg1;
- (void)handleWeChatTeamNickName:(id)arg1;
- (void)mergeChatRoomData:(id)arg1 oldContact:(id)arg2;
- (BOOL)isChatRoomMember:(id)arg1;
- (void)internalModifyContact:(id)arg1 CallExt:(BOOL)arg2;
- (void)callOnModifyExt:(id)arg1;
- (void)callOnDeleteExt:(id)arg1;
- (void)callOnModifyContactHeadImageExt:(id)arg1;
- (void)callOnRemoveContactFromAddressBook:(id)arg1;
- (void)callOnDeleteContactIsShouldKeep:(id)arg1;
- (id)reloadContact:(id)arg1 mergeImage:(id)arg2;
- (void)handleLocalField:(id)arg1 oldContact:(id)arg2;
- (void)handleNotChatRoomMemberField:(id)arg1 oldContact:(id)arg2;
- (void)main_onPushModifyContact:(id)arg1;
- (void)onPushModifyContact:(id)arg1;
- (void)onPushDeleteContact:(id)arg1;
- (BOOL)isUserNewDB;
- (BOOL)checkHadLoadContactDB;
- (void)updateNewDB:(id)arg1 NewUser:(BOOL)arg2;
- (void)initDB:(id)arg1;
- (void)updateCache:(id)arg1;
- (id)getContactByName:(id)arg1;
- (id)getContactByNameFromDB:(id)arg1;
- (id)getContactByNameFromCache:(id)arg1;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (BOOL)isContactBlack:(id)arg1;
- (BOOL)isContactExistLocal:(id)arg1;
- (BOOL)isInContactList:(id)arg1;
- (BOOL)isBelongToMMContactInCache:(id)arg1;
- (id)getContactList:(unsigned int)arg1 contactType:(unsigned int)arg2;
- (id)getContactList:(unsigned int)arg1 contactType:(unsigned int)arg2 needLoadExt:(BOOL)arg3;
- (id)getAllEnterpriseMainBrandContacts;
- (id)getAllBrandContacts;
- (id)getAllSubscriptionBrandContacts;
- (BOOL)deleteContactLocal:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)deleteContact:(id)arg1 listType:(unsigned int)arg2;
- (BOOL)deleteContact:(id)arg1 listType:(unsigned int)arg2 sync:(BOOL)arg3;
- (BOOL)deleteContact:(id)arg1 listType:(unsigned int)arg2 andScene:(unsigned int)arg3 sync:(BOOL)arg4;
- (BOOL)deleteContact:(id)arg1 listType:(unsigned int)arg2 andScene:(unsigned int)arg3 sync:(BOOL)arg4 local:(BOOL)arg5;
- (void)modifyContactNickName:(id)arg1 nickName:(id)arg2 callMod:(BOOL)arg3;
- (BOOL)setContact:(id)arg1 typeBit:(unsigned int)arg2 set:(BOOL)arg3 sync:(BOOL)arg4 localSet:(BOOL)arg5;
- (BOOL)setContact:(id)arg1 typeBit:(unsigned int)arg2 set:(BOOL)arg3 sync:(BOOL)arg4;
- (BOOL)setLocalContact:(id)arg1 notifyOpen:(BOOL)arg2;
- (BOOL)setContact:(id)arg1 favour:(BOOL)arg2 sync:(BOOL)arg3;
- (BOOL)setContact:(id)arg1 watchContact:(BOOL)arg2 sync:(BOOL)arg3;
- (BOOL)setContact:(id)arg1 notifyOpen:(BOOL)arg2 sync:(BOOL)arg3;
- (BOOL)setContact:(id)arg1 notifyOpen:(BOOL)arg2 sync:(BOOL)arg3 localSet:(BOOL)arg4;
- (BOOL)setContact:(id)arg1 sessionTop:(BOOL)arg2 sync:(BOOL)arg3;
- (BOOL)setContact:(id)arg1 sessionTop:(BOOL)arg2 sync:(BOOL)arg3 localSet:(BOOL)arg4;
- (BOOL)setLocalContactToUntopSession:(id)arg1;
- (void)reloadContactImageStatus:(id)arg1 Status:(id)arg2 Image:(id)arg3;
- (void)thread_saveContactImageStatus:(id)arg1 Status:(id)arg2 Image:(id)arg3 Url:(id)arg4;
- (void)reportIDKey:(id)arg1 stranger:(id)arg2;
- (void)doReportIDKeyWithUiFriendInAddr:(unsigned int)arg1 andUiFriendNotInAddr:(unsigned int)arg2 andUiChatRoomInAddr:(unsigned int)arg3 andUiChatRoomNotInAddr:(unsigned int)arg4 andUiAll:(unsigned int)arg5 andCacheCount:(unsigned long long)arg6;
- (void)optimizeReportIDKey:(id)arg1 stranger:(id)arg2;
- (BOOL)delayLoadAllContactInBackGround;
- (void)reloadContact:(id)arg1;
- (void)tryLoadExtInfoForContact:(id)arg1;
- (BOOL)checkIfForbiddenGetContact:(id)arg1;
- (void)addToGetContactMap:(id)arg1;
- (BOOL)internalGetContactsFromSvr:(id)arg1 chatContact:(id)arg2 usrData:(id)arg3;
- (BOOL)getContactsFromSvrForTempChat:(id)arg1;
- (BOOL)getContactsFromServer:(id)arg1 chatContact:(id)arg2;
- (BOOL)getContactsFromServer:(id)arg1;
- (BOOL)getInviteeContactsFromServer:(id)arg1 withTicket:(id)arg2;
- (BOOL)getContactsFromServer:(id)arg1 chatContact:(id)arg2 withScene:(int)arg3 withTicket:(id)arg4 usrData:(id)arg5;
- (id)getGroupCardMemberList:(id)arg1;
- (void)fixContactPluginOldData;
- (void)updateContactLocalData;
- (id)getSocialBlackList;
- (id)getLimitedModeGuardianContact;
- (id)getFinderBlackList;
- (unsigned int)getContactActiveTLastTime:(id)arg1;
- (BOOL)setContact:(id)arg1 typeExtBit:(unsigned int)arg2 set:(BOOL)arg3 sync:(BOOL)arg4 localSet:(BOOL)arg5;
- (BOOL)setContact:(id)arg1 typeExtBit:(unsigned int)arg2 set:(BOOL)arg3 sync:(BOOL)arg4;
- (BOOL)setContact:(id)arg1 foldSingleChat:(BOOL)arg2 sync:(BOOL)arg3;
- (BOOL)setContact:(id)arg1 foldSingleChat:(BOOL)arg2 sync:(BOOL)arg3 localSet:(BOOL)arg4;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)updateSelfContactLocalPatSuffix;
- (void)onLanguageChange;
- (void)onRegCountryChange;
- (void)main_onPushBatchModContact:(id)arg1;
- (void)onNewSyncDeleteContact:(id)arg1;
- (void)onProfilePreChange;
- (void)onProfileChange;
- (void)onNewSyncBatchModContacts:(id)arg1;
- (id)thread_HandleMemContact:(id)arg1;
- (void)thread_ReloadMemConact:(id)arg1 ChatRoom:(id)arg2;
- (void)MainThread_ReloadMemContact:(id)arg1;
- (void)onGetContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)shouldUpdateContact:(id)arg1;
- (double)updateLimitDuration;
- (BOOL)updateContactToCache:(id)arg1;
- (id)getSelfContact;
- (void)setSelfContactUpdated;
- (void)main_onPushDeleteContact:(id)arg1;
- (void)main_onPushAddContact:(id)arg1;
- (void)main_onPushAddBrandContact:(id)arg1;
- (id)thread_onpushBatchModContact:(id)arg1;
- (id)thread_onBatchModifyChatRoomMember:(id)arg1;
- (BOOL)ChangeNotifyStatusForChatRoom:(id)arg1 withStatus:(BOOL)arg2 sync:(BOOL)arg3;
- (BOOL)ChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2 sync:(BOOL)arg3;
- (BOOL)ChangeUnfoldSns:(id)arg1 withStatus:(BOOL)arg2;
- (void)setChatRoomDataJoinChatRoomWord:(id)arg1 andModContact:(id)arg2;
- (BOOL)canDeleteContactInNewSyn:(id)arg1;
- (void)onBrandContactModified:(id)arg1 withAttrChanged:(id)arg2;
- (BOOL)isHeadImgUpdated:(id)arg1 Local:(id)arg2;
- (void)callModifyContactForCPState:(id)arg1;
- (id)getContactForSearchByName:(id)arg1;
- (id)getAllContactUserName;
- (id)getAllContactUserNameFromCache;
- (unsigned int)getContactCount;
- (id)getContactByAlias:(id)arg1;
- (id)getAddsceneChatRoomContactSource:(id)arg1 fromMe:(BOOL)arg2;
- (id)openIMMgr;
- (id)contactUpdateMgr;
- (id)contactCacheOptimizeMgr;
- (id)contactConfigMgr;
- (id)getIndexRecordOfTypeForFTS:(int)arg1;
- (unsigned int)getUnIndexRecordCountOfType:(int)arg1;
- (id)getUnIndexContactOfType:(int)arg1 limit:(unsigned int)arg2;
- (BOOL)markIndexUpdatedOfType:(int)arg1 success:(BOOL)arg2;
- (void)clearFTSIndexRecord;
- (void)reloadSkipContactDictionary;
- (void).cxx_destruct;
@end
