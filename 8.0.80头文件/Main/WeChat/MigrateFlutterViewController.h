@interface MigrateFlutterViewController : MMFlutterViewController <WCAccountAutoLoginControlLogicExt>
{
    id m_kickOutLogicObj; // +0x70
    SEL m_kickOutSel; // +0x78
    BOOL _isOfflineEmigrate; // +0x80
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)setOfflineEmigrate:(BOOL)arg1;
- (BOOL)getOfflineEmigrate;
- (void)autoLoginLogic:(id)arg1 needInterruptKickOut:(id /* block */)arg2 withReplayKickOutSelector:(SEL)arg3;
- (void)registerKickOutEvent:(id)arg1 AndSelector:(SEL)arg2;
- (void)doLogoutAction;
- (BOOL)isLogout;
- (BOOL)isOfflineEmigrate;
- (void)setIsOfflineEmigrate:(BOOL)arg1;
- (void).cxx_destruct;
@end
