// FUN_0026dee0 @ 0026dee0

void FUN_0026dee0(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9568)(param_1,param_2);
  FUN_0026e0d8();
  if ((param_1 & 1) != 0) {
    uVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c9570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_28 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = false;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar4 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (bVar1) {
      FUN_0027108c(local_18,local_28);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

