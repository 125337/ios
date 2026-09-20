// FUN_016baa68 @ 016baa68

void FUN_016baa68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = 0;
  local_20 = param_1;
  uStack_18 = param_2;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___NSValue_026ce1f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,uStack_18,PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGPoint__0269e328)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  _objc_setAssociatedObject(local_28,&DAT_028e3eeb,puVar1,1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

