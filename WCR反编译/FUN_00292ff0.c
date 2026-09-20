// FUN_00292ff0 @ 00292ff0

void FUN_00292ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  uint local_ac;
  cfstringStruct *local_a0;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  byte local_49;
  undefined *local_48;
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
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_a0 = &cf_cS1Y_;
    }
    FUN_0028e9e4(local_a0);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_40 = 1;
  }
  else {
    local_49 = 0;
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    local_ac = 1;
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_ac = (uint)puVar3 ^ 1;
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    lVar2 = local_20;
    if ((local_ac & 1) == 0) {
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_0029331c;
      local_60 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = lVar2;
      FUN_00276c80(1,0,&local_78);
      _objc_storeStrong(&local_58,0);
      local_40 = 0;
    }
    else {
      FUN_0028e9e4(&cf_eNeHe);
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

