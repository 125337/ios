// FUN_01686414 @ 01686414

void FUN_01686414(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_01686ec0();
  DAT_028e3d2a = 1;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_object_0269ddb0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    _objc_storeWeak(&DAT_028e3d20,local_20);
  }
  DAT_028e3d29 = 0;
  DAT_028e3d28 = 0;
  FUN_01686e24();
  FUN_01685990();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

