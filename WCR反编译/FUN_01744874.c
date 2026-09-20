// FUN_01744874 @ 01744874

undefined8 FUN_01744874(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_24;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_50 = &local_48;
    local_48 = 0;
    local_38 = 0x20000000;
    local_34 = 0x20;
    local_30 = 0;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01744b38;
    local_58 = &DAT_02588798;
    local_40 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_enumerateLinesUsingBlock__026b3db0,&local_70);
    local_18 = local_40[3];
    local_24 = 1;
    __Block_object_dispose(&local_48,8);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

