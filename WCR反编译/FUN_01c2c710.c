// FUN_01c2c710 @ 01c2c710

void FUN_01c2c710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar2 = local_18;
  local_28 = param_1;
  local_20 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x11941);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_30;
  if ((uVar2 & 1) != 0) {
    uVar4 = local_20;
    FUN_01c2b000(local_28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTitle_forState__026caab8,uVar4,0);
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

