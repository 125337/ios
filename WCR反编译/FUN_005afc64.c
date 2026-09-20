// FUN_005afc64 @ 005afc64

void FUN_005afc64(long param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  char *pcVar6;
  cfstringStruct *local_2a8;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  cfstringStruct *local_f0;
  long local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  cfstringStruct *local_c0;
  char *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  long local_90;
  char *local_88;
  cfstringStruct *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  cfstringStruct *local_60;
  char *local_58;
  int local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_contentObj);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Q_NS_u);
    local_50 = 1;
  }
  else {
    pcVar2 = "FavoritesUtil";
    _objc_getClass();
    pcVar1 = &cf_ConvertNoteContentObj2WCUploadTask_;
    local_58 = pcVar2;
    _NSSelectorFromString();
    local_60 = pcVar1;
    if ((local_58 == (char *)0x0) ||
       (pcVar2 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar1),
       ((ulong)pcVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__lSNS_u);
      local_50 = 1;
    }
    else {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_60,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__lbc1Y_);
        local_50 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_valueForKey__0269d128,&cf_noteInfo);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar2;
        if (pcVar2 != (char *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_fromScene);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        pcVar2 = "WCDataItem";
        _objc_getClass();
        pcVar1 = &cf_fromUploadTask_;
        local_78 = pcVar2;
        _NSSelectorFromString();
        local_80 = pcVar1;
        if ((local_78 == (char *)0x0) ||
           (pcVar2 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_respondsToSelector__026ca818,pcVar1)
           , ((ulong)pcVar2 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_RNS_u);
          local_50 = 1;
        }
        else {
          pcVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,local_80,local_68);
          _objc_retainAutoreleasedReturnValue();
          local_88 = pcVar2;
          if (pcVar2 == (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_I_z1Y_);
            local_50 = 1;
          }
          else {
            local_90 = 0;
            pcVar1 = &cf_itemID;
            _NSSelectorFromString();
            pcVar4 = local_38;
            local_98 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_respondsToSelector__026ca818,pcVar1);
            if (((ulong)pcVar4 & 1) != 0) {
              pcVar1 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,local_98);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_a0 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((ulong)pcVar1 & 1) != 0) {
                _objc_storeStrong(&local_90,local_a0);
              }
              _objc_storeStrong(&local_a0,0);
            }
            lVar5 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
            if (lVar5 == 0) {
              pcVar1 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_itemID)
              ;
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_a8 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((ulong)pcVar1 & 1) != 0) {
                _objc_storeStrong(&local_90,local_a8);
              }
              _objc_storeStrong(&local_a8,0);
            }
            pcVar2 = local_88;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_isFromFav);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            lVar5 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
            if (lVar5 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_setValue_forKey__0269d300,local_90,&cf_draftID);
            }
            pcVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_valueForKey__0269d128,&cf_contentDesc);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_b0 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((((ulong)pcVar1 & 1) != 0) &&
               (pcVar1 = local_b0,
               (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0),
               pcVar1 != (cfstringStruct *)0x0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_88,PTR_s_setValue_forKey__0269d300,local_b0,&cf_contentDesc);
            }
            pcVar2 = "WCForwardViewController";
            _objc_getClass();
            pcVar1 = &cf_initWithDataItem_;
            local_b8 = pcVar2;
            _NSSelectorFromString();
            local_c0 = pcVar1;
            if ((local_b8 == (char *)0x0) ||
               (pcVar2 = local_b8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_b8,PTR_s_instancesRespondToSelector__0269da90,pcVar1),
               ((ulong)pcVar2 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_RNS_u);
              local_50 = 1;
            }
            else {
              pcVar2 = local_b8;
              _objc_alloc();
              pcVar6 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_c0,local_88);
              _objc_retainAutoreleasedReturnValue();
              local_c8 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              if (local_c8 == (char *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R__hV1Y_)
                ;
                local_50 = 1;
              }
              else {
                _WCRefineMarkMomentsForwardEditor(local_c8,local_38);
                pcVar2 = "MMUINavigationController";
                _objc_getClass();
                pcVar6 = local_c8;
                local_d0 = pcVar2;
                if (pcVar2 == (char *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_RNS_u);
                  local_50 = 1;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_d8 = pcVar6;
                  pcVar2 = local_d0;
                  _objc_alloc();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar2,PTR_s_initWithRootViewController__0269d2a0,local_d8);
                  local_e0 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar2,PTR_s_setModalPresentationStyle__0269d2a8,0);
                  lVar5 = local_28;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_WCRefine_findViewController_026a5820);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar1 = local_b0;
                  local_e8 = lVar5;
                  if (lVar5 == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Sb);
                    local_50 = 1;
                  }
                  else {
                    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
                    if (((ulong)pcVar1 & 1) == 0) {
                      local_2a8 = &cf___;
                    }
                    else {
                      local_2a8 = local_b0;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_f0 = local_2a8;
                    _objc_initWeak(auStack_f8,local_c8);
                    pcVar2 = local_e0;
                    lVar5 = local_e8;
                    local_128 = PTR___NSConcreteStackBlock_02578660;
                    local_120 = 0xc2000000;
                    local_11c = 0;
                    local_118 = FUN_005cf860;
                    local_110 = &DAT_025797f0;
                    _objc_copyWeak(auStack_100,auStack_f8);
                    pcVar1 = local_f0;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_108 = pcVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (lVar5,PTR_s_presentViewController_animated_c_0269d2b0,pcVar2,1,
                               &local_128);
                    _objc_storeStrong(&local_108);
                    _objc_destroyWeak(auStack_100);
                    _objc_destroyWeak(auStack_f8);
                    _objc_storeStrong(&local_f0,0);
                    local_50 = 0;
                  }
                  _objc_storeStrong(&local_e8);
                  _objc_storeStrong(&local_e0,0);
                  _objc_storeStrong(&local_d8,0);
                }
              }
              _objc_storeStrong(&local_c8,0);
            }
            _objc_storeStrong(&local_b0);
            _objc_storeStrong(&local_90,0);
          }
          _objc_storeStrong(&local_88,0);
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_40,0);
  if (local_50 == 0) {
    local_50 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

