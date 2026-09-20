// FUN_006e1438 @ 006e1438

void FUN_006e1438(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  long lVar3;
  long local_58;
  undefined4 local_50;
  undefined8 *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = param_3;
  if ((local_30 == 0) ||
     (lVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    if (local_40 != (undefined8 *)0x0) {
      _objc_retainAutorelease();
      *local_40 = &cf_nil;
    }
    local_28 = 0;
    local_50 = 1;
  }
  else {
    local_58 = 0;
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,local_38);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_58;
    local_58 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (local_40 != (undefined8 *)0x0) {
      pcVar1 = &cf_ok;
      if (local_58 == 0) {
        pcVar1 = &cf_nil;
      }
      _objc_retainAutorelease();
      *local_40 = pcVar1;
    }
    lVar2 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar2;
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

