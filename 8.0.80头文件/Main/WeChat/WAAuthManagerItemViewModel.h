@interface WAAuthManagerItemViewModel : NSObject
{
    BOOL _isEdit; // +0x8
    WxaUseUserInfoItem_ScopeItem * _scopeItem; // +0x10
    id /* block */ _deleteAction; // +0x18
    id /* block */ _reloadUIAction; // +0x20
}
- (id)initWithScopeItem:(id)arg1 isEdit:(BOOL)arg2;
- (id)scopeItem;
- (void)setScopeItem:(id)arg1;
- (BOOL)isEdit;
- (void)setIsEdit:(BOOL)arg1;
- (id /* block */)deleteAction;
- (void)setDeleteAction:(id /* block */)arg1;
- (id /* block */)reloadUIAction;
- (void)setReloadUIAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
