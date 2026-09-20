// FUN_00294fd4 @ 00294fd4

void FUN_00294fd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  dispatch_time_t dVar8;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined **local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined **local_d0;
  undefined **local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 *local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  undefined *local_38;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_28);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_wcfSetImageWithURL_completion_;
  local_38 = puVar3;
  _NSSelectorFromString();
  local_50 = pcVar4;
  if ((local_38 == (undefined *)0x0) ||
     (puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_instancesRespondToSelector__0269da90,
                pcVar4), ((ulong)puVar3 & 1) == 0)) {
    lVar2 = local_30;
    if (local_30 != 0) {
      uVar5 = 0xfffffffffffffffc;
      FUN_00272848(0xfffffffffffffffc,&cf__O_b_X_cSNS_u);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,0);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    local_54 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_new_0269d288)
    ;
    local_60 = puVar3;
    _objc_storeStrong(&DAT_028c9598,puVar3);
    puVar1 = local_60;
    puVar3 = PTR___NSConcreteStackBlock_02578660;
    local_90 = &local_80;
    local_80 = 0;
    local_70 = 0x20000000;
    local_6c = 0x20;
    local_68 = 0;
    ppuVar6 = &local_c0;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_0029726c;
    local_a8 = &DAT_0257b7e8;
    local_78 = local_90;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_30;
    local_a0 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar2;
    _objc_retainBlock();
    ppuVar7 = &local_f0;
    local_f0 = puVar3;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_002974d8;
    local_d8 = &DAT_0257b818;
    local_88 = ppuVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = ppuVar6;
    _objc_retainBlock();
    puVar1 = local_38;
    pcVar4 = local_50;
    puVar3 = local_60;
    local_c8 = ppuVar7;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,pcVar4,puVar1);
    (*(code *)PTR__objc_release_02578630)(ppuVar7);
    dVar8 = _dispatch_time(0,15000000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = local_88;
    local_118 = PTR___NSConcreteStackBlock_02578660;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = FUN_00297754;
    local_100 = &DAT_02579910;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = ppuVar6;
    _dispatch_after(dVar8,puVar3,&local_118);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_a0,0);
    __Block_object_dispose(&local_80,8);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

