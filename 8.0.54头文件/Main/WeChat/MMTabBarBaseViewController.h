@interface MMTabBarBaseViewController : MMUIViewController <MMUIHookViewDelegate, FontSettingUtilDelegate, _TtP4Hero26HeroViewControllerDelegate_>
{
    FontSettingUtil * m_fontSettingUtil; // +0x68
}
- (void)updateViewWhenSelectTab:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)fixTabbarState;
- (void)viewDidLoad;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)willEnterForground;
- (double)getMainTableHeight;
- (double)getMainTableBottomInset;
- (void)tryFixOrientation;
- (id)navigationTitleFont;
- (void)onMainTabBarHiddenChange:(BOOL)arg1;
- (id)getCurrentViewController;
- (void)heroDidEndTransition;
- (void).cxx_destruct;
@end

