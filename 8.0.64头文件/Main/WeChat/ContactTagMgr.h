@interface ContactTagMgr : MMUserService <MMServiceProtocol, MMKernelExt, IContactMgrExt, PBMessageObserverDelegate>
{
    BOOL isCompleteLoadCache; // +0x8
    BOOL isManulAuthOK; // +0x9
    NSMutableDictionary * _dicNameToId; // +0x10
    NSMutableDictionary * _dicIdToName; // +0x18
    NSArray * _arrIdOrder; // +0x20
    NSMutableDictionary * _dicIdToOrder; // +0x28
    NSMutableDictionary * _dicOperateCache; // +0x30
    ContactTagCacheMgr * m_CacheMgr; // +0x38
    unsigned int lastTimeGetAllLabelsFromServer; // +0x40
}
+ (id)GetPathOfContactLabelList;
+ (id)GetPathOfContactLabelOrderList;
+ (void)reportContactTagWithReportScene:(unsigned int)arg1 andActionCode:(unsigned int)arg2 andHandlePage:(unsigned int)arg3;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onManulLoginOK;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (id)getContactTagIDListToNameList:(id)arg1;
- (void)BuildCacheDataFromFile;
- (id)GetContactLabelItemsFromFile;
- (void)CleanCurrentTagNameAndIdCache;
- (void)SaveCacheDataToFile;
- (void)SaveCacheIdOrderToFile;
- (void)UpdateCacheData:(unsigned int)arg1 LabelName:(id)arg2;
- (void)ClearCacheDataWithNames:(id)arg1;
- (void)ClearCacheDataWithNamePair:(id)arg1;
- (void)UpdateCacheMgrWithUserNameAndIDList:(id)arg1;
- (void)shouldGetAllLabelsFromServer:(id)arg1;
- (void)updateCacheLabelOrder:(id)arg1;
- (void)updateAllGetAllLabelsToDBWithSetOrigiTagID:(id)arg1 setOrigiTagName:(id)arg2 arrOrigiIdOrder:(id)arg3;
- (void)updateContactTagRelationToDBWithUserName:(id)arg1 nsLabelIDList:(id)arg2;
- (void)updateContactTagRelationToDBWithUserName:(id)arg1 arrContactTagID:(id)arg2;
- (void)recordContactTagRecentlyUsedTagWithUserName:(id)arg1 arrContactTagID:(id)arg2 nsOrigiLabelIDList:(id)arg3;
- (unsigned int)LabelNameToId:(id)arg1;
- (id)IdToLabelName:(unsigned int)arg1;
- (id)arrLabelNameToIdFormatString:(id)arg1;
- (id)arrLabelNameToArrId:(id)arg1;
- (id)arrIdListToFormatString:(id)arg1;
- (id)arrIdListToTagNames:(id)arg1;
- (id)getDicOfUserNameAndTagNames:(id)arg1;
- (void)reportContactTagOperateLogWithFriendUserName:(id)arg1 isClickAll:(BOOL)arg2 currentTagItemList:(id)arg3 originalTagItemList:(id)arg4 currentSelectedTagIdList:(id)arg5 originalSelectedTagIdList:(id)arg6 editViewNewlyCreatedTags:(id)arg7 editViewAddedTags:(id)arg8 tableViewNewlyCreatedTags:(id)arg9 tableViewAddedTags:(id)arg10 stayTime:(unsigned int)arg11 opResult:(BOOL)arg12 remarkEditScene:(unsigned int)arg13 remarkEditType:(unsigned int)arg14 source:(unsigned int)arg15 descWordCount:(unsigned int)arg16 descPicSource:(id)arg17 logpressDeleteDescPicCnt:(unsigned int)arg18 detailpageDeleteDescPicCnt:(unsigned int)arg19 sessionId:(id)arg20;
- (void)reportContactTagOperateLog:(id)arg1 isClickAll:(BOOL)arg2 buttonAddNewLabelCnt:(unsigned int)arg3 searchAddNewLabelCnt:(unsigned int)arg4 selectAddLabelCnt:(unsigned int)arg5 searchAddLabelCnt:(unsigned int)arg6 oriLabelCnt:(unsigned int)arg7 removedLabelCnt:(unsigned int)arg8 addedLabelCnt:(unsigned int)arg9 stayTime:(unsigned int)arg10 totalLabelCnt:(unsigned int)arg11 opResult:(unsigned int)arg12 remarkEditScene:(unsigned int)arg13 remarkEditType:(unsigned int)arg14 source:(unsigned int)arg15 descWordCount:(unsigned int)arg16 descPicSource:(id)arg17 logpressDeleteDescPicCnt:(unsigned int)arg18 detailpageDeleteDescPicCnt:(unsigned int)arg19 sessionId:(id)arg20;
- (void)reportContactTagListPageWithSource:(unsigned int)arg1 action:(unsigned int)arg2;
- (void)reportContactTagListPageWithSource:(unsigned int)arg1 action:(unsigned int)arg2 operateLabelCount:(unsigned int)arg3;
- (void)reportContactTagListPageWithSource:(unsigned int)arg1 action:(unsigned int)arg2 operateLabelCount:(unsigned int)arg3 addMemberCount:(unsigned int)arg4 removeMemberCount:(unsigned int)arg5;
- (id)GetDicOfUserNameToTagNamesWithContacts:(id)arg1;
- (id)arrIDListToNameListInternal:(id)arg1;
- (id)getLabelsForContact:(id)arg1;
- (id)getLabelsNameForContact:(id)arg1;
- (id)getLabelsNameForStrangerWithTagIDList:(id)arg1;
- (id)getContactsForLabel:(id)arg1;
- (id)getDicWithUserNameForAllTag;
- (id)getContactsForTagName:(id)arg1;
- (BOOL)searchLabel:(id)arg1 forContact:(id)arg2;
- (id)searchLabel;
- (BOOL)isAlreadyExistTagName:(id)arg1;
- (id)getAllLabelName;
- (id)getAllLabelID;
- (id)getAllLabelsFromLocal;
- (id)getAllLabelsFromServer;
- (unsigned int)addLabel:(id)arg1;
- (unsigned int)deleteLabel:(id)arg1;
- (unsigned int)setLabelsToContact:(id)arg1;
- (unsigned int)updateLabelName:(id)arg1 newName:(id)arg2;
- (unsigned int)updateLabelOrder:(id)arg1;
- (void)OnGetAllLabels:(id)arg1 Event:(unsigned int)arg2;
- (void)OnAddLabel:(id)arg1 Event:(unsigned int)arg2;
- (void)OnDeleteLabel:(id)arg1 Event:(unsigned int)arg2;
- (void)OnUpdateLabelName:(id)arg1 Event:(unsigned int)arg2;
- (void)OnSetLabels:(id)arg1 Event:(unsigned int)arg2;
- (void)OnUpdateLabelOrder:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
