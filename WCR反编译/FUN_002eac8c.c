// FUN_002eac8c @ 002eac8c

void FUN_002eac8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  cfstringStruct *local_108;
  cfstringStruct *local_e0;
  cfstringStruct *local_a0;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  long local_60;
  int local_58;
  cfstringStruct *local_48;
  long local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_2);
  local_28 = &DAT_028c9998;
  local_30 = 0;
  _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0257bc48);
  if (*local_28 + 1 != 0) {
    _dispatch_once(*local_28 + 1,local_28,local_30);
  }
  _objc_storeStrong(&local_30,0);
  uVar1 = DAT_028c9990;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar1);
  uVar5 = 0;
  if (DAT_028c9980 != (cfstringStruct *)0x0) {
    if (local_48 == (cfstringStruct *)0x0) {
      local_a0 = &cf___;
    }
    else {
      local_a0 = local_48;
    }
    pcVar2 = DAT_028c9980;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9980,PTR_s_isEqualToString__0269ccc8,local_a0);
    uVar5 = (ulong)pcVar2 & 0xffffffff;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = DAT_028c9988;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9988,PTR_s_length_0269cca0);
      pcVar2 = DAT_028c9988;
      uVar5 = 0;
      if (pcVar3 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = pcVar2;
        uVar5 = 1;
        local_58 = 1;
        goto LAB_002eae48;
      }
    }
  }
  local_58 = 0;
LAB_002eae48:
  _objc_sync_exit(uVar5,uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_58 == 0) {
    lVar4 = local_40;
    FUN_002eb1f4();
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = &cf___;
      local_58 = 1;
    }
    else {
      if (local_48 == (cfstringStruct *)0x0) {
        local_e0 = &cf___;
      }
      else {
        local_e0 = local_48;
      }
      FUN_002eb4ec();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_68 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &
                 cf__function___try_window___WCRFontDataVersion______window___WCRFontDataURL______if_window___WCRFontApply_window___WCRFontApply____catch_e________
                );
      _objc_retainAutoreleasedReturnValue();
      uVar1 = DAT_028c9990;
      local_70 = pcVar2;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(uVar1);
      if (local_48 == (cfstringStruct *)0x0) {
        local_108 = &cf___;
      }
      else {
        local_108 = local_48;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_copy_0269d150);
      pcVar2 = DAT_028c9980;
      DAT_028c9980 = local_108;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
      pcVar2 = DAT_028c9988;
      DAT_028c9988 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_sync_exit(uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      pcVar2 = local_70;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = pcVar2;
      local_58 = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

