// FUN_00405c08 @ 00405c08

void FUN_00405c08(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_1c;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = local_18;
  FUN_0040bb14(local_18,&cf_messageType);
  local_1c = SUB84(puVar1,0);
  uVar2 = (ulong)puVar1 & 0xffffffff;
  FUN_0040bd18();
  if ((uVar2 & 1) == 0) {
    local_30 = 1;
  }
  else {
    puVar1 = local_18;
    FUN_004055cc(local_18,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_18;
    local_38 = puVar1;
    FUN_004055cc(local_18,&cf_patFromUserName);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_18;
    local_40 = puVar3;
    FUN_004055cc(local_18,&cf_patPattedUserName);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_18;
    local_48 = puVar1;
    FUN_004055cc(local_18,&cf_patContentId);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = local_18;
      FUN_00412e78(local_18,&cf_mesSvrID);
      puVar3 = local_18;
      FUN_0040bb14(local_18,&cf_localID);
      if ((long)puVar1 < 1) {
        if ((int)puVar3 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_local__u);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_50;
          local_50 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_svr__lld
                  );
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_50;
        local_50 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
    }
    FUN_00417e60(local_38,local_40,local_48,local_50);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

