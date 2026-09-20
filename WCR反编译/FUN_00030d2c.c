// FUN_00030d2c @ 00030d2c

void FUN_00030d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  uint local_40;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028c7ad0)(local_18,local_20,local_28,local_30);
  bVar1 = local_30 != 0;
  if (bVar1) {
    uVar2 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026df718);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    FUN_00035724();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    FUN_000355cc(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_48,0);
  }
  else {
    FUN_0004751c(local_18);
  }
  local_40 = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

