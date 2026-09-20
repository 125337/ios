// FUN_0025ea90 @ 0025ea90

void FUN_0025ea90(double param_1,double param_2,double param_3,double param_4,char *param_5,
                 undefined8 param_6)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_440;
  double local_418;
  char *local_2a8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  char *local_90;
  char *local_88;
  undefined4 local_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  char *local_40;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  char *pcVar3;
  
  local_38 = (char *)0x0;
  local_40 = (char *)0x0;
  local_30 = param_6;
  local_28 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_valueForKey__0269d128,&cf_sendBtn);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_38;
  local_38 = param_5;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_addBtn);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_40;
  local_40 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (local_38 != (char *)0x0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    uVar1 = (uint)pcVar3;
    local_78 = param_1;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    _CGRectIsEmpty();
    if ((uVar1 & 1) == 0) {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_2a8 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_2a8 = local_28;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_2a8;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_viewWithTag__026cabe0,0x24f6e6);
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "WeButton";
        _objc_getClass();
        pcVar2 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_genBigWeakButton_026a1210);
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_genBigWeakButton_026a1210);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_90;
          local_90 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar3 = local_90;
        puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = "FixTitleColorButton";
          _objc_getClass();
          if (pcVar3 == (char *)0x0) {
            pcVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_90;
            local_90 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          else {
            _objc_alloc_init();
            pcVar2 = local_90;
            local_90 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar3 = local_90;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_setValue_forKey__0269d300,puVar4,&cf_halfScreenStyle);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            pcVar3 = local_90;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_setValue_forKey__0269d300,puVar4,&cf_bigStyle);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            pcVar3 = local_90;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_setValue_forKey__0269d300,puVar4,&cf_weakStyle);
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setTag__026caa80,DAT_02323eb8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_setTitle_forState__026caab8,&cf_OX_0RvQ,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
                   PTR_s_WCRefine_onSaveEmoticonToAlbumFr_026a1130,0x40);
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addSubview__026ca4c0,local_90);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
      local_440 = param_4;
      local_418 = param_2;
      local_d0 = param_1;
      dStack_c8 = param_2;
      local_c0 = param_3;
      dStack_b8 = param_4;
      if ((local_40 != (char *)0x0) &&
         (pcVar3 = local_40, dVar5 = param_4, dVar6 = param_3, dVar7 = param_1,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isHidden_026ca768), local_440 = dVar5,
         local_d0 = param_1, dStack_c8 = param_2, dStack_b8 = param_4, ((ulong)pcVar3 & 1) == 0)) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
        uVar1 = (uint)pcVar3;
        _CGRectIsEmpty();
        local_440 = dVar5;
        local_d0 = param_1;
        dStack_c8 = param_2;
        dStack_b8 = param_4;
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
          _CGRectGetMaxY(dVar5,dVar6,local_418,dVar7);
          dVar6 = param_1;
          local_418 = param_3;
          dVar7 = param_4;
          _CGRectGetMaxY(param_1,param_2);
          local_440 = dVar5;
          local_d0 = param_1;
          dStack_c8 = param_2;
          dStack_b8 = param_4;
          if (dVar6 < dVar5) {
            local_440 = local_418;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
            local_418 = dVar6;
            local_d0 = dVar5;
            dStack_c8 = dVar6;
            local_c0 = local_440;
            dStack_b8 = dVar7;
          }
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      if (local_418 < 1.0) {
        local_418 = 1.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      if (local_440 < 48.0) {
        local_440 = 48.0;
      }
      dVar5 = local_440;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
      _CGRectGetMaxY(local_d0,dStack_c8,local_c0,dStack_b8);
      local_d0 = local_d0 + 12.0;
      FUN_00261d84();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,local_d0,local_418,local_440,local_90,PTR_s_setFrame__026ca960);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
      local_7c = 0;
      goto LAB_0025f638;
    }
  }
  local_7c = 1;
LAB_0025f638:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

