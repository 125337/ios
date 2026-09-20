// importDouTuBackupFromText:intoPack:unresolved: @ 010966f8

/* Function Stack Size: 0x28 bytes */

long_long WCRefineLocalEmoticonStore::importDouTuBackupFromText_intoPack_unresolved_
                    (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  uint local_84;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_18 = 0;
  }
  else {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf__);
    local_84 = 0;
    if ((uVar2 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_84 = (uint)puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    IVar4 = local_20;
    if ((local_84 & 1) == 0) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dataUsingEncoding__026a12e8,4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_importDouTuBackupFromData_intoPa_026ae408,uVar2,local_38,local_40);
      local_18 = IVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_importDouTuBackupAtPath_intoPack_026ae400,local_48,local_38,local_40
                );
      local_18 = IVar4;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

