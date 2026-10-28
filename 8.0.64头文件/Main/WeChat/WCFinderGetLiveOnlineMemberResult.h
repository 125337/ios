@interface WCFinderGetLiveOnlineMemberResult : NSObject
{
    unsigned int _onlineMemberCount; // +0x8
    unsigned int _maxDisplayCount; // +0xc
    unsigned int _continueFlag; // +0x10
    unsigned int _boardMemberCount; // +0x14
    unsigned int _liveOnlineMemberBoardVersion; // +0x18
    NSMutableArray * _onlineUserStateItems; // +0x20
    MMFinderLiveUserStateItem * _myLiveUserStateItem; // +0x28
    NSMutableArray * _recentRewardUserStateItems; // +0x30
    unsigned long long _previewLiveOnlineMemberCount; // +0x38
    unsigned long long _rewardTotalAmountInHeat; // +0x40
    unsigned long long _liveHeatValue; // +0x48
    NSString * _liveHeatValueStr; // +0x50
    NSData * _lastBuffer; // +0x58
    NSString * _adImgUrl; // +0x60
    NSString * _liveParticipateMemberCountStr; // +0x68
    NSString * _liveOnlineCountStr; // +0x70
    NSData * _businessFilterBuffer; // +0x78
    LiveOnlineInfo * _exposedOnlineInfo; // +0x80
    NSString * _anonymousOnlineCountStr; // +0x88
}
- (id)onlineUserStateItems;
- (void)setOnlineUserStateItems:(id)arg1;
- (id)myLiveUserStateItem;
- (void)setMyLiveUserStateItem:(id)arg1;
- (id)recentRewardUserStateItems;
- (void)setRecentRewardUserStateItems:(id)arg1;
- (unsigned int)onlineMemberCount;
- (void)setOnlineMemberCount:(unsigned int)arg1;
- (unsigned int)maxDisplayCount;
- (void)setMaxDisplayCount:(unsigned int)arg1;
- (unsigned long long)previewLiveOnlineMemberCount;
- (void)setPreviewLiveOnlineMemberCount:(unsigned long long)arg1;
- (unsigned long long)rewardTotalAmountInHeat;
- (void)setRewardTotalAmountInHeat:(unsigned long long)arg1;
- (unsigned long long)liveHeatValue;
- (void)setLiveHeatValue:(unsigned long long)arg1;
- (id)liveHeatValueStr;
- (void)setLiveHeatValueStr:(id)arg1;
- (unsigned int)continueFlag;
- (void)setContinueFlag:(unsigned int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)adImgUrl;
- (void)setAdImgUrl:(id)arg1;
- (unsigned int)boardMemberCount;
- (void)setBoardMemberCount:(unsigned int)arg1;
- (id)liveParticipateMemberCountStr;
- (void)setLiveParticipateMemberCountStr:(id)arg1;
- (id)liveOnlineCountStr;
- (void)setLiveOnlineCountStr:(id)arg1;
- (unsigned int)liveOnlineMemberBoardVersion;
- (void)setLiveOnlineMemberBoardVersion:(unsigned int)arg1;
- (id)businessFilterBuffer;
- (void)setBusinessFilterBuffer:(id)arg1;
- (id)exposedOnlineInfo;
- (void)setExposedOnlineInfo:(id)arg1;
- (id)anonymousOnlineCountStr;
- (void)setAnonymousOnlineCountStr:(id)arg1;
- (void).cxx_destruct;
@end
