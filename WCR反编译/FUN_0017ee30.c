// FUN_0017ee30 @ 0017ee30

void FUN_0017ee30(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  undefined *local_48;
  uint local_3c [5];
  long local_28;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_0017e524();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 6) {
    local_3c[0] = 0;
    puVar2 = PTR__OBJC_CLASS___NSScanner_026ce368;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_scanHexInt__0269fa38,local_3c);
    if (((ulong)puVar2 & 1) == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      dVar3 = (double)NEON_ucvtf((ulong)(byte)local_3c[0]);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)(local_3c[0] >> 0x10 & 0xff) / 255.0,
                 (double)(local_3c[0] >> 8 & 0xff) / 255.0,dVar3 / 255.0,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar2;
    }
    local_3c[1] = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_18 = (undefined *)0x0;
    local_3c[1] = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

