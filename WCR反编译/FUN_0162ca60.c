// FUN_0162ca60 @ 0162ca60

byte FUN_0162ca60(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  double in_d3;
  char *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  pcVar1 = &cf_onOpenWCTimeline;
  _NSSelectorFromString();
  local_30 = pcVar1;
  FUN_0162be00();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  FUN_0162e8e8();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,local_30),
     ((ulong)pcVar1 & 1) == 0)) {
    pcVar1 = &cf_WCTimeLineViewController;
    _NSClassFromString();
    local_50 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_21 = 0;
      local_44 = 1;
    }
    else {
      _objc_alloc_init();
      local_58 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_21 = 0;
        local_44 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar3 = "MMPageSheetConfig";
        local_60 = puVar2;
        _objc_getClass();
        pcVar4 = "MMPageSheetAdapter";
        local_68 = pcVar3;
        _objc_getClass();
        local_70 = pcVar4;
        if (((local_60 == (undefined *)0x0) || (local_68 == (char *)0x0)) || (pcVar4 == (char *)0x0)
           ) {
          local_21 = 0;
          local_44 = 1;
        }
        else {
          pcVar3 = local_68;
          _objc_alloc_init();
          pcVar1 = &cf_setEnableEdgeSlideToClose_;
          local_78 = pcVar3;
          _NSSelectorFromString();
          pcVar5 = &cf_setEnableDragToClose_;
          local_80 = pcVar1;
          _NSSelectorFromString();
          pcVar1 = &cf_setIsAllowTapBgMaskToClose_;
          local_88 = pcVar5;
          _NSSelectorFromString();
          pcVar3 = local_78;
          local_90 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_respondsToSelector__026ca818,local_80);
          if (((ulong)pcVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_78,local_80,1);
          }
          pcVar3 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_respondsToSelector__026ca818,local_88);
          if (((ulong)pcVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_78,local_88,1);
          }
          pcVar3 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_respondsToSelector__026ca818,local_90);
          if (((ulong)pcVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_78,local_90,1);
          }
          pcVar3 = local_70;
          _objc_alloc_init();
          pcVar1 = &cf_setPageSheetConfig_;
          local_98 = pcVar3;
          _NSSelectorFromString();
          pcVar5 = &cf_setHostViewController_;
          _NSSelectorFromString();
          pcVar6 = &cf_setContentHeight_;
          _NSSelectorFromString();
          pcVar7 = &cf_showWithAnimated_;
          _NSSelectorFromString();
          pcVar3 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_respondsToSelector__026ca818,pcVar1);
          if (((ulong)pcVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_98,pcVar1,local_78);
          }
          pcVar3 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_respondsToSelector__026ca818,pcVar5);
          if (((ulong)pcVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_98,pcVar5,local_60);
          }
          pcVar4 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_respondsToSelector__026ca818,pcVar6);
          pcVar3 = local_98;
          if (((ulong)pcVar4 & 1) != 0) {
            puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(in_d3 * 0.7,pcVar3,pcVar6);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          pcVar3 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_respondsToSelector__026ca818,pcVar7);
          local_21 = ((ulong)pcVar3 & 1) != 0;
          if ((bool)local_21) {
            (*(code *)PTR__objc_msgSend_02578628)(local_98,pcVar7,1);
          }
          local_44 = 1;
          _objc_storeStrong(&local_98);
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,local_30);
    local_21 = 1;
    local_44 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_21 & 1;
}

