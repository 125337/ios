// FUN_00775c04 @ 00775c04

cfstringStruct * FUN_00775c04(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_f8;
  cfstringStruct *local_c0;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountTodayFinal_026a7f18);
  pcVar2 = local_30;
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountTodayPlanDate_026a7ed0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_c0 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58[0] = local_c0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (((long)local_40 < 1) ||
     (pcVar1 = local_58[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_isEqualToString__0269ccc8,local_38),
     ((ulong)pcVar1 & 1) == 0)) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountRandomEnabled_026a7f20);
    if (((ulong)pcVar1 & 1) == 0) {
      local_68 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountTarget_026a7f38);
      FUN_00775ae8();
    }
    else {
      local_70 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountRandomMin_026a7f28);
      local_78 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountRandomMax_026a7f30);
      if (((long)local_78 < 1) ||
         (local_f8 = (cfstringStruct *)((long)local_70 - (long)local_78),
         local_f8 != (cfstringStruct *)0x0 && (long)local_78 <= (long)local_70)) {
        local_70 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountInitial_026a7ee0);
        local_78 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountTarget_026a7f38);
        if (((long)local_78 < 1) ||
           (local_f8 = (cfstringStruct *)((long)local_70 - (long)local_78),
           local_f8 != (cfstringStruct *)0x0 && (long)local_78 <= (long)local_70)) {
          local_f8 = local_78;
          if ((long)local_78 < 2) {
            local_f8 = (cfstringStruct *)0x1;
          }
          local_78 = local_f8;
          local_70 = local_f8;
        }
      }
      FUN_00775b44(local_f8,local_70,local_78);
      local_68 = local_70;
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountInitial_026a7ee0);
    if ((long)local_68 < (long)pcVar1) {
      local_68 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stepCountInitial_026a7ee0);
      FUN_00775ae8();
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setStepCountTodayFinal__026a7ed8,local_68);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setStepCountTodayPlanDate__026a7f40,local_38);
    local_28 = local_68;
  }
  else {
    pcVar1 = local_40;
    FUN_00775ae8();
    local_28 = pcVar1;
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

