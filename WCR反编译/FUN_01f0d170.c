// FUN_01f0d170 @ 01f0d170

/* WARNING: Type propagation algorithm not settling */

byte FUN_01f0d170(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double local_58 [5];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_20;
    local_30 = uVar3;
    puVar1 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_resolvedColorWithTraitCollection_0269fc58);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_58[4] = 0.0;
    local_58[3] = 0.0;
    local_58[2] = 0.0;
    local_58[1] = 0.0;
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_getRed_green_blue_alpha__026ca660,local_58 + 4,local_58 + 3,
               local_58 + 2,local_58 + 1);
    if ((uVar3 & 1) == 0) {
      local_58[0] = 1.0;
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_getWhite_alpha__026ca668,local_58,local_58 + 1);
      if ((uVar3 & 1) != 0) {
        local_58[2] = local_58[0];
        local_58[3] = local_58[0];
        local_58[4] = local_58[0];
      }
    }
    local_11 = DAT_0233a778 * local_58[3] + local_58[4] * DAT_0233a770 + local_58[2] * DAT_0233a768
               < DAT_02323c78;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

