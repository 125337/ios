// FUN_004eb128 @ 004eb128

void FUN_004eb128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  local_28 = param_3;
  local_20 = param_2;
  _objc_alloc();
  puVar2 = puVar1;
  FUN_004eb438();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_initWithTarget_action__026ca718,puVar2,local_20);
  local_30 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setNumberOfTapsRequired__026ca9e0,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setNumberOfTouchesRequired__0269cbc8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDelaysTouchesBegan__026a1af0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDelaysTouchesEnded__026a1af8,0);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCancelsTouchesInView__026ca8b8,1);
  FUN_004eb4ac();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDelegate__026ca910);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,&DAT_028cadf2,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

