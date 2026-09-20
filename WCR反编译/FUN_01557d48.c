// FUN_01557d48 @ 01557d48

void FUN_01557d48(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  char *pcVar8;
  undefined **ppuVar9;
  dispatch_time_t dVar10;
  undefined *local_148;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  undefined **local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 auStack_d0 [16];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  undefined *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_31;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar6 = local_28;
  local_31 = 0;
  bVar2 = true;
  uVar1 = local_28 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar6 == puVar3;
    local_31 = uVar1;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (bVar2) {
    local_38 = 1;
  }
  else {
    pcVar4 = "ContactRelatedChatRoomListViewController";
    _objc_getClass();
    pcVar5 = "ContactRelatedGroupLogic";
    local_40 = pcVar4;
    _objc_getClass();
    local_48 = pcVar5;
    if ((local_40 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
      local_38 = 1;
    }
    else {
      puVar6 = local_28;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar6;
      FUN_0155771c();
      _objc_retainAutoreleasedReturnValue();
      local_148 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        local_148 = local_28;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_148;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = local_58;
      FUN_0158b1f0();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_count_0269cfe0);
      if (puVar6 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feqQT_J);
        local_38 = 1;
      }
      else {
        pcVar4 = local_40;
        FUN_0158b59c();
        local_68 = pcVar4;
        _objc_alloc_init();
        puVar6 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        local_70 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
        if (((ulong)pcVar4 & 1) == 0) {
          local_38 = 1;
        }
        else {
          local_78 = (char *)0x0;
          local_80 = (undefined *)0x0;
          pcVar7 = &cf_initWithContact_;
          _NSSelectorFromString();
          pcVar4 = local_48;
          local_88 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_instancesRespondToSelector__0269da90,pcVar7);
          if (((ulong)pcVar4 & 1) != 0) {
            pcVar5 = local_48;
            _objc_alloc();
            pcVar8 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,local_88,local_58);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_78;
            local_78 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            (*(code *)PTR__objc_release_02578630)(pcVar5);
          }
          if (local_78 == (char *)0x0) {
            local_38 = 1;
          }
          else {
            puVar3 = PTR_WCRCommonGroupMemberDataLogic_026cedb8;
            _objc_alloc_init();
            puVar6 = local_80;
            local_80 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            if (local_80 == (undefined *)0x0) {
              local_38 = 1;
            }
            else {
              _objc_setAssociatedObject(local_70,&DAT_028e3aa0,local_80,1);
              pcVar7 = &cf_setMemberLogic_;
              _NSSelectorFromString();
              pcVar4 = local_70;
              local_a0 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_respondsToSelector__026ca818,pcVar7);
              if (((ulong)pcVar4 & 1) == 0) {
                FUN_0158b6a4(local_70,"m_memberData",local_80);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_70,local_a0,local_80);
              }
              puVar6 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_mutableCopy_0269d8a0);
              local_a8 = puVar6;
              FUN_0158b6a4(local_78,"_arrRelatedGroup",puVar6);
              FUN_0158b778(local_78,"_bSearchDone",1);
              FUN_0158b778(local_78,"_bHasSearch",1);
              pcVar7 = &cf_setContact_;
              _NSSelectorFromString();
              pcVar4 = local_70;
              local_b0 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_respondsToSelector__026ca818,pcVar7);
              if (((ulong)pcVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_70,PTR_s_setValue_forKey__0269d300,local_58,&cf_contact);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_70,local_b0,local_58);
              }
              pcVar7 = &cf_setRelatedGroupLogic_;
              _NSSelectorFromString();
              pcVar4 = local_70;
              local_b8 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_respondsToSelector__026ca818,pcVar7);
              if (((ulong)pcVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_70,PTR_s_setValue_forKey__0269d300,local_78,&cf_relatedGroupLogic);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_70,local_b8,local_78);
              }
              pcVar7 = &cf_reloadMemberList_;
              _NSSelectorFromString();
              puVar6 = local_80;
              local_c0 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_80,PTR_s_respondsToSelector__026ca818,pcVar7);
              if (((ulong)puVar6 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_80,local_c0,local_a8);
              }
              _objc_storeStrong(&local_a8,0);
              FUN_01556938(local_70);
              _objc_initWeak(auStack_d0,local_70);
              puVar6 = local_80;
              (*(code *)PTR__objc_retain_02578638)();
              local_d8 = puVar6;
              puVar6 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_mutableCopy_0269d8a0);
              ppuVar9 = &local_120;
              local_120 = PTR___NSConcreteStackBlock_02578660;
              local_118 = 0xc2000000;
              local_114 = 0;
              local_110 = FUN_0158b858;
              local_108 = &DAT_0257c978;
              local_e0 = puVar6;
              _objc_copyWeak();
              puVar3 = local_d8;
              (*(code *)PTR__objc_retain_02578638)();
              puVar6 = local_e0;
              local_100 = puVar3;
              (*(code *)PTR__objc_retain_02578638)();
              local_f8 = puVar6;
              _objc_retainBlock();
              puVar6 = PTR___dispatch_main_q_02578680;
              local_e8 = ppuVar9;
              _objc_retainAutoreleaseReturnValue();
              puVar3 = puVar6;
              _objc_retainAutoreleasedReturnValue();
              _dispatch_async();
              (*(code *)PTR__objc_release_02578630)(puVar3);
              dVar10 = _dispatch_time(0,200000000);
              _objc_retainAutoreleaseReturnValue(puVar6);
              _objc_retainAutoreleasedReturnValue();
              _dispatch_after(dVar10,puVar6,local_e8);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              _objc_storeStrong(&local_e8);
              _objc_storeStrong(&local_f8,0);
              _objc_storeStrong(&local_100,0);
              _objc_destroyWeak(auStack_f0);
              _objc_storeStrong(&local_e0,0);
              _objc_storeStrong(&local_d8,0);
              _objc_destroyWeak(auStack_d0);
              local_38 = 0;
            }
          }
          _objc_storeStrong(&local_80);
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

