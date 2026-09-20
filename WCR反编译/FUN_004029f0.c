// FUN_004029f0 @ 004029f0

void FUN_004029f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_a8;
  undefined8 local_60;
  byte local_51;
  ulong local_50;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  local_51 = 0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_51 = 1;
    local_50 = local_a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a8;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (DAT_028ca6a0 != (code *)0x0) {
    (*DAT_028ca6a0)(local_18,local_20,local_28,local_30);
  }
  uVar3 = local_30;
  FUN_00423668(local_30,local_38,&cf_AsyncOnAddMsg);
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar3;
  FUN_00423800(local_30);
  FUN_00423ba4(local_60);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

