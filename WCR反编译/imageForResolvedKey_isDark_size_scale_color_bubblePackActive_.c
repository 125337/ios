// imageForResolvedKey:isDark:size:scale:color:bubblePackActive: @ 015cd190

/* Function Stack Size: 0x40 bytes */

ID __thiscall
WCRefineWechatThemeStore::imageForResolvedKey_isDark_size_scale_color_bubblePackActive_
          (WCRefineWechatThemeStore *this,ID param_1,SEL param_2,ID param_3,bool param_4,
          CGSize param_5,double param_6,ID param_7,bool param_8)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined *local_180;
  undefined *local_168;
  undefined *local_158;
  undefined *local_138;
  double local_110;
  undefined8 uStack_108;
  undefined *local_f0;
  undefined *local_e0;
  undefined *local_d0;
  undefined *local_c0;
  undefined *local_b8;
  bool local_a9;
  undefined *local_a8;
  undefined *local_a0;
  bool local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  byte local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_51;
  long local_50;
  SEL local_48;
  undefined *local_40;
  double local_38;
  undefined8 uStack_30;
  undefined *local_28;
  
  local_50 = 0;
  local_48 = param_2;
  local_40 = (undefined *)param_1;
  local_38 = param_6;
  uStack_30 = in_d1;
  _objc_storeStrong(&local_50,param_3);
  local_51 = (undefined1)param_4;
  local_68 = 0;
  local_60 = in_d2;
  _objc_storeStrong(&local_68,param_5.field0_0x0);
  local_69 = param_5.field1_0x8._0_1_;
  lVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_28 = (undefined *)0x0;
    local_70 = 1;
  }
  else {
    local_81 = 0;
    local_91 = false;
    bVar1 = (local_69 & 1) == 0;
    if (bVar1) {
      local_138 = (undefined *)0x0;
    }
    else {
      local_138 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bubblePngPaths_026b0f10);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_138;
      FUN_015cce60();
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_138;
    }
    local_91 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_138;
    if ((local_91 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    puVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (puVar3 == (undefined *)0x0) {
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pngPaths_026b0f18);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_015cce60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_78;
      local_78 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    local_a9 = false;
    if (puVar3 == (undefined *)0x0) {
      local_158 = (undefined *)0x0;
    }
    else {
      local_158 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_78
                );
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_158;
    }
    local_a9 = puVar3 != (undefined *)0x0;
    puVar3 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_158;
    if ((local_a9 & 1U) != 0) {
      puVar3 = local_a8;
      (*(code *)PTR__objc_release_02578630)();
    }
    if ((local_a0 != (undefined *)0x0) &&
       (FUN_015cd910(local_38,uStack_30,*(undefined8 *)PTR__CGSizeZero_025782f8,
                     *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8)), ((ulong)puVar3 & 1) == 0)) {
      puVar4 = local_a0;
      FUN_015cd968(local_38,uStack_30);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_a0;
      local_a0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    bVar1 = (local_69 & 1) == 0;
    if (bVar1) {
      local_168 = (undefined *)0x0;
    }
    else {
      local_c0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bubbleSvgPaths_026b0f28);
      _objc_retainAutoreleasedReturnValue();
      local_168 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_d0 = local_168;
    }
    if (local_168 == (undefined *)0x0) {
      local_e0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_svgPaths_026b0f30);
      _objc_retainAutoreleasedReturnValue();
      local_180 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_180;
    }
    else {
      local_180 = local_168;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_180;
    if (local_168 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    if ((local_a0 == (undefined *)0x0) &&
       (puVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
       puVar3 != (undefined *)0x0)) {
      FUN_015cd910(local_38,uStack_30,*(undefined8 *)PTR__CGSizeZero_025782f8,
                   *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8));
      if (((ulong)puVar3 & 1) == 0) {
        uStack_108 = uStack_30;
        local_110 = local_38;
      }
      else {
        uStack_108 = 0x4038000000000000;
        local_110 = 24.0;
        FUN_015cddd8();
      }
      puVar4 = local_b8;
      FUN_015cde04(local_110,uStack_108,local_b8,local_68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_a0;
      local_a0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = local_40;
    lVar2 = local_50;
    if ((local_a0 == (undefined *)0x0) && ((local_69 & 1) != 0)) {
      puVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bubbleCarCatalogs_026b0f38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,puVar3,PTR_s_imageNamed_inCatalogs_atScale__026b0f40,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_a0;
      local_a0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    if (local_a0 == (undefined *)0x0) {
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,local_40,PTR_s_imageNamed_fromCatalogsAtScale__026b0f48,local_50);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_a0;
      local_a0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = local_a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_70 = 1;
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

