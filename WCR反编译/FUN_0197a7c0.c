// FUN_0197a7c0 @ 0197a7c0

void FUN_0197a7c0(double param_1,double param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  long local_48;
  long local_40;
  uint local_34;
  long local_30;
  long local_28;
  
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  local_30 = param_3;
  local_28 = param_3;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar3);
  bVar2 = *(long *)(param_3 + 0x48) != *(long *)(*(long *)(param_3 + 0x20) + 0x18);
  local_34 = (uint)bVar2;
  _objc_sync_exit(bVar2,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (local_34 == 0) {
    local_40 = 0;
    if ((*(long *)(param_3 + 0x50) == 1) || (*(long *)(param_3 + 0x50) == 2)) {
      lVar4 = *(long *)(param_3 + 0x20);
      param_1 = *(double *)(param_3 + 0x58);
      param_2 = *(double *)(param_3 + 0x60);
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar4,PTR_s_downsampledImageAtPath_toPixelSi_026ba240,
                 *(undefined8 *)(param_3 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_40;
      local_40 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    else if (*(long *)(param_3 + 0x50) == 4) {
      lVar4 = *(long *)(param_3 + 0x20);
      param_1 = *(double *)(param_3 + 0x58);
      param_2 = *(double *)(param_3 + 0x60);
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar4,PTR_s_videoThumbnailAtPath_toPixelSize_026ba248,
                 *(undefined8 *)(param_3 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_40;
      local_40 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    else if (*(long *)(param_3 + 0x50) == 3) {
      lVar4 = *(long *)(param_3 + 0x20);
      param_1 = *(double *)(param_3 + 0x58);
      param_2 = *(double *)(param_3 + 0x60);
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar4,PTR_s_svgThumbnailAtPath_toPixelSize__026ba250,
                 *(undefined8 *)(param_3 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_40;
      local_40 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    if (local_40 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
      dVar7 = param_1;
      local_58 = param_1;
      local_50 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
      local_48 = (long)(param_1 * param_2 * 4.0);
      local_68 = dVar7;
      local_60 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(*(long *)(param_3 + 0x20) + 8),
                 PTR_s_setObject_forKey_cost__0269e0c0,local_40,*(undefined8 *)(param_3 + 0x30),
                 local_48);
    }
    puVar5 = PTR___dispatch_main_q_02578680;
    if (*(long *)(param_3 + 0x40) != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_0197abcc;
      local_98 = &DAT_02581fc0;
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = *(undefined8 *)(param_3 + 0x48);
      uVar6 = *(undefined8 *)(param_3 + 0x40);
      local_90 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_40;
      local_78 = uVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = lVar1;
      uVar3 = *(undefined8 *)(param_3 + 0x38);
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = uVar3;
      _dispatch_async(puVar5,&local_b0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  return;
}

