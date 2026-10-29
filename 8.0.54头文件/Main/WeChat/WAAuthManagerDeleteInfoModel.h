@interface WAAuthManagerDeleteInfoModel : NSObject
{
    BOOL _isFormPlugin; // +0x8
    NSString * _appId; // +0x10
    WxaUseUserInfoItem * _userInfoItem; // +0x18
    WxaUseUserInfoItem_ScopeItem * _scopeItem; // +0x20
}
- (id)initWithAppId:(id)arg1 isFormPlugin:(BOOL)arg2 userInfoItem:(id)arg3 scopeItem:(id)arg4;
- (id)toModUseUserInfoItem;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userInfoItem;
- (void)setUserInfoItem:(id)arg1;
- (id)scopeItem;
- (void)setScopeItem:(id)arg1;
- (BOOL)isFormPlugin;
- (void)setIsFormPlugin:(BOOL)arg1;
- (void).cxx_destruct;
@end

