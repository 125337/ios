// FUN_001f9204 @ 001f9204

void FUN_001f9204(undefined8 param_1,byte param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_a8;
  uint local_90;
  ulong local_60;
  ulong local_58;
  bool local_49;
  ulong local_48;
  ulong local_40;
  byte local_31;
  undefined4 local_30;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar4 = local_18;
  local_19 = param_2;
  if (local_18 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar2 = (uint)uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_001f9588();
      if ((uVar2 & 1) == 0) {
        local_30 = 1;
      }
      else {
        FUN_001f95dc();
        local_90 = 1;
        if ((uVar2 & 1) == 0) {
          local_90 = 1;
          FUN_001f9678();
        }
        local_31 = (byte)local_90 & 1;
        local_49 = false;
        bVar1 = (local_90 & 1) == 0;
        if (bVar1) {
          local_a8 = 0;
        }
        else {
          local_a8 = local_18;
          FUN_001f9714(local_18,local_19 & 1);
          _objc_retainAutoreleasedReturnValue();
          local_48 = local_a8;
        }
        local_49 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = local_a8;
        if ((local_49 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_48);
        }
        uVar4 = local_18;
        FUN_001f9c44(local_18,local_40,local_19 & 1);
        if ((uVar4 & 1) == 0) {
          if (local_40 == 0) {
            FUN_001fa5d8(local_18,0);
          }
          else {
            FUN_001fa0cc(local_40);
            uVar4 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_58 = uVar4;
            if (uVar4 == 0) {
              _objc_storeStrong(&local_58,local_18);
            }
            FUN_001fa5d8(local_58,local_40);
            _objc_storeStrong(&local_58,0);
          }
          FUN_001fae88(local_18,local_40);
          uVar4 = local_18;
          FUN_001fb15c(local_18,local_19 & 1);
          _objc_retainAutoreleasedReturnValue();
          local_60 = uVar4;
          FUN_001fb404(uVar4);
          _objc_storeStrong(&local_60,0);
          local_30 = 0;
        }
        else {
          local_30 = 1;
        }
        _objc_storeStrong(&local_40,0);
      }
      goto LAB_001f952c;
    }
  }
  local_30 = 1;
LAB_001f952c:
  _objc_storeStrong(&local_18,0);
  return;
}

