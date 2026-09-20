// FUN_0028fd68 @ 0028fd68

void FUN_0028fd68(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_f0;
  ulong local_e8;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined8 *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 *local_98;
  long local_90 [3];
  undefined8 local_78;
  undefined8 *local_70;
  long local_68;
  undefined4 local_5c;
  long local_58;
  ulong local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined **local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  if ((local_50 == 0) || (local_58 == 0)) {
    local_5c = 1;
  }
  else {
    local_68 = 0;
    puVar1 = &local_78;
    local_78 = 0;
    FUN_002912e8();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_68,local_78);
    local_70 = puVar1;
    if ((puVar1 == (undefined8 *)0x0) &&
       (lVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
       lVar2 == 0)) {
      local_5c = 1;
    }
    else {
      lVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_copy_0269d150);
      puVar1 = local_70;
      local_90[0] = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_90[0];
      local_98 = puVar1;
      local_48 = &cf_title;
      local_38 = &cf_S0RJ_Y;
      local_40 = &cf_handler;
      ppuVar3 = &local_d8;
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_002918f8;
      local_c0 = &DAT_02579740;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_98;
      local_b8 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_58;
      local_b0 = puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = lVar2;
      _objc_retainBlock();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = ppuVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(ppuVar3);
      local_e8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      for (local_f0 = 0; uVar5 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0), local_f0 < uVar5;
          local_f0 = local_f0 + 1) {
        uVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_f0);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar6);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar7 & 1) != 0) {
          local_e8 = local_f0;
          break;
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_insertObject_atIndex__0269eac0,local_a0,local_e8);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(local_90,0);
      local_5c = 0;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

