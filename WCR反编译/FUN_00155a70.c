// FUN_00155a70 @ 00155a70

undefined1  [16] FUN_00155a70(double param_1,double param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_f0 [48];
  double local_c0;
  double dStack_b8;
  double local_a8;
  double dStack_a0;
  undefined1 auStack_98 [48];
  double local_68;
  double dStack_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  long local_38;
  double local_30;
  double dStack_28;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  puVar4 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  if (lVar2 == 0) {
    dStack_28 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    local_30 = *(double *)PTR__CGSizeZero_025782f8;
    local_48 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_assetWithURL__0269f560);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_50 == (undefined *)0x0) {
      dStack_28 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
      local_30 = *(double *)PTR__CGSizeZero_025782f8;
      local_48 = 1;
    }
    else {
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_tracksWithMediaType__0269f568,
                 *(undefined8 *)PTR__AVMediaTypeVideo_02578588);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_58 == (undefined *)0x0) {
        local_30 = *(double *)PTR__CGSizeZero_025782f8;
        dStack_28 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_naturalSize_0269f570);
        local_68 = param_1;
        dStack_60 = param_2;
        if (local_58 == (undefined *)0x0) {
          _memset(auStack_98,0,0x30);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (auStack_98,local_58,PTR_s_preferredTransform_0269f578);
        }
        dStack_b8 = dStack_60;
        local_c0 = local_68;
        _memcpy(auStack_f0,auStack_98,0x30);
        dVar5 = local_c0;
        dVar6 = dStack_b8;
        FUN_00155e58(auStack_f0);
        local_a8 = ABS(dVar5);
        dStack_a0 = ABS(dVar6);
        if ((local_a8 <= 0.0) || (local_30 = local_a8, dStack_28 = dStack_a0, dStack_a0 <= 0.0)) {
          dVar5 = ABS(local_68);
          dVar6 = ABS(dStack_60);
          FUN_0013b3dc();
          local_30 = dVar5;
          dStack_28 = dVar6;
        }
      }
      local_48 = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  auVar1._8_8_ = dStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}

