// FUN_000d6a34 @ 000d6a34

void FUN_000d6a34(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8358)(param_1,param_2,param_3 & 1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c839d);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    FUN_000e799c(local_30);
  }
  FUN_000eb8bc(local_18,0);
  FUN_000ea340(local_18);
  _objc_setAssociatedObject(local_18,&DAT_028c839d,0,1);
  _objc_storeStrong(&local_30,0);
  return;
}

