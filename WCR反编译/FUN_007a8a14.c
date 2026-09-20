// FUN_007a8a14 @ 007a8a14

void FUN_007a8a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_20;
  undefined8 local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_18 = param_1;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = local_18;
  FUN_0079fe18();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,param_1,uVar5,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_20 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

