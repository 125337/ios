@interface LiveOnlineInfo_OnlineTopRewarderInfoFacede : NSObject
{
    BOOL _hiddenAvatar; // +0x8
    BOOL _isMysterious; // +0x9
    LiveOnlineInfo_OnlineTopRewarderInfo * _onlineTopRewarderInfo; // +0x10
}
- (id)onlineTopRewarderInfo;
- (void)setOnlineTopRewarderInfo:(id)arg1;
- (BOOL)hiddenAvatar;
- (void)setHiddenAvatar:(BOOL)arg1;
- (BOOL)isMysterious;
- (void)setIsMysterious:(BOOL)arg1;
- (void).cxx_destruct;
@end
