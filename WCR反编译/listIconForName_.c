// listIconForName: @ 01fbb3d8

/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeManagerViewController::listIconForName_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_38 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_3c = 1;
  }
  else {
    uVar4 = 0x403c000000000000;
    uVar3 = 0x403c000000000000;
    FUN_01fb648c();
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_026ce650;
    local_50 = uVar3;
    uStack_48 = uVar4;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,uStack_48);
    puVar1 = local_38;
    local_90 = PTR___NSConcreteGlobalBlock_02578658;
    local_88 = 0xd0800000;
    local_84 = 0;
    local_80 = FUN_01fbb5b0;
    local_78 = &DAT_025880d0;
    uStack_60 = uStack_48;
    local_68 = local_50;
    local_58 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_imageWithActions__026ca688,&local_90);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
    _objc_storeStrong(&local_70);
    local_3c = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

