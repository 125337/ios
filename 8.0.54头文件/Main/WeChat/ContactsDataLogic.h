@interface ContactsDataLogic : MMObject <IFTSContactMgrExt, FTSMultiContactSearchDelegate, IContactMgrExt, PluginUtilExt>
{
    id <ContactsDataLogicDelegate> m_delegate; // +0x8
    NSMutableDictionary * m_dicAllContacts; // +0x10
    NSMutableArray * m_arrAllKey; // +0x18
    NSMutableArray * m_arrFilteredContacts; // +0x20
    NSMutableArray * m_arrChatRooms; // +0x28
    NSMutableDictionary * m_dicOpenIMContacts; // +0x30
    NSMutableDictionary * m_dicOpenIMContactClassifys; // +0x38
    NSMutableArray * m_arrAccountDeletedOpenIMContact; // +0x40
    unsigned int m_uiScene; // +0x48
    unsigned int m_uiNormalContact; // +0x4c
    BOOL m_bSort; // +0x50
    BOOL m_bNeedReload; // +0x51
    BOOL m_extendChatRoom; // +0x52
    unsigned int m_uiContactCount; // +0x54
    BOOL m_hadOpenIMContact; // +0x58
    FTSTopHitMgr * _ftsTopHitMgr; // +0x60
    NSString * _taskKey; // +0x68
    NSString * nsCurrentSearchText; // +0x70
    NSMutableArray * _arrResultKey; // +0x78
    NSMutableDictionary * _dicResultTitle; // +0x80
    NSMutableDictionary * _dicResult; // +0x88
    WCSmartGroupCore * _recommendLogic; // +0x90
    NSDictionary * _dicRecommendGroupSelectedContacts; // +0x98
    unsigned int _smartGroupSeq; // +0xa0
    NSMutableArray * m_arrRecommendContacts; // +0xa8
    NSMutableArray * m_arrRecommendGroups; // +0xb0
    MMTimer * m_ProcessOnModifyContactTimer; // +0xb8
    FTSMultiContactSearchLogic * _multiSearchLogic; // +0xc0
    BOOL m_bNotSearchTopHit; // +0xc8
    BOOL m_bNotifySearchWhenSearchAll; // +0xc9
    BOOL _bMemberMatch; // +0xca
    BOOL _bMemberMatchWithGroups; // +0xcb
    unsigned int _m_eFTSSearchType; // +0xcc
    unsigned long long m_enAsyncSearchOption; // +0xd0
    WCSTokenPickLogic * _tokenPickLogic; // +0xd8
    NSMutableArray * _myNormalContactArray; // +0xe0
}
- (void)processOnModifyContact;
- (BOOL)shouldShowSubscriptionBrandGroup;
- (BOOL)shouldShowServiceBrandGroup;
- (unsigned int)getEnterpriseBrandCount;
- (unsigned int)getOpenIMAcctTypeCount;
- (unsigned int)getContactCount;
- (id)getArrAccountDeletedOpenIMContact;
- (id)getFavourContactArray;
- (id)getAllNormalContact;
- (void)unInstallPlugin:(id)arg1;
- (void)deleteContact:(id)arg1 deleteInDB:(BOOL)arg2;
- (void)removeBrandCache:(id)arg1;
- (BOOL)hasChatRoom;
- (BOOL)hasShowOpenIMEntrance;
- (void)pluginsChanged;
- (id)addHiddenSectionKey:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (void)sort;
- (void)addContact:(id)arg1;
- (id)getChatRoomContacts;
- (id)getDicOpenIMContacts;
- (id)getDicOpenIMContactClassifys;
- (void)filterContactsViewContacts:(id)arg1;
- (void)filterOpenImContactViewContacts:(id)arg1;
- (void)filterSelectContacts:(id)arg1;
- (void)filterSelectWithBrandContacts:(id)arg1 IgnoreOpenim:(BOOL)arg2;
- (void)filterSelectOpenIMContacts:(id)arg1;
- (void)filterMultiSelectContacts:(id)arg1 IgnoreOpenim:(BOOL)arg2;
- (void)filterGroupContacts:(id)arg1 IgnoreOpenim:(BOOL)arg2;
- (BOOL)hasGroupContacts;
- (BOOL)hasHistoryGroupContacts;
- (void)filterCanUpgradeOpenIMGroupContacts:(id)arg1;
- (void)filterHistoryGroupContacts:(id)arg1 IgnoreOpenim:(BOOL)arg2;
- (void)filterSelectWithVerifyedContacts:(id)arg1;
- (void)filterMutilSelectWithBakChatFilter:(id)arg1;
- (void)filterVideoContact:(id)arg1;
- (void)filterVoiceContact:(id)arg1;
- (void)filterOnlyWeixinContact:(id)arg1 IgnoreOpenim:(BOOL)arg2 ignoreSelf:(BOOL)arg3 ignoreFileHelpr:(BOOL)arg4;
- (void)filterTransferMoneyContacts:(id)arg1;
- (void)filterTransferMoneySimpleSessionContacts:(id)arg1;
- (void)filterSingleSelectSession:(id)arg1;
- (void)filterOnlyBrandContactContact:(id)arg1;
- (void)filterForSearchContact:(id)arg1;
- (void)filterCustomizationSelectContacts:(id)arg1;
- (void)filtInContacts:(id)arg1;
- (id)getEmptyTips;
- (void)onlyReloadOpemIMContacts;
- (BOOL)reloadContacts;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2 sort:(BOOL)arg3;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2 sort:(BOOL)arg3 extendChatRoom:(BOOL)arg4;
- (id)initWithScene:(unsigned int)arg1 delegate:(id)arg2;
- (BOOL)getNeedSort;
- (void)dealloc;
- (void)doAsynInit;
- (void)updateAsynSearchQueryText:(id)arg1;
- (void)updateSelectedContacts:(id)arg1;
- (void)clearAsynSearchLastQueryText;
- (void)doAsynSearch:(id)arg1;
- (void)delaySearchImp:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (id)getKeysArray;
- (id)getEnterpriseBrandContactsArray;
- (id)getContactsArrayWith:(id)arg1;
- (id)getAllContactsDictionary;
- (id)getAllContacts;
- (id)getFilteredContacts;
- (id)getMatchTipForUsername:(id)arg1;
- (void)multiSelectWithSearchResult:(id)arg1;
- (void)stopLockerTimesup;
- (void)processOnModifyContactTimer;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onInstallPlugin:(long long)arg1;
- (void)onUnInstallPlugin:(long long)arg1;
- (unsigned int)currentTopHitType;
- (unsigned int)topHitTypeForRandomSearchOption:(unsigned long long)arg1;
- (void)onFTSContactSearchFinish:(id)arg1;
- (BOOL)fillSectionResultForOption:(unsigned long long)arg1 arrSectionKey:(id)arg2 dicSectionTitle:(id)arg3 dicSearchResult:(id)arg4;
- (void)FilterSearchResultOfNormalContacts:(id)arg1;
- (id)getRecommendContacts;
- (void)updateRecommendContacts:(id)arg1;
- (BOOL)isRecommendContact:(id)arg1;
- (id)getRecommendGroups;
- (void)updateRecommendGroups:(id)arg1;
- (BOOL)asyncSearchRecommends:(id)arg1;
- (void)finishTask:(id)arg1;
- (unsigned int)genSeq;
- (void)multiLogicSearchRecommendsBy:(id)arg1;
- (void)updateTokenLogic:(id)arg1;
- (void)multiResultKVReport;
- (void)onContactResultUpdated:(id)arg1;
- (void)onRecommendResultUpdated:(id)arg1;
- (void)notifyMultiSearchResult;
- (void)notifyMultiSearchResultSection:(long long)arg1 added:(BOOL)arg2 deleted:(BOOL)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (unsigned int)m_uiNormalContact;
- (BOOL)m_bSort;
- (void)setM_bSort:(BOOL)arg1;
- (BOOL)m_extendChatRoom;
- (void)setM_extendChatRoom:(BOOL)arg1;
- (BOOL)m_hadOpenIMContact;
- (void)setM_hadOpenIMContact:(BOOL)arg1;
- (BOOL)m_bNotSearchTopHit;
- (void)setM_bNotSearchTopHit:(BOOL)arg1;
- (BOOL)m_bNotifySearchWhenSearchAll;
- (void)setM_bNotifySearchWhenSearchAll:(BOOL)arg1;
- (unsigned long long)m_enAsyncSearchOption;
- (void)setM_enAsyncSearchOption:(unsigned long long)arg1;
- (unsigned int)m_eFTSSearchType;
- (void)setM_eFTSSearchType:(unsigned int)arg1;
- (BOOL)bMemberMatch;
- (void)setBMemberMatch:(BOOL)arg1;
- (BOOL)bMemberMatchWithGroups;
- (void)setBMemberMatchWithGroups:(BOOL)arg1;
- (id)tokenPickLogic;
- (void)setTokenPickLogic:(id)arg1;
- (id)myNormalContactArray;
- (void)setMyNormalContactArray:(id)arg1;
- (void).cxx_destruct;
@end

