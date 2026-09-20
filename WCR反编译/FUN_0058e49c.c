// FUN_0058e49c @ 0058e49c

void FUN_0058e49c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint local_c4;
  cfstringStruct *local_60 [2];
  cfstringStruct *local_50;
  undefined4 local_48;
  long local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_30 == (cfstringStruct *)0x0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = &cf___;
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0057a910();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_50;
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar4 = local_50;
    FUN_0058f000();
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
    local_c4 = 1;
    if (pcVar4 != (cfstringStruct *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c4 = (uint)puVar6 ^ 1;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    pcVar4 = local_60[0];
    if ((local_c4 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar4;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
    }
    local_48 = 1;
    _objc_storeStrong(local_60);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

