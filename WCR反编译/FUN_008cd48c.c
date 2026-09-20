// FUN_008cd48c @ 008cd48c

void FUN_008cd48c(ulong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ulong local_38;
  undefined1 local_29;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028ce268)(param_1,param_2);
  uVar4 = local_18;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_29 = 0;
  bVar2 = false;
  uVar1 = (uVar4 & 1) != 0;
  if ((bool)uVar1) {
    uVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar4 != 0;
    local_29 = uVar1;
    local_28 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar1 = local_29;
  }
  local_29 = uVar1;
  if (bVar2) {
    FUN_008d1600(local_18);
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_008d6da0;
    local_40 = &DAT_025797b0;
    local_38 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_performWithoutAnimation__0269e7e0,&local_58);
  }
  return;
}

