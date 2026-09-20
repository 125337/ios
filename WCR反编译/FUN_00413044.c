// FUN_00413044 @ 00413044

void FUN_00413044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_40;
  long local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  puVar1 = local_30;
  FUN_00413340();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  puVar3 = local_40;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = local_30;
    FUN_004055cc(0,local_30,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58 = puVar1;
    FUN_0040bb14(local_30,&cf_createTime);
    FUN_0040bb14(local_30,&cf_messageType);
    lVar2 = local_38;
    FUN_00413508(local_38,200);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringWithFormat__0269cca8,&cf____fallback__u__u___);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_50 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

