@interface AppRefreshTokenErrorHandler : MMObject <MMAppRefreshTokenErrorViewControllerDelegate>
{
    MMUINavigationController * _navigationController; // +0x8
}
- (void)startHandle:(id)arg1;
- (void)clearAllHandle;
- (void)onAppRefreshTokenErrorViewDimiss:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (void).cxx_destruct;
@end

