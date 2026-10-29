@interface FTSLogItem : NSObject
{
    BOOL _isSilentGroup; // +0x8
    unsigned int _guideStyle; // +0xc
    unsigned int _queryMatchType; // +0x10
    unsigned int _groupMemberMatchLogType; // +0x14
    unsigned int _browseTime; // +0x18
    unsigned int _normalContactCount; // +0x1c
    unsigned int _groupContactCount; // +0x20
    unsigned int _brandContactCount; // +0x24
    unsigned int _messageCount; // +0x28
    unsigned int _featureCount; // +0x2c
    unsigned int _favCount; // +0x30
    unsigned int _gameCount; // +0x34
    unsigned int _addressBookCount; // +0x38
    unsigned int _weAppCount; // +0x3c
    unsigned int _miniGameCount; // +0x40
    unsigned int _sectionPos; // +0x44
    unsigned int _resultCount; // +0x48
    unsigned int _lastActiveTime; // +0x4c
    unsigned int _myLastActiveTime; // +0x50
    unsigned int _memCount; // +0x54
    unsigned int _memFanCount; // +0x58
    unsigned int _unReadCount; // +0x5c
    unsigned int _myRecentMsgCount; // +0x60
    unsigned int _myLastSearchTime; // +0x64
    unsigned int _uiFinderSearchCount; // +0x68
    unsigned int _customerServiceCount; // +0x6c
    unsigned int _customerServiceType; // +0x70
    unsigned int _customerServiceMatchType; // +0x74
    unsigned int _pageType; // +0x78
    unsigned long long _searchScene; // +0x80
    unsigned long long _clickType; // +0x88
    unsigned long long _row; // +0x90
    unsigned long long _clickSubType; // +0x98
    unsigned long long _bussinessRow; // +0xa0
    NSString * _searchId; // +0xa8
    unsigned long long _docId; // +0xb0
    unsigned long long _matchType; // +0xb8
    NSString * _itemName; // +0xc0
    NSString * _query; // +0xc8
    NSDictionary * _voiceInfo; // +0xd0
    NSMutableSet * _exposeSet; // +0xd8
    NSString * _groupId; // +0xe0
    NSString * _matchStr; // +0xe8
    NSString * _myRecentSearchCount; // +0xf0
    NSString * _myRecentSearchDays; // +0xf8
    NSString * _topHitInfo; // +0x100
    double _trainScore; // +0x108
    NSString * _nsDocId; // +0x110
    NSString * _nsWeAppId; // +0x118
    NSString * _nsFinderUserName; // +0x120
    NSString * _nsItemUserName; // +0x128
    NSString * _weshopBuffer; // +0x130
    NSString * _extInfo; // +0x138
    long long _clickMsgId; // +0x140
}
- (id)init;
- (id)initWithParams:(id)arg1;
- (void)parse:(id)arg1;
- (id)formatLogString:(id)arg1;
- (BOOL)hasVoiceInput;
- (id)genVoiceInfo;
- (BOOL)isVoiceResultMod;
- (id)getExposeInfo;
- (BOOL)shouldDiscardByOverseaUser;
- (id)genStatString;
- (id)genStatStringForSubSearch;
- (id)filteredSearchId;
- (unsigned long long)filteredDocId;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (unsigned long long)clickType;
- (void)setClickType:(unsigned long long)arg1;
- (unsigned long long)row;
- (void)setRow:(unsigned long long)arg1;
- (unsigned long long)clickSubType;
- (void)setClickSubType:(unsigned long long)arg1;
- (unsigned long long)bussinessRow;
- (void)setBussinessRow:(unsigned long long)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (unsigned long long)docId;
- (void)setDocId:(unsigned long long)arg1;
- (unsigned long long)matchType;
- (void)setMatchType:(unsigned long long)arg1;
- (unsigned int)guideStyle;
- (void)setGuideStyle:(unsigned int)arg1;
- (unsigned int)queryMatchType;
- (void)setQueryMatchType:(unsigned int)arg1;
- (unsigned int)groupMemberMatchLogType;
- (void)setGroupMemberMatchLogType:(unsigned int)arg1;
- (id)itemName;
- (void)setItemName:(id)arg1;
- (unsigned int)browseTime;
- (void)setBrowseTime:(unsigned int)arg1;
- (unsigned int)normalContactCount;
- (void)setNormalContactCount:(unsigned int)arg1;
- (unsigned int)groupContactCount;
- (void)setGroupContactCount:(unsigned int)arg1;
- (unsigned int)brandContactCount;
- (void)setBrandContactCount:(unsigned int)arg1;
- (unsigned int)messageCount;
- (void)setMessageCount:(unsigned int)arg1;
- (unsigned int)featureCount;
- (void)setFeatureCount:(unsigned int)arg1;
- (unsigned int)favCount;
- (void)setFavCount:(unsigned int)arg1;
- (unsigned int)gameCount;
- (void)setGameCount:(unsigned int)arg1;
- (unsigned int)addressBookCount;
- (void)setAddressBookCount:(unsigned int)arg1;
- (unsigned int)weAppCount;
- (void)setWeAppCount:(unsigned int)arg1;
- (unsigned int)miniGameCount;
- (void)setMiniGameCount:(unsigned int)arg1;
- (unsigned int)sectionPos;
- (void)setSectionPos:(unsigned int)arg1;
- (unsigned int)resultCount;
- (void)setResultCount:(unsigned int)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)voiceInfo;
- (void)setVoiceInfo:(id)arg1;
- (id)exposeSet;
- (void)setExposeSet:(id)arg1;
- (unsigned int)lastActiveTime;
- (void)setLastActiveTime:(unsigned int)arg1;
- (unsigned int)myLastActiveTime;
- (void)setMyLastActiveTime:(unsigned int)arg1;
- (unsigned int)memCount;
- (void)setMemCount:(unsigned int)arg1;
- (unsigned int)memFanCount;
- (void)setMemFanCount:(unsigned int)arg1;
- (BOOL)isSilentGroup;
- (void)setIsSilentGroup:(BOOL)arg1;
- (unsigned int)unReadCount;
- (void)setUnReadCount:(unsigned int)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)matchStr;
- (void)setMatchStr:(id)arg1;
- (unsigned int)myRecentMsgCount;
- (void)setMyRecentMsgCount:(unsigned int)arg1;
- (id)myRecentSearchCount;
- (void)setMyRecentSearchCount:(id)arg1;
- (id)myRecentSearchDays;
- (void)setMyRecentSearchDays:(id)arg1;
- (unsigned int)myLastSearchTime;
- (void)setMyLastSearchTime:(unsigned int)arg1;
- (id)topHitInfo;
- (void)setTopHitInfo:(id)arg1;
- (double)trainScore;
- (void)setTrainScore:(double)arg1;
- (id)nsDocId;
- (void)setNsDocId:(id)arg1;
- (id)nsWeAppId;
- (void)setNsWeAppId:(id)arg1;
- (id)nsFinderUserName;
- (void)setNsFinderUserName:(id)arg1;
- (unsigned int)uiFinderSearchCount;
- (void)setUiFinderSearchCount:(unsigned int)arg1;
- (id)nsItemUserName;
- (void)setNsItemUserName:(id)arg1;
- (unsigned int)customerServiceCount;
- (void)setCustomerServiceCount:(unsigned int)arg1;
- (unsigned int)customerServiceType;
- (void)setCustomerServiceType:(unsigned int)arg1;
- (unsigned int)customerServiceMatchType;
- (void)setCustomerServiceMatchType:(unsigned int)arg1;
- (id)weshopBuffer;
- (void)setWeshopBuffer:(id)arg1;
- (unsigned int)pageType;
- (void)setPageType:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (long long)clickMsgId;
- (void)setClickMsgId:(long long)arg1;
- (void).cxx_destruct;
@end
