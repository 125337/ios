// FUN_003e197c @ 003e197c

void FUN_003e197c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_026ce418;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == puVar1) {
    uVar2 = 5;
    _NSSearchPathForDirectoriesInDomains(5,1,1);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    FUN_003e3274(0x4014000000000000);
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  else {
    puVar1 = local_20;
    (*DAT_028ca3a8)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

