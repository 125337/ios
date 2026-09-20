// FUN_015c322c @ 015c322c

void FUN_015c322c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_invalidate_026ca758);
  _objc_setAssociatedObject(local_18,&DAT_028e3b2e,0);
  _objc_setAssociatedObject(local_18,&DAT_028e3b2f,0,1);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

