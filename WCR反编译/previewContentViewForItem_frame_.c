// previewContentViewForItem:frame: @ 01b7532c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x38 bytes */

ID WCRefineLocalEmoticonLibraryViewController::previewContentViewForItem_frame_
             (ID param_1,SEL param_2,ID param_3,CGRect param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  double in_d0;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_d1;
  undefined8 uVar10;
  undefined8 in_d2;
  undefined8 in_d3;
  double dVar11;
  undefined *local_308;
  undefined *local_2f8;
  double local_278;
  char *local_200;
  bool local_1f1;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  double dStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined8 local_128;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_e8;
  char *local_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  byte local_71;
  undefined *local_70;
  int local_64;
  long local_60;
  SEL local_58;
  ID local_50;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char *local_28;
  
  plVar1 = &local_60;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  local_48 = in_d0;
  uStack_40 = in_d1;
  local_38 = in_d2;
  uStack_30 = in_d3;
  _objc_storeStrong(plVar1,param_3,param_3,param_4.field0_0x0.field0_0x0,
                    param_4.field0_0x0.field1_0x8,param_4.field1_0x10.field0_0x0,
                    param_4.field1_0x10.field1_0x8);
  if ((local_60 == 0) ||
     (_CGRectIsEmpty(local_48,uStack_40,local_38,uStack_30), ((ulong)plVar1 & 1) != 0)) {
    local_28 = (char *)0x0;
    local_64 = 1;
    goto LAB_01b75e84;
  }
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_lightweightWrapForItem__026ae450,local_60
            );
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_70 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_prepareWrapForDisplay__026a3d88,puVar2);
  local_71 = (byte)puVar3;
  pcVar4 = "EmoticonViewWithPreview";
  _objc_getClass();
  local_80 = pcVar4;
  if (((((local_71 & 1) == 0) || (local_70 == (undefined *)0x0)) || (pcVar4 == (char *)0x0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initWithFrame_EmoticonWrap__026bf788), ((ulong)pcVar4 & 1) == 0)) {
LAB_01b75ba0:
    puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
    lVar6 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_absolutePath_026ae300);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dataWithContentsOfFile__0269e0b8);
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(lVar6);
    puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_sendableDataFromData__026a3db8,
               local_1d8);
    _objc_retainAutoreleasedReturnValue();
    local_2f8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_2f8 = local_1d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = local_2f8;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0);
    local_1f1 = false;
    if (puVar2 == (undefined *)0x0) {
      local_308 = (undefined *)0x0;
    }
    else {
      local_308 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_1e0);
      _objc_retainAutoreleasedReturnValue();
      local_1f0 = local_308;
    }
    local_1f1 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e8 = local_308;
    if ((local_1f1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1f0);
    }
    if (local_1e8 == (undefined *)0x0) {
      local_28 = (char *)0x0;
      local_64 = 1;
    }
    else {
      pcVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_200 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,uStack_40,local_38,uStack_30,pcVar4,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setContentMode__026ca8e0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_setAutoresizingMask__026ca878,0x12);
      pcVar4 = local_200;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar4;
      local_64 = 1;
      _objc_storeStrong(&local_200,0);
    }
    _objc_storeStrong(&local_1e8);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d8,0);
  }
  else {
    pcVar4 = local_80;
    _objc_alloc();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,uStack_40,local_38,uStack_30);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (local_88 == (char *)0x0) {
LAB_01b75b7c:
      local_64 = 0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setAutoresizingMask__026ca878,0x12);
      pcVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_setM_isNeedPlay__026bf7a0);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setM_isNeedPlay__026bf7a0,1);
      }
      local_90 = (char *)0x0;
      local_98 = (char *)0x0;
      pcVar5 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_valueForKey__0269d128,&cf_m_emoticonShowPlayView);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_90;
      local_90 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar5 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_valueForKey__0269d128,&cf_m_emoticonView)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_98;
      local_98 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      dVar7 = local_48;
      _CGRectGetWidth(local_48,uStack_40,local_38,uStack_30);
      local_278 = local_48;
      uVar9 = local_38;
      uVar8 = uStack_30;
      local_c8 = dVar7;
      _CGRectGetHeight(local_48,uStack_40);
      if (local_c8 < local_278) {
        local_278 = local_c8;
      }
      local_d8 = local_278;
      local_c0 = local_278;
      uVar10 = 0x403e000000000000;
      if (local_278 < 30.0) {
        local_c0 = 30.0;
      }
      pcVar4 = local_90;
      dVar7 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_setMaxSize__026bfb60);
      if (((ulong)pcVar4 & 1) != 0) {
        dVar7 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setMaxSize__026bfb60);
      }
      pcVar4 = local_98;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setHidden__026ca970,1);
      }
      pcVar4 = local_90;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,0);
      }
      if ((local_90 == (char *)0x0) ||
         (pcVar4 = local_90,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_90,PTR_s_respondsToSelector__026ca818,
                    PTR_s_setEmoticonWrap_PlayGif__026bf7b0), ((ulong)pcVar4 & 1) == 0)) {
        local_64 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_setEmoticonWrap_PlayGif__026bf7b0,local_70,1);
        pcVar4 = local_90;
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        pcVar5 = local_90;
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_e0 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_bounds_026ca548);
          local_108 = dVar7;
          local_100 = uVar10;
          _CGRectGetWidth();
          local_e8 = dVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
          local_130 = dVar7;
          local_128 = uVar10;
          _CGRectGetHeight(dVar7,uVar10,uVar9,uVar8);
          if (local_e8 < 1.0) {
            local_e8 = local_c0;
          }
          local_110 = dVar7;
          if (dVar7 < 1.0) {
            local_110 = local_c0;
          }
          uVar10 = 0;
          uVar8 = 0;
          dVar7 = local_e8;
          dVar11 = local_110;
          FUN_01b5a61c();
          local_170 = uVar8;
          uStack_168 = uVar10;
          local_160 = dVar7;
          dStack_158 = dVar11;
          local_150 = uVar8;
          uStack_148 = uVar10;
          local_140 = dVar7;
          dStack_138 = dVar11;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setBounds__026ca8a0);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_bounds_026ca548);
          local_1a0 = uVar8;
          local_198 = uVar10;
          local_190 = dVar7;
          local_188 = dVar11;
          _CGRectGetMidX();
          uVar9 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_bounds_026ca548);
          local_1c0 = uVar9;
          local_1b8 = uVar10;
          local_1b0 = dVar7;
          local_1a8 = dVar11;
          _CGRectGetMidY(uVar9,uVar10,dVar7,dVar11);
          FUN_01b75eac();
          local_1d0 = uVar8;
          uStack_1c8 = uVar9;
          local_180 = uVar8;
          uStack_178 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar9,local_e0,PTR_s_setCenter__026ca8c0);
          _objc_storeStrong(&local_e0,0);
        }
        pcVar4 = local_88;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar4;
        local_64 = 1;
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
      if (local_64 == 0) goto LAB_01b75b7c;
    }
    _objc_storeStrong(&local_88,0);
    if (local_64 == 0) goto LAB_01b75ba0;
  }
  _objc_storeStrong(&local_70,0);
LAB_01b75e84:
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

