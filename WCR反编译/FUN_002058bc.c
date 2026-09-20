// FUN_002058bc @ 002058bc

void FUN_002058bc(undefined8 param_1)

{
  uint uVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_00205a68();
  if (((uVar1 & 1) == 0) && (FUN_00205b04(), (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar4 = local_18;
    if (local_18 != 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_18;
        FUN_00205ba0();
        _objc_retainAutoreleasedReturnValue();
        local_30 = uVar4;
        if (uVar4 == 0) {
          local_28 = 1;
        }
        else {
          FUN_002060c0();
          uVar1 = (uint)uVar4;
          FUN_00205b04();
          if ((uVar1 & 1) != 0) {
            FUN_0020696c(local_30);
          }
          local_28 = 0;
        }
        _objc_storeStrong(&local_30,0);
        goto LAB_00205a38;
      }
    }
    local_28 = 1;
  }
LAB_00205a38:
  _objc_storeStrong(&local_18,0);
  return;
}

