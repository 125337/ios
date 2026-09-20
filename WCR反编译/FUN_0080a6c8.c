// FUN_0080a6c8 @ 0080a6c8

void FUN_0080a6c8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  undefined *local_58;
  byte local_50;
  uint7 uStack_4f;
  undefined4 local_44;
  undefined *local_40;
  uint local_38 [4];
  long local_28;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 6) {
    puVar2 = PTR__OBJC_CLASS___NSScanner_026ce368;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_scanHexInt__0269fa38,local_38);
    dVar3 = (double)NEON_ucvtf((ulong)(byte)local_38[0]);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              ((double)((local_38[0] & 0xff0000) >> 0x10) / 255.0,
               (double)((local_38[0] & 0xff00) >> 8) / 255.0,dVar3 / 255.0,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_44 = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_40,0);
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar1 == 8) {
      puVar2 = PTR__OBJC_CLASS___NSScanner_026ce368;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_scanHexLongLong__026ca838,&local_50);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)((((ulong)uStack_4f & 0xff0000) << 8) >> 0x18) / 255.0,
                 (double)((((ulong)uStack_4f & 0xff00) << 8) >> 0x10) / 255.0,
                 (double)((ulong)uStack_4f & 0xff) / 255.0,(double)local_50 / 255.0,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_44 = 1;
      local_18 = puVar2;
      _objc_storeStrong(&local_58,0);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      local_44 = 1;
      local_18 = puVar2;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

