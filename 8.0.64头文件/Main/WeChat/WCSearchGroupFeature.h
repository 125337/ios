@interface WCSearchGroupFeature : NSObject
{
    unsigned int _groupLastActiveTime; // +0x8
    unsigned int _groupMySelfLastActiveTime; // +0xc
    unsigned int _groupMemberCount; // +0x10
    unsigned int _groupUnReadMsgCount; // +0x14
    unsigned int _groupFriendsCount; // +0x18
    unsigned int _myRecentMsgCount; // +0x1c
    unsigned int _isMute; // +0x20
    unsigned int _myRecentSearchDays30; // +0x24
    unsigned int _myRecentSearchDays14; // +0x28
    unsigned int _myRecentSearchDays7; // +0x2c
    unsigned int _myRecentSearchCount30; // +0x30
    unsigned int _myRecentSearchCount14; // +0x34
    unsigned int _myRecentSearchCount7; // +0x38
    unsigned int _myLastSearchTime; // +0x3c
    unsigned int _isSysLangAsEn; // +0x40
    unsigned int _isSysLangAsCh; // +0x44
    unsigned int _matchType; // +0x48
}
- (unsigned int)groupLastActiveTime;
- (unsigned int)groupMySelfLastActiveTime;
- (unsigned int)myLastSearchTime;
- (void)setGroupLastActiveTime:(unsigned int)arg1;
- (void)setGroupMySelfLastActiveTime:(unsigned int)arg1;
- (unsigned int)groupMemberCount;
- (void)setGroupMemberCount:(unsigned int)arg1;
- (unsigned int)groupUnReadMsgCount;
- (void)setGroupUnReadMsgCount:(unsigned int)arg1;
- (unsigned int)groupFriendsCount;
- (void)setGroupFriendsCount:(unsigned int)arg1;
- (unsigned int)myRecentMsgCount;
- (void)setMyRecentMsgCount:(unsigned int)arg1;
- (unsigned int)isMute;
- (void)setIsMute:(unsigned int)arg1;
- (unsigned int)myRecentSearchDays30;
- (void)setMyRecentSearchDays30:(unsigned int)arg1;
- (unsigned int)myRecentSearchDays14;
- (void)setMyRecentSearchDays14:(unsigned int)arg1;
- (unsigned int)myRecentSearchDays7;
- (void)setMyRecentSearchDays7:(unsigned int)arg1;
- (unsigned int)myRecentSearchCount30;
- (void)setMyRecentSearchCount30:(unsigned int)arg1;
- (unsigned int)myRecentSearchCount14;
- (void)setMyRecentSearchCount14:(unsigned int)arg1;
- (unsigned int)myRecentSearchCount7;
- (void)setMyRecentSearchCount7:(unsigned int)arg1;
- (void)setMyLastSearchTime:(unsigned int)arg1;
- (unsigned int)isSysLangAsEn;
- (void)setIsSysLangAsEn:(unsigned int)arg1;
- (unsigned int)isSysLangAsCh;
- (void)setIsSysLangAsCh:(unsigned int)arg1;
- (unsigned int)matchType;
- (void)setMatchType:(unsigned int)arg1;
@end
