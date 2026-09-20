// FUN_0079f278 @ 0079f278

void FUN_0079f278(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double local_1e0;
  double local_1d0;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  puVar1 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028ccb1b);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    param_2 = *(double *)(PTR__CGRectZero_025782f0 + 8);
    param_1 = *(double *)PTR__CGRectZero_025782f0;
    param_4 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    param_3 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithFrame__026ca6e8);
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setUserInteractionEnabled__026caad8,0);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setOpaque__026ca9f8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTag__026caa80,DAT_02324318);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setAutoresizingMask__026ca878,0);
    _objc_setAssociatedObject(local_28,&DAT_028ccb1b,local_30,1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentSize_026ca5a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  local_1d0 = param_1;
  if (param_1 < param_3) {
    local_1d0 = param_3;
  }
  local_1e0 = param_2;
  if (param_2 < param_4) {
    local_1e0 = param_4;
  }
  uVar5 = 0;
  uVar3 = 0;
  FUN_0079fe18();
  puVar1 = local_30;
  dVar4 = local_1e0;
  dVar6 = local_1d0;
  uVar7 = uVar5;
  uVar8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
  FUN_0079b440(dVar4,dVar6,uVar7,uVar8,uVar3,uVar5,local_1d0,local_1e0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,uVar5,local_1d0,local_1e0,local_30,PTR_s_setFrame__026ca960);
  }
  FUN_0079fe64(local_28,local_30);
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

