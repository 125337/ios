// FUN_0061d3e0 @ 0061d3e0

byte FUN_0061d3e0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_0061b54c();
  local_28 = uVar2;
  for (local_40 = 0; local_40 < local_28; local_40 = local_40 + 1) {
    uVar2 = local_20;
    FUN_0061b690(local_40 - local_28,local_20,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    FUN_0061b7f4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_50 = uVar2;
    FUN_0061c7a8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_50;
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_isEqualToString__0269ccc8,&cf_showAdminViewName);
    if (((((uVar2 & 1) == 0) &&
         (uVar2 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_50,PTR_s_isEqualToString__0269ccc8,&cf_onQRCodeView), (uVar2 & 1) == 0))
        && (uVar2 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf__JTy),
           (uVar2 & 1) == 0)) &&
       (uVar2 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf__N_x),
       (uVar2 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      local_11 = 1;
      bVar1 = true;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    if (bVar1) goto LAB_0061d654;
  }
  local_11 = 0;
LAB_0061d654:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

