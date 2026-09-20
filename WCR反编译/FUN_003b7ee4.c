// FUN_003b7ee4 @ 003b7ee4

void FUN_003b7ee4(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  undefined8 local_40;
  ulong local_38;
  cfstringStruct *local_30;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar3 = local_20;
  FUN_003b90d0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &cf___;
  uVar3 = local_28;
  FUN_003612b8(local_28,&cf_m_nsRemark);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar3 & 1) != 0) {
    _objc_storeStrong(&local_30,local_38);
  }
  uVar3 = local_20;
  pcVar1 = local_30;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_003bafb0;
  local_50 = &DAT_0257cbd8;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_18;
  local_48 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar2;
  FUN_003aa428(&cf_O9eYl,0,pcVar1,0x40,&local_68);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

