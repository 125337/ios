// importDouTuBackupFromData:intoPack:unresolved: @ 0109648c

/* Function Stack Size: 0x28 bytes */

long_long WCRefineLocalEmoticonStore::importDouTuBackupFromData_intoPack_unresolved_
                    (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  ulong local_a0;
  cfstringStruct *local_88;
  ulong local_68;
  ulong local_60;
  undefined4 local_54;
  ulong local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_88 = &cf___ungrouped__;
  }
  else {
    local_88 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_88;
  uVar3 = local_30;
  FUN_01090c8c(local_30,1);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
  uVar5 = local_50;
  if (uVar3 == 0) {
    local_18 = 0;
    local_54 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = (uVar5 & 1) == 0;
    if (bVar1) {
      local_a0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_mutableCopy_0269d8a0);
      local_68 = local_a0;
    }
    else {
      local_a0 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_a0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    FUN_0109165c(local_60);
    IVar6 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_importDouTuRecords_intoPack_unre_026ae3f0,local_60,local_48,local_40);
    local_54 = 1;
    local_18 = IVar6;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

