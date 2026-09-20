// FUN_0081d4f0 @ 0081d4f0

/* WARNING: Removing unreachable block (ram,0x0081d7c0) */
/* WARNING: Removing unreachable block (ram,0x0081d7f0) */
/* WARNING: Removing unreachable block (ram,0x0081d7e0) */
/* WARNING: Removing unreachable block (ram,0x0081d840) */
/* WARNING: Removing unreachable block (ram,0x0081d864) */
/* WARNING: Removing unreachable block (ram,0x0081d87c) */

void FUN_0081d4f0(undefined8 param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *local_e0;
  undefined *local_c0;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80 [3];
  byte local_61;
  undefined *local_60;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  undefined1 *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if ((DAT_026f4838 & 1) == 0) {
    FUN_0081e514();
    puVar3 = local_30;
    FUN_0081e578();
    _objc_retainAutoreleasedReturnValue();
    local_80[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    if (puVar3 == (undefined *)0x0) {
      FUN_0081e680(0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = 1;
      local_28 = puVar3;
    }
    else {
      puVar3 = DAT_028cd000;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cd000,PTR_s_objectForKeyedSubscript__0269d098,local_80[0]);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        FUN_0081e680();
        _objc_retainAutoreleasedReturnValue();
        local_90 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cd000,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_80[0]);
        puVar3 = local_90;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar3;
        local_58 = 1;
        _objc_storeStrong(&local_90,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = 1;
        local_28 = puVar3;
      }
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(local_80,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInterfaceStyle_026cabc8);
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_51 = 0;
      bVar1 = DAT_028ccfe0 == (undefined *)0x0;
      if (bVar1) {
        local_c0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemPurpleColor_026cab90);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_c0;
      }
      else {
        local_c0 = DAT_028ccfe0;
      }
      local_51 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_c0;
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
    }
    else {
      local_61 = 0;
      bVar1 = DAT_028ccfd8 == (undefined *)0x0;
      if (bVar1) {
        local_e0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_e0;
      }
      else {
        local_e0 = DAT_028ccfd8;
      }
      local_61 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_e0;
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
    }
    local_58 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

