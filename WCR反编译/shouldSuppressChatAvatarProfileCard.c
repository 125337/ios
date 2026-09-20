// shouldSuppressChatAvatarProfileCard @ 01531f98

/* Function Stack Size: 0x10 bytes */

bool WCRefineTopBarProfileCardPresenter::shouldSuppressChatAvatarProfileCard(ID param_1,SEL param_2)

{
  bool bVar1;
  
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  bVar1 = 0 < DAT_028e3948;
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (uint)bVar1;
}

