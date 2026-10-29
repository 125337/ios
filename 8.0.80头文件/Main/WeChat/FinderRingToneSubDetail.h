@interface FinderRingToneSubDetail : AbstractRingToneSubDetail
{
    unsigned long long _objectId; // +0x30
    NSString * _nonceId; // +0x38
    NSString * _nickName; // +0x40
    unsigned long long _settingCount; // +0x48
    NSString * _finderUserName; // +0x50
    unsigned long long _authProfessionType; // +0x58
    NSString * _authIconURL; // +0x60
    NSString * _authProfessionDesc; // +0x68
    RingToneBGMInfo * _bgmInfo; // +0x70
    NSString * _originalTitle; // +0x78
    unsigned long long _recommendReasonType; // +0x80
    unsigned long long _usedByFriendCount; // +0x88
    unsigned long long _titleType; // +0x90
    NSString * _singer; // +0x98
    WCFinderDataItem * _dataItem; // +0xa0
    NSMutableArray * _friendsUsedInfo; // +0xa8
    NSString * _customReason; // +0xb0
    unsigned long long _cmdID; // +0xb8
    NSString * _singerFinderUserName; // +0xc0
    NSString * _singerBaikeURL; // +0xc8
    NSString * _itemContext; // +0xd0
}
- (id)initFromPb:(id)arg1;
- (id)initFromFinderItem:(id)arg1;
- (id)tid;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (unsigned long long)settingCount;
- (void)setSettingCount:(unsigned long long)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (unsigned long long)authProfessionType;
- (void)setAuthProfessionType:(unsigned long long)arg1;
- (id)authIconURL;
- (void)setAuthIconURL:(id)arg1;
- (id)authProfessionDesc;
- (void)setAuthProfessionDesc:(id)arg1;
- (id)bgmInfo;
- (void)setBgmInfo:(id)arg1;
- (id)originalTitle;
- (void)setOriginalTitle:(id)arg1;
- (unsigned long long)recommendReasonType;
- (void)setRecommendReasonType:(unsigned long long)arg1;
- (unsigned long long)usedByFriendCount;
- (void)setUsedByFriendCount:(unsigned long long)arg1;
- (unsigned long long)titleType;
- (void)setTitleType:(unsigned long long)arg1;
- (id)singer;
- (void)setSinger:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)friendsUsedInfo;
- (void)setFriendsUsedInfo:(id)arg1;
- (id)customReason;
- (void)setCustomReason:(id)arg1;
- (unsigned long long)cmdID;
- (void)setCmdID:(unsigned long long)arg1;
- (id)singerFinderUserName;
- (void)setSingerFinderUserName:(id)arg1;
- (id)singerBaikeURL;
- (void)setSingerBaikeURL:(id)arg1;
- (id)itemContext;
- (void)setItemContext:(id)arg1;
- (void).cxx_destruct;
@end
