// FUN_0083ae68 @ 0083ae68

void FUN_0083ae68(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_100;
  undefined *local_f0;
  undefined *local_e0;
  undefined *local_c0;
  undefined *local_b0;
  undefined *local_a0;
  undefined *local_80;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__Sender);
  puVar4 = puVar3;
  FUN_0083a3a8();
  if ((DAT_026f4860 & 1) == 0) {
    FUN_0083b494();
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar4;
  }
  else if (((ulong)puVar3 & 1) == 0) {
    bVar1 = false;
    bVar2 = false;
    if (((ulong)puVar4 & 1) == 0) {
      bVar2 = DAT_028cd018 == (undefined *)0x0;
      if (bVar2) {
        local_100 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemPurpleColor_026cab90);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_100;
      }
      else {
        local_100 = DAT_028cd018;
      }
      local_f0 = local_100;
    }
    else {
      bVar1 = DAT_028cd020 == (undefined *)0x0;
      if (bVar1) {
        local_e0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemPurpleColor_026cab90);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_e0;
      }
      else {
        local_e0 = DAT_028cd020;
      }
      local_f0 = local_e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_f0;
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
  }
  else {
    bVar1 = false;
    bVar2 = false;
    if (((ulong)puVar4 & 1) == 0) {
      bVar2 = DAT_028cd008 == (undefined *)0x0;
      if (bVar2) {
        local_c0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_c0;
      }
      else {
        local_c0 = DAT_028cd008;
      }
      local_b0 = local_c0;
    }
    else {
      bVar1 = DAT_028cd010 == (undefined *)0x0;
      if (bVar1) {
        local_a0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_a0;
      }
      else {
        local_a0 = DAT_028cd010;
      }
      local_b0 = local_a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_b0;
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

