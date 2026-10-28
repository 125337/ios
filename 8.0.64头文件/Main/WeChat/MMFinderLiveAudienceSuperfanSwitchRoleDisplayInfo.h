@interface MMFinderLiveAudienceSuperfanSwitchRoleDisplayInfo : NSObject
{
    BOOL _isCurrentRole; // +0x8
    NSString * _nick; // +0x10
    long long _aliasType; // +0x18
    NSString * _headUrl; // +0x20
    FinderLiveBadgeInfo * _superfanBadge; // +0x28
}
+ (id)infoWithNick:(id)arg1 headUrl:(id)arg2 aliasType:(long long)arg3 isCurrentRole:(BOOL)arg4 superfanBadge:(id)arg5;
- (id)getAliasDesc;
- (id)nick;
- (void)setNick:(id)arg1;
- (long long)aliasType;
- (void)setAliasType:(long long)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (BOOL)isCurrentRole;
- (void)setIsCurrentRole:(BOOL)arg1;
- (id)superfanBadge;
- (void)setSuperfanBadge:(id)arg1;
- (void).cxx_destruct;
@end
