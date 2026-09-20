// headViewForUsr:size:privacy: @ 01d9d16c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x24 bytes */

ID WCRefineSessionStatsBoardView::headViewForUsr_size_privacy_
             (ID param_1,SEL param_2,ID param_3,double param_4,bool param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined1 local_49;
  double local_48;
  long local_40;
  SEL local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (undefined *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_49 = (undefined1)param_5;
  local_48 = param_4;
  if (((param_5 & 1) == 0) ||
     (lVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    uVar9 = 0;
    uVar7 = 0;
    dVar10 = local_48;
    dVar11 = local_48;
    FUN_01d8ec14();
    local_78 = uVar7;
    local_70 = uVar9;
    local_68 = dVar10;
    local_60 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar9,puVar2,PTR_s_initWithFrame__026ca6e8);
    uVar9 = 0x4000000000000000;
    dVar8 = local_48 / 2.0;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x4000000000000000;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)();
    FUN_01d8f260();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageForUsr__026c4ef8,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      pcVar4 = "MMHeadImageView";
      _objc_getClass();
      local_e0 = (char *)0x0;
      local_d8 = pcVar4;
      if ((pcVar4 != (char *)0x0) &&
         (lVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
         lVar1 != 0)) {
        pcVar4 = local_d8;
        _objc_alloc();
        pcVar5 = &cf_initWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
        local_e8 = pcVar4;
        _NSSelectorFromString();
        pcVar4 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_respondsToSelector__026ca818,pcVar5);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar6 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,pcVar5,local_40,0,1,1);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_e0;
          local_e0 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        _objc_storeStrong(&local_e8,0);
      }
      pcVar4 = local_e0;
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,uVar9,dVar10,dVar11,local_e0,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setAutoresizingMask__026ca878,0x12);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addSubview__026ca4c0,local_e0);
        pcVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_setHeadImageByName__0269de50);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_setHeadImageByName__0269de50,local_40);
        }
        pcVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_checkAndUpdateImage_0269de70);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_checkAndUpdateImage_0269de70);
        }
        puVar2 = PTR_s_updateHeadImage__0269de58;
        pcVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_updateHeadImage__0269de58);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,puVar2,0);
        }
      }
      puVar2 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_50 = 1;
      _objc_storeStrong(&local_e0,0);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bounds_026ca548);
      local_d0 = uVar7;
      uStack_c8 = uVar9;
      local_c0 = dVar10;
      dStack_b8 = dVar11;
      local_a8 = uVar7;
      uStack_a0 = uVar9;
      local_98 = dVar10;
      dStack_90 = dVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,uVar9,dVar10,dVar11,local_88,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setContentMode__026ca8e0,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addSubview__026ca4c0,local_88);
      puVar2 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_50 = 1;
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_58,0);
  }
  else {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,local_30,PTR_s_privacyHeadForUsr_size__026c4f08,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 1;
    local_28 = puVar2;
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

