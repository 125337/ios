// presentFromViewController:entry:backend:onSaved: @ 01ea4350

/* Function Stack Size: 0x30 bytes */

void WCRefineToDoItemEditViewController::presentFromViewController_entry_backend_onSaved_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,ID param_6,
               undefined4 param_7)

{
  ID IVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined **ppuVar5;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined **local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  undefined *local_58;
  ID local_50;
  undefined4 local_44;
  undefined8 local_40;
  long_long local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0;
  local_38 = param_5;
  _objc_storeStrong(&local_40,param_6);
  if (local_28 == 0) {
    local_44 = 1;
  }
  else {
    IVar1 = local_18;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setOnSaved__026c74a0,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setPresentedAsSheet__026c74a8,1);
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,1);
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,
               PTR_s_sheetPresentationController_026af2b8);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_sheetPresentationController_026af2b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_UISheetPresentationControllerDetent;
      local_60 = puVar2;
      _NSClassFromString();
      local_68 = pcVar3;
      if ((local_60 != (undefined *)0x0) && (pcVar3 != (cfstringStruct *)0x0)) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = &cf_customDetentWithIdentifier_resolver_;
        local_70 = puVar2;
        _NSSelectorFromString();
        pcVar4 = local_68;
        local_78 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar3);
        if (((ulong)pcVar4 & 1) != 0) {
          ppuVar5 = &PTR___NSConcreteGlobalBlock_0258c9e0;
          _objc_retainBlock();
          pcVar4 = local_68;
          pcVar3 = local_78;
          local_80 = ppuVar5;
          _objc_retainBlock();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar3,&cf_wcrToDoThreeFifths);
          _objc_retainAutoreleasedReturnValue();
          local_88 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(ppuVar5);
          if (local_88 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,local_88);
          }
          _objc_storeStrong(&local_88);
          _objc_storeStrong(&local_80,0);
        }
        puVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
        if (puVar2 == (undefined *)0x0) {
          pcVar3 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_mediumDetent_026af300);
          if (((ulong)pcVar3 & 1) != 0) {
            pcVar3 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_mediumDetent_026af300);
            _objc_retainAutoreleasedReturnValue();
            local_90 = pcVar3;
            if (pcVar3 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,pcVar3);
            }
            _objc_storeStrong(&local_90,0);
          }
        }
        puVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
        if (puVar2 != (undefined *)0x0) {
          puVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setDetents__026af2f0);
          if (((ulong)puVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setDetents__026af2f0,local_70);
          }
        }
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setPrefersGrabberVisible__026af2c0);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setPrefersGrabberVisible__026af2c0,1)
          ;
        }
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setPreferredCornerRadius__026b68c8);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4030000000000000,local_60,PTR_s_setPreferredCornerRadius__026b68c8);
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

