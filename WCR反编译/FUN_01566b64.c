// FUN_01566b64 @ 01566b64

byte FUN_01566b64(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  ulong local_d8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined8 local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined4 local_70;
  byte local_69;
  ulong local_68;
  ulong local_60;
  undefined *local_58;
  ulong *local_50;
  ulong local_48;
  undefined8 local_40;
  byte local_31;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  local_30 = &cf_AddContactToChatRoomViewController;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_48;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_visibleViewController_0269d460);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  local_d8 = uVar3;
  if (uVar3 == 0) {
    local_d8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_d8;
  }
  local_69 = uVar3 == 0;
  FUN_015671ac(local_d8,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_60 = local_d8;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)();
  if (local_60 == 0) {
    uVar4 = local_48;
    FUN_015671ac(local_48,local_58);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_60;
    local_60 = uVar4;
    (*(code *)PTR__objc_release_02578630)();
  }
  if (local_60 == 0) {
    FUN_01565438();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_015671ac();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_60;
    local_60 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)();
  }
  if (local_60 == 0) {
    FUN_015611fc();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_015671ac();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_60;
    local_60 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  if (local_60 == 0) {
    local_31 = 0;
    local_70 = 1;
  }
  else {
    pcVar6 = &cf_openContactInfo_;
    _NSSelectorFromString();
    uVar3 = local_60;
    local_78 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar6);
    if ((uVar3 & 1) == 0) {
      local_31 = 0;
      local_70 = 1;
    }
    else {
      FUN_01563e1c(local_60,&cf_m_contact,local_40);
      FUN_01563e1c(local_60,&cf_m_chatContact,local_40);
      uVar3 = local_60;
      if (local_50 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_50 = uVar3;
      }
      uVar3 = local_60;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_01567768;
      local_98 = &DAT_0257a740;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_40;
      local_90 = uVar3;
      local_80 = local_78;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = uVar1;
      FUN_015665f0(&local_b0);
      local_31 = 1;
      local_70 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_90,0);
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_31 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

