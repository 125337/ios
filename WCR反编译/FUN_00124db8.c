// FUN_00124db8 @ 00124db8

void FUN_00124db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_108;
  cfstringStruct *local_f0;
  cfstringStruct *local_d8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined **local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  uint local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((pcVar3 == (cfstringStruct *)0x0) ||
     (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    local_48 = 1;
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_d8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_d8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_d8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    local_f0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_f0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_f0;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    local_108 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_108 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_108;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_60;
    ppuVar4 = &local_a0;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_001253cc;
    local_88 = &DAT_02578f80;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_58;
    local_80 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar3 = local_50;
    local_78 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = pcVar3;
    _objc_retainBlock();
    puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_68 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar6 = PTR___dispatch_main_q_02578680;
    bVar1 = ((ulong)puVar5 & 1) == 0;
    if (bVar1) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      (*(code *)local_68[2])();
    }
    local_48 = (uint)!bVar1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

