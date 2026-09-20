// FUN_00f8322c @ 00f8322c

void FUN_00f8322c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e2e79);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_removeFromSuperview_026ca800);
  }
  _objc_setAssociatedObject(local_18,&DAT_028e2e79);
  _objc_setAssociatedObject(local_18,&DAT_028e2e7a,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028e2e7b,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028e2e7c,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028e2e78,0,1);
  FUN_00f88b54(local_18);
  uVar1 = local_18;
  FUN_00f833a4();
  _objc_retainAutoreleasedReturnValue();
  FUN_00f835c4();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

