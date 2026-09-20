// naturalVideoSizeForURL: @ 01e7d3f8

/* Function Stack Size: 0x18 bytes */

CGSize WCRefineToDoCardView::naturalVideoSizeForURL_(ID param_1,SEL param_2,ID param_3)

{
  CGSize CVar1;
  undefined *puVar2;
  undefined *puVar3;
  double in_d0;
  double dVar4;
  double in_d1;
  double dVar5;
  undefined1 auStack_e0 [48];
  double local_b0;
  double dStack_a8;
  undefined1 auStack_a0 [48];
  double local_70;
  double local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  long local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double dStack_28;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  if (local_48 == 0) {
    dStack_28 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    local_30 = *(double *)PTR__CGSizeZero_025782f8;
    local_4c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVURLAsset_026ce330,PTR_s_URLAssetWithURL_options__026a1748,
               local_48,0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_tracksWithMediaType__0269f568,
               *(undefined8 *)PTR__AVMediaTypeVideo_02578588);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_60 == (undefined *)0x0) {
      local_30 = *(double *)PTR__CGSizeZero_025782f8;
      dStack_28 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_naturalSize_0269f570);
      local_70 = in_d0;
      local_68 = in_d1;
      if (local_60 == (undefined *)0x0) {
        _memset(auStack_a0,0,0x30);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(auStack_a0,local_60,PTR_s_preferredTransform_0269f578)
        ;
      }
      dVar5 = local_68;
      dVar4 = local_70;
      _memcpy(auStack_e0,auStack_a0,0x30);
      FUN_01e7d668(auStack_e0);
      local_b0 = ABS(dVar4);
      dStack_a8 = ABS(dVar5);
      if ((local_b0 <= 1.0) || (local_30 = local_b0, dStack_28 = dStack_a8, dStack_a8 <= 1.0)) {
        dVar4 = ABS(local_70);
        dVar5 = ABS(local_68);
        FUN_01e75160();
        local_30 = dVar4;
        dStack_28 = dVar5;
      }
    }
    local_4c = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
  CVar1.field1_0x8 = dStack_28;
  CVar1.field0_0x0 = local_30;
  return CVar1;
}

