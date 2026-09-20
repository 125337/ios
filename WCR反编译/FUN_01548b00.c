// FUN_01548b00 @ 01548b00

void FUN_01548b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_50 = (undefined *)0x0;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  _objc_storeStrong(&local_50,param_6);
  puVar1 = local_50;
  local_58 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_28 = (undefined *)0x0;
    local_5c = 1;
  }
  else {
    puVar1 = local_50;
    FUN_01580250(local_58,local_48,local_40,local_38,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_69 = (byte)puVar2;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      uVar4 = local_40;
      uVar5 = local_38;
      uVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_48);
      local_78 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02332e60);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setUserInteractionEnabled__026caad8,0);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setClipsToBounds__026ca8c8,1);
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setAlpha__026ca860);
      _objc_setAssociatedObject(local_78,DAT_028c5f70,local_50,3);
      puVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
      FUN_01580440(puVar1,local_78,local_69 & 1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_80 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        local_28 = (undefined *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,uVar4,uVar5,uVar6,local_80,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_80);
        puVar1 = local_78;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar1;
      }
      local_5c = 1;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_5c = 1;
      local_28 = puVar1;
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

