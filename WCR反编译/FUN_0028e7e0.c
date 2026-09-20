// FUN_0028e7e0 @ 0028e7e0

void FUN_0028e7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_90;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined4 local_40;
  undefined8 local_30;
  cfstringStruct *local_28;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  if (local_20 == 0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_90 = &cf_N_1Y_;
    }
    FUN_0028e9e4(local_90);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_40 = 1;
  }
  else {
    FUN_002813d8(&cf_resolved,local_20);
    lVar1 = local_20;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_0028ecc8;
    local_50 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar1;
    FUN_00276c80(1,0,&local_68);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

