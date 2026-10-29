@interface FTSContactDataProvider : MMUserService <IContactMgrExt, IContactLabelMgrExt, IMMNewSessionMgrExt, WXGImportMessageNotification, IMMRegionCodeMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicContact; // +0x8
    NSMutableArray * _arrSessionContact; // +0x10
    NSMutableDictionary * _dicNewestCreateTimeForSession; // +0x18
    NSMutableDictionary * _dicTagNames; // +0x20
    NSMutableDictionary * _dicZoneNames; // +0x28
    NSMutableDictionary * _dicZoneCode; // +0x30
    NSMutableArray * _arrSingleContact; // +0x38
    NSMutableArray * _arrSingleFriendContact; // +0x40
    NSMutableSet * _setSingleBlackFriendContactUserName; // +0x48
    NSMutableArray * _arrGroupContact; // +0x50
    NSMutableArray * _arrOpenImContact; // +0x58
    NSMutableArray * _arrBrandContact; // +0x60
    NSMutableArray * _arrBrandServiceContact; // +0x68
    NSMutableArray * _arrBrandStickerContact; // +0x70
    NSMutableArray * _arrBotContact; // +0x78
    BOOL _hasLoadedSessionContact; // +0x80
    BOOL _hasLoadedChatRoomData; // +0x81
    BOOL _isNotifyingReload; // +0x82
    NSMutableSet * _ftsContactVerifySet; // +0x88
    unsigned int _lastVerifyTime; // +0x90
    NSMutableSet * _setChatRoomWithoutMemList; // +0x98
    NSRecursiveLock * m_loadAllContactsUseLock; // +0xa0
    ContactsDataLogic * m_contactsDataLogic; // +0xa8
}
+ (BOOL)isFtsValidContact:(id)arg1;
+ (BOOL)isFtsValidContact:(id)arg1 needGroupMember:(BOOL)arg2 checkListType:(BOOL)arg3;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)clearData;
- (void)clearSessionCreateTime;
- (void)doInit;
- (void)notifyReload;
- (void)loadAllSessionContact;
- (id)loadSessionUserName:(id)arg1;
- (void)tryLoadContacts;
- (void)tryLoadContacts:(id)arg1;
- (void)reloadZone:(id)arg1;
- (void)updateZone:(id)arg1;
- (void)addContact:(id)arg1;
- (void)deleteContact:(id)arg1;
- (void)tryInitSessionContactTime;
- (void)asyncParseChatRoomData:(id)arg1;
- (void)updateChatRoomData:(id)arg1;
- (id)getAllContacts:(BOOL)arg1;
- (id)getMMSingleContactsWithOpenIM;
- (id)getMMSingleContactsWithGroup;
- (id)getMMSingleContact;
- (id)getMMSingleFriendContact;
- (id)getMMBotContact;
- (id)getLoadedMMBotContact;
- (BOOL)hasBotContactLoaded;
- (id)getMMSingleBlackFriendContactUserName;
- (id)getBrandContact;
- (id)getBrandServiceContact;
- (void)appendWeCustomerHelperToBrandServiceContactsIfNeeded:(id)arg1;
- (id)getBrandStickerContact;
- (id)getLoadedBrandStickerContact;
- (id)getGroupContact;
- (id)getOpenImContact;
- (id)getDicContacts;
- (id)getDicSessionCreateTime;
- (id)getDicTagNames;
- (id)getDicZoneNames;
- (BOOL)hasAllContactLoaded;
- (BOOL)hasLoadedSessionContact;
- (BOOL)hasLoadedChatRoomData;
- (BOOL)hasInitSessionContact;
- (void)onModifyContact:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onNewMsgArriving:(id)arg1 NotifyFlag:(long long)arg2;
- (void)onAllTagNameUpdate;
- (void)onContactTagNameUpdate:(id)arg1;
- (void)onRegionCodeReload;
- (void)tryDoVerifyReport;
- (void)verifyChatRoomStatus:(id)arg1;
- (void)internalVerifySourceConsistency;
- (void)internalReportChatRoomStatus;
- (void)internalReportSourceVerifyStatusWithSession:(id)arg1 andListContact:(id)arg2;
- (void)makeupFtsContactSource:(id)arg1;
- (void).cxx_destruct;
@end
