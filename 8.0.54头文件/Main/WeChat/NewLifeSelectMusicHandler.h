@interface NewLifeSelectMusicHandler : NewLifeActionHandler <MMBGMSelectHalfScreenViewControllerDelegate>
- (void)handleRequest:(id)arg1;
- (void)showSelectMusicView:(id)arg1 selectMusicVc:(id)arg2;
- (id)imageSelectViewController;
- (void)bgmSelectedViewControllerDidClose:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)bgmSelectedViewController:(id)arg1 didClickMusicOnBtn:(BOOL)arg2;
@end

