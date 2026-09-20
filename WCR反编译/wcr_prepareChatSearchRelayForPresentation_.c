// wcr_prepareChatSearchRelayForPresentation: @ 015594bc

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_prepareChatSearchRelayForPresentation_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_58;
  undefined4 local_50;
  char local_49;
  undefined *local_48;
  undefined1 local_39;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar3 = local_38;
  local_49 = '\0';
  bVar1 = true;
  if ((((DAT_028e39a0 & 1) == 0) && (bVar1 = false, (DAT_028e39a1 & 1) == 0)) &&
     (bVar1 = false, local_38 != (undefined *)0x0)) {
    puVar2 = &DAT_028e38c8;
    _objc_loadWeakRetained();
    local_49 = '\x01';
    bVar1 = puVar3 == puVar2;
    local_48 = puVar2;
  }
  if (local_49 != '\0') {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  local_39 = bVar1;
  if (((bVar1) && (local_38 != (undefined *)0x0)) &&
     (puVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isViewLoaded_0269cde0)
     , ((ulong)puVar3 & 1) != 0)) {
    if (DAT_028e38d0 == 0) {
      local_50 = 1;
    }
    else {
      puVar3 = local_38;
      _objc_getAssociatedObject(local_38,DAT_028c5f40);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      local_58 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
        _objc_alloc();
        puVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithFrame__026ca6e8);
        puVar3 = local_58;
        local_58 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAutoresizingMask__026ca878,0x12);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setContentMode__026ca8e0,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setClipsToBounds__026ca8c8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setUserInteractionEnabled__026caad8,0);
        _objc_setAssociatedObject(local_38,DAT_028c5f40,local_58,1);
      }
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,in_d2,in_d3,local_58,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setImage__026ca978,DAT_028e38d0);
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (puVar3 == puVar2) {
        puVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeFromSuperview_026ca800);
        puVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _objc_storeStrong(&local_58,0);
      local_50 = 0;
    }
  }
  else {
    local_50 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

