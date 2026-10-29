@interface FTSContactSearchTask : NSObject <FTSTopHitDelegate, IFTSContactDataProviderExt>
{
    BOOL m_isCancel; // +0x8
    BOOL m_isRunning; // +0x9
    FTSContactDB * m_contactDB; // +0x10
    NSMutableArray * m_arrSingleContact; // +0x18
    NSMutableArray * m_arrGroupContact; // +0x20
    NSMutableArray * m_arrBrandContact; // +0x28
    NSMutableArray * m_arrBrandServiceContact; // +0x30
    NSMutableArray * m_arrBrandStickerContact; // +0x38
    NSMutableArray * m_allContact; // +0x40
    NSMutableDictionary * m_dicMatchTips; // +0x48
    int m_searchType; // +0x50
    NSString * m_pendingSearchText; // +0x58
    BOOL _hasSearchDone; // +0x60
    BOOL _isMultiKeyMatch; // +0x61
    BOOL _useMixedSearchStrategy; // +0x62
    NSString * _taskKey; // +0x68
    id <FTSContactSearchTaskDelegate> _delegate; // +0x70
    FTSTopHitMgr * _topHitMgr; // +0x78
    NSArray * _extendSearchContacts; // +0x80
    NSString * _newestQueryText; // +0x88
    NSString * _lastQueryText; // +0x90
    NSString * _originalSearchText; // +0x98
    NSString * _pinyinSearchText; // +0xa0
}
- (id)initWithDB:(id)arg1;
- (void)copyResultFromHomeTask:(id)arg1 withSearchType:(int)arg2;
- (void)dealloc;
- (void)asyncSearch:(id)arg1 type:(int)arg2;
- (void)forceSearch;
- (void)asyncSearch:(id)arg1 type:(int)arg2 isForce:(BOOL)arg3;
- (int)getDBQueryType:(int)arg1;
- (id)getMemSearchContactSourceWithType:(int)arg1;
- (void)fillMultiKeywordContent:(id)arg1 toHelpItem:(id)arg2;
- (void)cancelSearch;
- (BOOL)checkMultiKeywordMatchInfo:(id)arg1;
- (void)sortGroupContacts:(id)arg1 dicMatchTip:(id)arg2 dicSessionTime:(id)arg3;
- (void)selectContact:(id)arg1;
- (unsigned int)getTotalCount;
- (id)getAllContacts;
- (id)getSingleContacts;
- (unsigned int)getSingleContactsCount;
- (id)getGroupContacts;
- (unsigned int)getGroupContactsCount;
- (id)getBrandContacts;
- (unsigned int)getBrandContactsCount;
- (id)getBrandServiceContacts;
- (unsigned int)getBrandServiceContactsCount;
- (id)getBrandMergeContacts;
- (unsigned int)getBrandMergeContactsCount;
- (id)getBrandStickerContacts;
- (unsigned int)getBrandStickerContactsCount;
- (id)getAllSearchMatchTip;
- (id)getMatchTipForUserName:(id)arg1;
- (BOOL)hasMatchWechatID;
- (id)getContactDictionary;
- (BOOL)isTopHitContactReady;
- (BOOL)isTopHitContactActive:(id)arg1;
- (void)onContactReload;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topHitMgr;
- (void)setTopHitMgr:(id)arg1;
- (id)extendSearchContacts;
- (void)setExtendSearchContacts:(id)arg1;
- (id)newestQueryText;
- (void)setNewestQueryText:(id)arg1;
- (id)lastQueryText;
- (void)setLastQueryText:(id)arg1;
- (BOOL)hasSearchDone;
- (void)setHasSearchDone:(BOOL)arg1;
- (BOOL)isMultiKeyMatch;
- (void)setIsMultiKeyMatch:(BOOL)arg1;
- (BOOL)useMixedSearchStrategy;
- (void)setUseMixedSearchStrategy:(BOOL)arg1;
- (id)originalSearchText;
- (void)setOriginalSearchText:(id)arg1;
- (id)pinyinSearchText;
- (void)setPinyinSearchText:(id)arg1;
- (void).cxx_destruct;
@end
