// FUN_01cf3cc4 @ 01cf3cc4

void FUN_01cf3cc4(double param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 *local_28;
  long *local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  lVar1 = local_18;
  local_28 = param_4;
  local_20 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_38 == (undefined *)0x0) {
      local_2c = 1;
    }
    else {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,
                 *(undefined8 *)PTR__NSFileModificationDate_02578020);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar2;
      if (local_20 != (long *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_timeIntervalSince1970_0269cfc8);
          *local_20 = (long)(param_1 * 1000.0);
        }
      }
      if (local_28 != (undefined8 *)0x0) {
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,
                   *(undefined8 *)PTR__NSFileSize_02578028);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_28 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

