@interface MMFinderLiveOnlineStateSessionInfo : NSObject
{
    BOOL _isOffline; // +0x8
    BOOL _isRecentReward; // +0x9
    BOOL _isRewardCount; // +0xa
    BOOL _needPinBottom; // +0xb
    unsigned long long _type; // +0x10
    NSMutableArray * _userList; // +0x18
    NSMutableArray * _recentRewardList; // +0x20
    NSMutableArray * _gloryContacts; // +0x28
    NSString * _title; // +0x30
    NSString * _heatTitle; // +0x38
    NSString * _footerTitle; // +0x40
}
- (BOOL)isOffline;
- (void)setIsOffline:(BOOL)arg1;
- (BOOL)isRecentReward;
- (void)setIsRecentReward:(BOOL)arg1;
- (BOOL)isRewardCount;
- (void)setIsRewardCount:(BOOL)arg1;
- (BOOL)needPinBottom;
- (void)setNeedPinBottom:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)userList;
- (void)setUserList:(id)arg1;
- (id)recentRewardList;
- (void)setRecentRewardList:(id)arg1;
- (id)gloryContacts;
- (void)setGloryContacts:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)heatTitle;
- (void)setHeatTitle:(id)arg1;
- (id)footerTitle;
- (void)setFooterTitle:(id)arg1;
- (void).cxx_destruct;
@end
