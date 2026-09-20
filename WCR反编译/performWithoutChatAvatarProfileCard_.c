// performWithoutChatAvatarProfileCard: @ 01531e5c

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::performWithoutChatAvatarProfileCard_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  long local_60;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  IVar1 = local_18;
  if (local_28 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar1);
    DAT_028e3948 = DAT_028e3948 + 1;
    _objc_sync_exit(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (**(code **)(local_28 + 0x10))();
    IVar1 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar1);
    local_60 = DAT_028e3948 + -1;
    if (local_60 < 1) {
      local_60 = 0;
    }
    DAT_028e3948 = local_60;
    _objc_sync_exit(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

