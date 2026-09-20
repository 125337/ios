// FUN_006af248 @ 006af248

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006af248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 byte param_13)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_178;
  cfstringStruct *local_160;
  cfstringStruct *local_148;
  bool local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined4 local_94;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_10);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_11);
  local_80 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_80,param_12);
  local_81 = param_13;
  pcVar1 = local_80;
  FUN_006b20e0(local_80,local_68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_90 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,pcVar1)
  ;
  if (((ulong)puVar2 & 1) == 0) {
    if (DAT_028cbf98 != (code *)0x0) {
      (*DAT_028cbf98)(local_28,local_30,local_38,local_40,local_48,local_50,local_58,local_60,
                      local_68,local_70,local_78,local_80,local_81 & 1);
    }
    local_94 = 1;
  }
  else {
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,
               PTR_s_shouldPresentDisguiseNotificatio_026a6800);
    if ((((ulong)puVar2 & 1) == 0) || (DAT_028cbf98 == (code *)0x0)) {
      local_94 = 1;
    }
    else {
      pcVar1 = (cfstringStruct *)PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_notificationDisguiseResolvedTitl_026a6808);
      _objc_retainAutoreleasedReturnValue();
      local_148 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_148 = &cf__OR;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = local_148;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_notificationDisguiseBody_026a6810);
      _objc_retainAutoreleasedReturnValue();
      local_160 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_160 = &cf__Og;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_160;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_notificationDisguiseIdentityUser_026a6818);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_178 = local_80;
      }
      else {
        local_178 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_notificationDisguiseIdentityUser_026a6818);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = local_178;
      }
      local_c1 = pcVar3 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = local_178;
      if (local_c1) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*DAT_028cbf98)(local_28,local_30,local_38,local_40,local_a8,local_b0,0,local_60,local_68,
                      local_70,local_78,local_b8,1);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      local_94 = 0;
    }
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

