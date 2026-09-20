// FUN_00fbcc2c @ 00fbcc2c

void FUN_00fbcc2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined4 local_4c;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38);
  lVar1 = local_30;
  FUN_00fbc9a4();
  lVar2 = local_30;
  local_48 = lVar1;
  local_40 = param_2;
  if (lVar1 == 0x7fffffffffffffff) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar2;
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringWithRange__0269d138,lVar1,param_2)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar2;
    FUN_00fcb09c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    FUN_00fcbb68();
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_38;
    local_68 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar4;
    local_78 = local_68;
    local_80 = uVar4;
    FUN_00fcbdb8(local_38,local_60,&local_78,&local_80);
    _objc_storeStrong(&local_68,local_78);
    uVar4 = local_80;
    _objc_storeStrong(&local_70);
    lVar2 = local_30;
    lVar1 = local_68;
    FUN_00fcb9a8();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_30;
    FUN_00fbc9a4();
    pcVar5 = &cf_displayname;
    FUN_00fcc264(lVar2,&cf_displayname,lVar1,lVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    local_88 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar2 = local_88;
    uVar4 = local_70;
    FUN_00fcb9a8();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_88;
    FUN_00fbc9a4();
    FUN_00fcc264(lVar2,&cf_content,uVar4,lVar1,pcVar5);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_4c = 1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

