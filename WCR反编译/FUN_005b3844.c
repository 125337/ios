// FUN_005b3844 @ 005b3844

void FUN_005b3844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  long local_48;
  undefined1 auStack_40 [8];
  undefined4 local_38;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_28 == 0) ||
     (lVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_38 = 1;
  }
  else {
    _objc_initWeak(auStack_40,local_18);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_48 = lVar3;
    FUN_005d1830(lVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_005d19b8;
    local_58 = &DAT_02578da0;
    _objc_copyWeak();
    local_98 = puVar1;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_005d1a44;
    local_80 = &DAT_0257c158;
    _objc_copyWeak(auStack_78,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd0000000000000,puVar2,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_70,
               &local_98);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_storeStrong(&local_48,0);
    _objc_destroyWeak(auStack_40);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

