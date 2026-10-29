@interface WAAuthManagerSectionViewModel : NSObject
{
    BOOL _isPlugin; // +0x8
    BOOL _isEdit; // +0x9
    NSString * _appId; // +0x10
    WxaUseUserInfoItem * _userInfoItem; // +0x18
    id /* block */ _deleteAction; // +0x20
}
- (id)initWithAppId:(id)arg1 isPlugin:(BOOL)arg2 userInfoItem:(id)arg3 isEdit:(BOOL)arg4;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userInfoItem;
- (void)setUserInfoItem:(id)arg1;
- (BOOL)isPlugin;
- (void)setIsPlugin:(BOOL)arg1;
- (BOOL)isEdit;
- (void)setIsEdit:(BOOL)arg1;
- (id /* block */)deleteAction;
- (void)setDeleteAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

