// FUN_005005cc @ 005005cc

byte FUN_005005cc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  long lVar2;
  byte local_74;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined1 *local_38;
  byte local_29;
  long local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR_WCRefineMessageSyncRule_026ce708;
  local_29 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_integerInRule_forKey__026a44f0,local_20,
             _kWCRMessageSyncRuleKeySenderMode);
  local_38 = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_11 = local_29 & 1;
      local_3c = 1;
      goto LAB_00500888;
    }
    if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      puVar1 = PTR_WCRefineMessageSyncRule_026ce708;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_stringArrayInRule_forKey__026a44e8,
                 local_20,_kWCRMessageSyncRuleKeySenderUsers);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        local_11 = 0;
        local_3c = 1;
      }
      else {
        lVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
        if ((lVar2 == 0) ||
           (puVar1 = local_48,
           (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_28),
           ((ulong)puVar1 & 1) == 0)) {
          if ((local_29 & 1) == 0) {
            local_11 = 0;
            local_3c = 1;
          }
          else {
            puVar1 = PTR_WCRefineMessageSyncRule_026ce708;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_currentUserWxid_0269ec70);
            _objc_retainAutoreleasedReturnValue();
            local_50 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
            local_74 = 0;
            if (puVar1 != (undefined *)0x0) {
              puVar1 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_containsObject__0269cbb8,local_50);
              local_74 = (byte)puVar1;
            }
            local_11 = local_74 & 1;
            local_3c = 1;
            _objc_storeStrong(&local_50,0);
          }
        }
        else {
          local_11 = 1;
          local_3c = 1;
        }
      }
      _objc_storeStrong(&local_48,0);
      goto LAB_00500888;
    }
    if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      local_11 = (local_29 ^ 1) & 1;
      local_3c = 1;
      goto LAB_00500888;
    }
  }
  local_11 = 1;
  local_3c = 1;
LAB_00500888:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

