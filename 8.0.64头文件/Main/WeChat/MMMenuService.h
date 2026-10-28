@interface MMMenuService : MMUserService <MMServiceProtocol>
{
    MMMenuController * _menuController; // +0x8
}
- (id)getMenuController;
- (void)onServiceClearData;
- (id)menuController;
- (void)setMenuController:(id)arg1;
- (void).cxx_destruct;
@end
