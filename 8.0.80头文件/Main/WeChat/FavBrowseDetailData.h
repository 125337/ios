@interface FavBrowseDetailData : NSObject
{
    BOOL _bResumeFirstBrowse; // +0x8
    BOOL _bResumeSecondBrowse; // +0x9
    unsigned int _favEntranceScene; // +0xc
    unsigned int _favEntranceIndex; // +0x10
    unsigned int _favId; // +0x14
    unsigned int _favType; // +0x18
    unsigned int _favSource; // +0x1c
    unsigned int _favSourceTime; // +0x20
    unsigned int _needOtherAppOpen; // +0x24
    unsigned int _enterSecondPageTimes; // +0x28
    unsigned int _sendToFriendsTimes; // +0x2c
    unsigned int _shareToWCTimes; // +0x30
    unsigned int _editFav; // +0x34
    unsigned int _editTagTimes; // +0x38
    unsigned int _deleteFav; // +0x3c
    unsigned int _scrollToBottom; // +0x40
    unsigned int _favMainFrameIndex; // +0x44
    unsigned int _netStatus; // +0x48
    unsigned int _ifcache; // +0x4c
    unsigned int _timeIntervalToOpen; // +0x50
    unsigned int _searchTagScene; // +0x54
    unsigned int _generalMsgType; // +0x58
    unsigned int _isSearchResult; // +0x5c
    unsigned int _searchListIndex; // +0x60
    unsigned int _favListIndex; // +0x64
    NSString * _favInfoLength; // +0x68
    NSString * _favSourceInfo; // +0x70
    unsigned long long _favFirstPageBrowseTime; // +0x78
    unsigned long long _favSecondPageBrowseTime; // +0x80
    NSString * _sessionId; // +0x88
    NSString * _searchText; // +0x90
    NSString * _favTag; // +0x98
    long long _enterFirstPageLogTime; // +0xa0
    long long _enterSecondPageLogTime; // +0xa8
}
+ (id)creatDataWithItem:(id)arg1 EntranceScene:(unsigned int)arg2 EntranceIndex:(unsigned int)arg3 SearchText:(id)arg4;
+ (id)creatDataWithItem:(id)arg1 EntranceScene:(unsigned int)arg2 EntranceIndex:(unsigned int)arg3 SearchText:(id)arg4 TimeIntervalToOpen:(unsigned int)arg5 SearchTagScene:(unsigned int)arg6;
+ (id)creatDataWithItem:(id)arg1 EntranceScene:(unsigned int)arg2 EntranceIndex:(unsigned int)arg3 SearchText:(id)arg4 TimeIntervalToOpen:(unsigned int)arg5 SearchTagScene:(unsigned int)arg6 IsSearchResult:(unsigned int)arg7 SearchListIndex:(unsigned int)arg8 FavListIndex:(unsigned int)arg9;
- (id)init;
- (void)dealloc;
- (void)configWithFavItem:(id)arg1;
- (void)activateFirstBrowse;
- (void)deactivateFirstBrowse;
- (void)activateSecondBrowse;
- (void)deactivateSecondBrowse;
- (void)willResignActive;
- (void)didBecomeActive;
- (unsigned int)favEntranceScene;
- (void)setFavEntranceScene:(unsigned int)arg1;
- (unsigned int)favEntranceIndex;
- (void)setFavEntranceIndex:(unsigned int)arg1;
- (unsigned int)favId;
- (void)setFavId:(unsigned int)arg1;
- (unsigned int)favType;
- (void)setFavType:(unsigned int)arg1;
- (id)favInfoLength;
- (void)setFavInfoLength:(id)arg1;
- (unsigned int)favSource;
- (void)setFavSource:(unsigned int)arg1;
- (unsigned int)favSourceTime;
- (void)setFavSourceTime:(unsigned int)arg1;
- (id)favSourceInfo;
- (void)setFavSourceInfo:(id)arg1;
- (unsigned long long)favFirstPageBrowseTime;
- (void)setFavFirstPageBrowseTime:(unsigned long long)arg1;
- (unsigned long long)favSecondPageBrowseTime;
- (void)setFavSecondPageBrowseTime:(unsigned long long)arg1;
- (unsigned int)needOtherAppOpen;
- (void)setNeedOtherAppOpen:(unsigned int)arg1;
- (unsigned int)enterSecondPageTimes;
- (void)setEnterSecondPageTimes:(unsigned int)arg1;
- (unsigned int)sendToFriendsTimes;
- (void)setSendToFriendsTimes:(unsigned int)arg1;
- (unsigned int)shareToWCTimes;
- (void)setShareToWCTimes:(unsigned int)arg1;
- (unsigned int)editFav;
- (void)setEditFav:(unsigned int)arg1;
- (unsigned int)editTagTimes;
- (void)setEditTagTimes:(unsigned int)arg1;
- (unsigned int)deleteFav;
- (void)setDeleteFav:(unsigned int)arg1;
- (unsigned int)scrollToBottom;
- (void)setScrollToBottom:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)favMainFrameIndex;
- (void)setFavMainFrameIndex:(unsigned int)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)favTag;
- (void)setFavTag:(id)arg1;
- (long long)enterFirstPageLogTime;
- (void)setEnterFirstPageLogTime:(long long)arg1;
- (long long)enterSecondPageLogTime;
- (void)setEnterSecondPageLogTime:(long long)arg1;
- (unsigned int)netStatus;
- (void)setNetStatus:(unsigned int)arg1;
- (unsigned int)ifcache;
- (void)setIfcache:(unsigned int)arg1;
- (unsigned int)timeIntervalToOpen;
- (void)setTimeIntervalToOpen:(unsigned int)arg1;
- (unsigned int)searchTagScene;
- (void)setSearchTagScene:(unsigned int)arg1;
- (unsigned int)generalMsgType;
- (void)setGeneralMsgType:(unsigned int)arg1;
- (unsigned int)isSearchResult;
- (void)setIsSearchResult:(unsigned int)arg1;
- (unsigned int)searchListIndex;
- (void)setSearchListIndex:(unsigned int)arg1;
- (unsigned int)favListIndex;
- (void)setFavListIndex:(unsigned int)arg1;
- (BOOL)bResumeFirstBrowse;
- (void)setBResumeFirstBrowse:(BOOL)arg1;
- (BOOL)bResumeSecondBrowse;
- (void)setBResumeSecondBrowse:(BOOL)arg1;
- (void).cxx_destruct;
@end
