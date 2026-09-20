// FUN_003c3fb8 @ 003c3fb8

void FUN_003c3fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong local_68;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar6 = local_28;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  bVar1 = (uVar6 & 1) == 0;
  if (bVar1) {
    local_68 = local_28;
  }
  else {
    local_68 = local_28;
    FUN_003c4310();
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  uVar4 = local_18;
  uVar3 = local_20;
  pcVar2 = DAT_028ca1f8;
  uVar6 = local_30;
  FUN_003c4bfc();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar2)(uVar4,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

