// FUN_004cef2c @ 004cef2c

void FUN_004cef2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double dStack_70;
  undefined4 local_68;
  undefined *local_58;
  double local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_48 = (undefined *)0x0;
  local_40 = param_1;
  local_38 = param_2;
  local_30 = param_3;
  local_28 = param_4;
  _objc_storeStrong(&local_48,param_6);
  puVar1 = local_48;
  local_50 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  if ((puVar1 == (undefined *)0x0) || (local_50 <= 0.5)) {
    FUN_004d015c(local_48);
    local_68 = 1;
  }
  else {
    uVar3 = local_40;
    uVar4 = local_38;
    uVar5 = local_30;
    dVar6 = local_50;
    FUN_004d041c();
    puVar1 = local_48;
    local_88 = uVar3;
    uStack_80 = uVar4;
    local_78 = uVar5;
    dStack_70 = dVar6;
    _objc_getAssociatedObject(local_48,&DAT_028cac94);
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,uStack_80,local_78,dStack_70,puVar2,PTR_s_initWithFrame__026ca6e8);
      puVar1 = local_90;
      local_90 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setUserInteractionEnabled__026caad8,0);
      _objc_setAssociatedObject(local_48,&DAT_028cac94,local_90,1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,uStack_80,local_78,dStack_70,local_90,PTR_s_setFrame__026ca960);
    puVar1 = local_48;
    FUN_004d0468();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_58;
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 != puVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_removeFromSuperview_026ca800);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addSubview__026ca4c0,local_90);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_insertSubview_belowSubview__0269e078,local_90,local_48);
    _objc_storeStrong(&local_90,0);
    local_68 = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  return;
}

