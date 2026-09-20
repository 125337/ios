// FUN_00519cc8 @ 00519cc8

void FUN_00519cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *local_c8;
  undefined **local_78;
  bool local_69;
  undefined *local_68;
  undefined *local_60 [3];
  ulong local_48;
  uint local_3c;
  long local_38;
  ulong local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if ((local_28 == 0) || (local_30 == 0)) {
    local_3c = 1;
    goto LAB_00519ffc;
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,
             PTR_s_fetchGroupItemsFromSvr_originalD_026a48a0);
  if ((uVar2 & 1) == 0) {
    local_3c = 1;
    goto LAB_00519ffc;
  }
  uVar2 = local_30;
  FUN_0051a180();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
LAB_00519ec0:
    local_69 = false;
    bVar1 = local_38 == 0;
    if (bVar1) {
      local_c8 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_20 = local_38;
      local_c8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_c8;
    }
    local_69 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60[0] = local_c8;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    ppuVar5 = &PTR___NSConcreteGlobalBlock_0257da28;
    _objc_retainBlock();
    local_78 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_fetchGroupItemsFromSvr_originalD_026a48a0,local_30,local_60[0],0,
               ppuVar5);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(local_60,0);
    local_3c = 0;
  }
  else {
    FUN_0051a520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_sync_enter();
    FUN_0051a520();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      FUN_0051a520();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_3c = (uint)!bVar1;
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_3c == 0) goto LAB_00519ec0;
  }
  _objc_storeStrong(&local_48,0);
LAB_00519ffc:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

