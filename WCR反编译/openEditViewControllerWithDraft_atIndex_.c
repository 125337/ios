// openEditViewControllerWithDraft:atIndex: @ 01bf70c8

/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsDraftListViewController::openEditViewControllerWithDraft_atIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  ID IVar8;
  dispatch_time_t dVar9;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined1 auStack_a0 [8];
  long_long local_98;
  long_long local_90;
  undefined1 auStack_88 [15];
  byte local_79;
  long local_78;
  byte local_69;
  long local_68;
  char *local_60;
  undefined4 local_58;
  char *local_48;
  long_long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar3 = "WCNewCommitViewController";
  local_40 = param_4;
  _objc_getClass();
  local_48 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_58 = 1;
  }
  else {
    local_60 = (char *)0x0;
    local_69 = 0;
    lVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageArray_026a54a8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (lVar4 != 0) {
      lVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageArray_026a54a8);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = lVar5 != 0;
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(lVar4);
    if (bVar1) {
      pcVar6 = local_48;
      _objc_alloc();
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_imageArray_026a54a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithImages_contacts__026a4ce8,lVar4,0);
      pcVar3 = local_60;
      local_60 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    else {
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sightDraft_026a4d98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar4 == 0) {
        pcVar6 = local_48;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithTextType_026a4cf0);
        pcVar3 = local_60;
        local_60 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      else {
        pcVar6 = local_48;
        _objc_alloc();
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sightDraft_026a4d98);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithSightDraft__026a4ce0);
        pcVar3 = local_60;
        local_60 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
    }
    if (local_60 != (char *)0x0) {
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_poiInfo_026a4da0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar4 != 0) {
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_poiInfo_026a4da0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setPoiInfo__026a4e08);
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tempSelectContacts_026a4e10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar4 != 0) {
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tempSelectContacts_026a4e10);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTempSelectContacts__026a4e18);
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_extBean_026a4e20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar4 != 0) {
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_extBean_026a4e20);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setExtBean__026a4e28);
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
      pcVar3 = local_60;
      uVar2 = _kWCRefineDraftEditingIndexKey;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_40);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(pcVar3,uVar2,puVar7,1);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      IVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar8 != 0) {
        IVar8 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar8);
        local_79 = 0;
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_content_026a4a90);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        if (lVar4 != 0) {
          lVar5 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_content_026a4a90);
          _objc_retainAutoreleasedReturnValue();
          local_79 = 1;
          local_78 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = lVar5 != 0;
        }
        if ((local_79 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        (*(code *)PTR__objc_release_02578630)(lVar4);
        if (bVar1) {
          _objc_initWeak(auStack_88,local_60);
          local_90 = local_40;
          dVar9 = _dispatch_time(0,100000000);
          puVar7 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_c8 = PTR___NSConcreteStackBlock_02578660;
          local_c0 = 0xc2000000;
          local_bc = 0;
          local_b8 = FUN_01bf79dc;
          local_b0 = &DAT_0257c708;
          _objc_copyWeak(auStack_a0,auStack_88);
          lVar4 = local_38;
          local_98 = local_90;
          (*(code *)PTR__objc_retain_02578638)();
          local_a8 = lVar4;
          _dispatch_after(dVar9,puVar7,&local_c8);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          _objc_storeStrong(&local_a8,0);
          _objc_destroyWeak(auStack_a0);
          _objc_destroyWeak(auStack_88);
        }
      }
    }
    _objc_storeStrong(&local_60,0);
    local_58 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

