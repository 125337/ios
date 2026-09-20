// FUN_004d0468 @ 004d0468

/* WARNING: Removing unreachable block (ram,0x004d0790) */

void FUN_004d0468(undefined8 param_1)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  double local_58;
  undefined *local_50;
  undefined4 local_44;
  double local_40 [3];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  dVar1 = DAT_02323cd0;
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    local_40[0] = 0.0;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_getRed_green_blue_alpha__026ca660,0,0,0,local_40);
    if ((((ulong)puVar2 & 1) == 0) &&
       (puVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getWhite_alpha__026ca668,0,local_40),
       local_18 = local_28, ((ulong)puVar2 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_44 = 1;
      goto LAB_004d07e0;
    }
    puVar2 = local_28;
    if (dVar1 < local_40[0]) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_44 = 1;
      goto LAB_004d07e0;
    }
  }
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_50 == (undefined *)0x0) {
LAB_004d0744:
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  else {
    local_58 = 0.0;
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getWhite_alpha__026ca668,0,&local_58);
    if (((((ulong)puVar2 & 1) == 0) &&
        (puVar2 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_getRed_green_blue_alpha__026ca660,0,0,0,&local_58),
        ((ulong)puVar2 & 1) == 0)) || (puVar2 = local_50, local_58 <= dVar1)) goto LAB_004d0744;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
  }
  local_44 = 1;
  _objc_storeStrong(&local_50,0);
LAB_004d07e0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

