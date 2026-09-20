// playIconTapped: @ 01f8c938

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineVoicePackPickerViewController::playIconTapped_
          (WCRefineVoicePackPickerViewController *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  dispatch_queue_t pdVar6;
  double in_d0;
  double dVar7;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  ID local_f0;
  ID local_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  ID local_d0;
  byte local_c1;
  ID local_c0;
  byte local_b1;
  ID local_b0;
  byte local_a1;
  ID local_a0;
  byte local_91;
  ID local_90;
  byte local_81;
  ID local_80;
  byte local_71;
  ID local_70;
  byte local_61;
  ID local_60;
  byte local_51;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar3 = local_28;
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_itemAtIndex__026c9bc0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  if ((IVar3 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isDirectory_026b0ba0), (IVar3 & 1) != 0)) {
    local_44 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isPreviewingItem__026c9b78,local_40);
    if ((IVar3 & 1) == 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewPlayer_026c9508);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 0;
      local_61 = 0;
      local_71 = 0;
      local_81 = 0;
      local_91 = 0;
      local_a1 = 0;
      local_b1 = 0;
      local_c1 = 0;
      bVar1 = false;
      if (IVar3 != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPreviewedItem_026c9bc8);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        bVar1 = false;
        local_50 = IVar4;
        if (IVar4 != 0) {
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPreviewedItem_026c9bc8);
          _objc_retainAutoreleasedReturnValue();
          local_61 = 1;
          local_60 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_71 = 1;
          IVar5 = local_40;
          local_70 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_absolutePath_026ae300);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = IVar5;
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isEqualToString__0269ccc8);
          bVar1 = false;
          if ((IVar4 & 1) != 0) {
            IVar4 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewPlayer_026c9508);
            _objc_retainAutoreleasedReturnValue();
            local_91 = 1;
            local_90 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = false;
            if ((IVar4 & 1) == 0) {
              IVar4 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewPlayer_026c9508);
              _objc_retainAutoreleasedReturnValue();
              local_a1 = 1;
              local_a0 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar1 = false;
              if (0.0 < in_d0) {
                IVar4 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewPlayer_026c9508);
                _objc_retainAutoreleasedReturnValue();
                local_b1 = 1;
                local_b0 = IVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                IVar4 = local_28;
                dVar7 = in_d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewPlayer_026c9508);
                _objc_retainAutoreleasedReturnValue();
                local_c1 = 1;
                local_c0 = IVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                bVar1 = in_d0 < dVar7 - DAT_02323c88;
              }
            }
          }
        }
      }
      if ((local_c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      if ((local_a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (bVar1) {
        IVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_absolutePath_026ae300);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreviewingPath__026c9b50);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewPlayer_026c9508);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rebuildListSections_026ba410);
        local_44 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setLastPreviewedItem__026c9bd8,local_40);
        IVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_absolutePath_026ae300);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = IVar3;
        _objc_initWeak(auStack_d8,local_28);
        pdVar6 = _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_d0;
        local_110 = PTR___NSConcreteStackBlock_02578660;
        local_108 = 0xc2000000;
        local_104 = 0;
        local_100 = FUN_01f8d140;
        local_f8 = &DAT_0257c978;
        (*(code *)PTR__objc_retain_02578638)();
        local_f0 = IVar3;
        _objc_copyWeak(auStack_e0,auStack_d8);
        IVar3 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = IVar3;
        _dispatch_async(pdVar6,&local_110);
        (*(code *)PTR__objc_release_02578630)(pdVar6);
        _objc_storeStrong(&local_e8);
        _objc_destroyWeak(auStack_e0);
        _objc_storeStrong(&local_f0,0);
        _objc_destroyWeak(auStack_d8);
        _objc_storeStrong(&local_d0,0);
        local_44 = 0;
      }
    }
    else {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewPlayer_026c9508);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreviewingPath__026c9b50,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rebuildListSections_026ba410);
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

