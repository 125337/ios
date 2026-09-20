// selectOtherOfficialDisguiseIcon @ 01cbbd7c

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::selectOtherOfficialDisguiseIcon(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_d0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [15];
  bool local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  SEL local_40;
  ID local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_40 = param_2;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_notificationDisguiseIdentityUser_026a6818);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_59 = 0;
  local_69 = false;
  if (puVar3 == (undefined *)0x0) {
    local_d0 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    puVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_notificationDisguiseIdentityUser_026a6818);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_d0 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_58 = puVar4;
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_d0;
  }
  local_69 = puVar3 != (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_d0;
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_initWeak(auStack_78,local_38);
  IVar1 = local_38;
  puVar4 = local_48;
  puVar3 = local_50;
  puVar2 = PTR_WCRefineSessionPicker_026ce350;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_01cbc0a8;
  local_90 = &DAT_025887c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = puVar4;
  _objc_copyWeak(auStack_80,auStack_78);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_presentFromViewController_title__026af6f0,IVar1,&cf_b_eVh,puVar3,1,
             &local_a8);
  _objc_destroyWeak(auStack_80);
  _objc_storeStrong(&local_88);
  _objc_destroyWeak(auStack_78);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

