// FUN_00087f6c @ 00087f6c

void FUN_00087f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_48,param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uStack_78 = uStack_38;
  local_80 = local_40;
  uStack_68 = uStack_28;
  local_70 = local_30;
  uVar3 = local_40;
  uVar4 = uStack_38;
  uVar5 = local_30;
  uVar6 = uStack_28;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithFrame__026ca6e8);
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323cf8);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserInteractionEnabled__026caad8,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setClipsToBounds__026ca8c8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
  lVar2 = local_48;
  FUN_0008da28(uVar3,uVar4,uVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  local_88 = lVar2;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,lVar2);
    _objc_setAssociatedObject(local_50,DAT_026df738,local_48,3);
  }
  puVar1 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

