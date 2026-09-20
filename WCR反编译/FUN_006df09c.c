// FUN_006df09c @ 006df09c

void FUN_006df09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_80;
  ulong local_50;
  ulong local_48 [3];
  undefined1 local_29;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_29 = (undefined1)uVar3;
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_80 = 0;
  }
  else {
    local_80 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_80;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*DAT_028cc2e8)(local_18,local_20,local_28);
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

