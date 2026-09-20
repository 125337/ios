// FUN_0045447c @ 0045447c

void FUN_0045447c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_118;
  ulong local_110;
  ulong local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_30;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_40 = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    uVar2 = local_30;
    local_48 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
    local_58 = 0x7fffffffffffffff;
    local_60 = 0x7fffffffffffffff;
    local_50 = uVar2;
    for (local_68 = 0; uVar2 = local_68, uVar3 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
        (long)uVar2 < (long)uVar3; local_68 = local_68 + 1) {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00450ff4();
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonPid);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_isEqualToString__0269ccc8,&cf_custom_emoticon_pid);
        if ((uVar2 & 1) != 0) {
          local_60 = local_68;
        }
      }
      else {
        local_58 = local_68;
      }
      _objc_storeStrong(&local_70,0);
    }
    if (((local_58 != 0x7fffffffffffffff) &&
        ((*(code *)PTR__objc_msgSend_02578628)
                   (local_50,PTR_s_removeObjectAtIndex__0269d530,local_58),
        local_60 != 0x7fffffffffffffff)) && ((long)local_58 < (long)local_60)) {
      local_60 = local_60 - 1;
    }
    puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_injectsOfficialBoardTab_026a3c90);
    uVar2 = local_50;
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar2;
      local_40 = 1;
    }
    else {
      FUN_00454ac4();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_78 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar2;
      }
      else {
        if (local_60 == 0x7fffffffffffffff) {
          local_118 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        }
        else {
          puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_entrySide_026a3ca0);
          if (puVar1 == (undefined *)0x0) {
            local_110 = local_60;
          }
          else {
            local_110 = local_60 + 1;
          }
          local_118 = local_110;
        }
        local_80 = local_118;
        if ((long)local_118 < 0) {
          local_80 = 0;
        }
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        if ((long)uVar2 < (long)local_80) {
          local_80 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_insertObject_atIndex__0269eac0,local_78,local_80);
        DAT_026e0378 = local_80;
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        uVar2 = local_50;
        DAT_028caae8 = uVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar2;
      }
      local_40 = 1;
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

