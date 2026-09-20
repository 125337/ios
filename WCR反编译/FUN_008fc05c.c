// FUN_008fc05c @ 008fc05c

void FUN_008fc05c(undefined8 param_1)

{
  qword qVar1;
  qword qVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  dispatch_queue_t pdVar6;
  cfstringStruct *local_180;
  byte local_15c;
  byte local_150;
  cfstringStruct *local_138;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  byte local_c0;
  byte local_bf;
  undefined *local_b8;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  undefined4 local_84;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct local_70;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar3 = local_28;
  FUN_008e5898();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = pcVar3;
  FUN_008fb12c();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_28;
  local_48 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_138 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_138 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_138;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar3 = local_28;
  FUN_008e5e98();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_50;
  local_70.field3_0x18 = (long)pcVar3;
  FUN_008e6684();
  local_150 = 1;
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar3 = local_40[0];
    FUN_008e6734(local_40[0],local_70.field3_0x18);
    local_150 = (byte)pcVar3;
  }
  local_70.field2_0x10._7_1_ = local_150 & 1;
  pcVar3 = local_40[0];
  FUN_008e6390();
  local_15c = 1;
  if ((((ulong)pcVar3 & 1) == 0) && (local_15c = 1, (local_70.field2_0x10._7_1_ & 1) == 0)) {
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_isEqualToString__0269ccc8,&cf_AppMusicMessageCellView);
    local_15c = 1;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_isEqualToString__0269ccc8,&cf_AppMusicMVMessageCellView);
      local_15c = (byte)pcVar3;
    }
  }
  local_70.field2_0x10._6_1_ = local_15c & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70.field1_0x8 = (qword)&cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_70.field0_0x0 = (qword)&cf___;
  local_78 = (cfstringStruct *)local_70.field1_0x8;
  local_80 = &cf___;
  pcVar3 = local_28;
  FUN_008e44a4(local_28,&local_78,&local_80);
  _objc_storeStrong(&local_70.field1_0x8,local_78);
  pcVar4 = &local_70;
  _objc_storeStrong(pcVar4,local_80);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRZSON_ecl);
    local_84 = 1;
  }
  else {
    if ((local_70.field2_0x10._6_1_ & 1) != 0) {
      local_91 = 0;
      local_a1 = 0;
      local_180 = local_40[0];
      if ((local_70.field2_0x10._7_1_ & 1) == 0) {
        FUN_008e9170(local_40[0],local_70.field3_0x18,0);
        _objc_retainAutoreleasedReturnValue();
        local_a1 = 1;
        local_a0 = local_180;
      }
      else {
        FUN_008e7cc8(local_40[0],local_70.field3_0x18,local_28,0);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_180;
      }
      _objc_storeStrong(&local_70,local_180);
      if ((local_a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      pcVar4 = (cfstringStruct *)local_70.field0_0x0;
      (*(code *)PTR__objc_msgSend_02578628)(local_70.field0_0x0,PTR_s_length_0269cca0);
      if ((pcVar4 == (cfstringStruct *)0x0) &&
         (pcVar4 = (cfstringStruct *)local_70.field1_0x8,
         (*(code *)PTR__objc_msgSend_02578628)(local_70.field1_0x8,PTR_s_length_0269cca0),
         pcVar4 == (cfstringStruct *)0x0)) {
        pcVar3 = &cf__T;
        if ((local_70.field2_0x10._7_1_ & 1) == 0) {
          pcVar3 = &cf_PNaSGrlgS_uLkfc;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar3);
        local_84 = 1;
        goto LAB_008fc7a4;
      }
    }
    FUN_008f3a68();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_WCRefineHelper_026ce000;
    local_b0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_Wl_);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar5;
    pdVar6 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    qVar2 = local_70.field1_0x8;
    local_108 = PTR___NSConcreteStackBlock_02578660;
    local_100 = 0xc2000000;
    local_fc = 0;
    local_f8 = FUN_008fc9c8;
    local_f0 = &DAT_02580e10;
    (*(code *)PTR__objc_retain_02578638)();
    qVar1 = local_70.field0_0x0;
    local_e8 = (cfstringStruct *)qVar2;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_48;
    local_e0 = (cfstringStruct *)qVar1;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar3 = local_b0;
    local_d8 = pcVar4;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_b8;
    local_d0 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = puVar5;
    local_c0 = local_70.field2_0x10._6_1_ & 1;
    local_bf = local_70.field2_0x10._7_1_ & 1;
    _dispatch_async(pdVar6,&local_108);
    (*(code *)PTR__objc_release_02578630)(pdVar6);
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
    local_84 = 0;
  }
LAB_008fc7a4:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_70.field1_0x8,0);
  _objc_storeStrong(&local_70.field3_0x18,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

