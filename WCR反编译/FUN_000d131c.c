// FUN_000d131c @ 000d131c

byte FUN_000d131c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint local_a4;
  ulong local_48 [3];
  uint local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_000d194c();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_20;
        local_48[0] = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_a4 = 0;
        if (uVar2 - uVar3 != 0) {
          uVar5 = local_48[0];
          FUN_000d194c(uVar2 - uVar3,local_48[0],local_20);
          local_a4 = (uint)uVar5;
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        bVar1 = (local_a4 & 1) != 0;
        if (bVar1) {
          local_11 = 1;
        }
        local_2c = (uint)bVar1;
        _objc_storeStrong(local_48,0);
        if (local_2c != 0) goto LAB_000d15e4;
      }
      local_11 = 0;
      local_2c = 1;
    }
    else {
      local_11 = 1;
      local_2c = 1;
    }
  }
LAB_000d15e4:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

