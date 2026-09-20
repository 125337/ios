// selectDisguiseFriendFromChatList @ 01cbad74

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::selectDisguiseFriendFromChatList(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_e8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [15];
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68 [3];
  undefined *local_50;
  undefined1 auStack_48 [8];
  SEL local_40;
  ID local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = param_2;
  local_38 = param_1;
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_71 = 0;
  local_81 = 0;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_notificationDisguiseIdentityUser_026a6818);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (puVar3 == (undefined *)0x0) {
    local_e8 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_notificationDisguiseIdentityUser_026a6818);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_e8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_70 = puVar3;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_e8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68[0] = local_e8;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_38;
  puVar3 = local_68[0];
  puVar2 = PTR_WCRefineSessionPicker_026ce350;
  local_b0 = PTR___NSConcreteStackBlock_02578660;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = FUN_01cbb0a8;
  local_98 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_90,auStack_48);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_presentFromViewController_title__026af6f0,IVar1,&cf__Ob_YS,puVar3,1,
             &local_b0);
  _objc_destroyWeak(auStack_90);
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_50,0);
  _objc_destroyWeak(auStack_48);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

