// FUN_0179fd9c @ 0179fd9c

void FUN_0179fd9c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  dispatch_time_t dVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  cfstringStruct *local_188;
  undefined1 local_179;
  char *local_178;
  char *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined1 local_151;
  char *local_150;
  char *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined1 local_129;
  char *local_128;
  char *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined *local_108;
  undefined *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  char *local_78;
  cfstringStruct *local_70;
  uint local_64;
  cfstringStruct *local_60;
  char *local_48;
  char *local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if (DAT_028e41d0 == (char *)0x0) {
    pcVar3 = "ThemeBoxConfig";
    _objc_getClass();
    DAT_028e41d0 = pcVar3;
  }
  pcVar3 = DAT_028e41d0;
  _objc_retainAutoreleaseReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_new_0269d288);
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_drawerActions_026b4a38);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_38;
  local_48 = pcVar3;
  if ((-1 < (long)local_38) &&
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0), pcVar4 < pcVar3)) {
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (((ulong)pcVar5 & 1) == 0) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        if (((ulong)pcVar5 & 1) != 0) {
          FUN_017af13c();
          local_64 = 1;
          goto LAB_017a1d8c;
        }
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        if (((ulong)pcVar5 & 1) == 0) {
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (((ulong)pcVar5 & 1) != 0) {
            pcVar3 = "MMServiceCenter";
            _objc_getClass();
            local_c8 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR_s_getService__0269d170;
            pcVar4 = "CContactMgr";
            local_d0 = pcVar3;
            _objc_getClass();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_performSelector_withObject__026ca7c0,puVar8,pcVar4);
            _objc_retainAutoreleasedReturnValue();
            local_d8 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_performSelector__026ca7b8,PTR_s_m_nsUsrName_0269d638);
            _objc_retainAutoreleasedReturnValue();
            local_e8 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
            if (pcVar3 != (char *)0x0) {
              if (DAT_028e41f8 == (char *)0x0) {
                pcVar3 = "ThemeBoxRedeemViewController";
                _objc_getClass();
                DAT_028e41f8 = pcVar3;
              }
              pcVar3 = DAT_028e41f8;
              _objc_retainAutoreleaseReturnValue();
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithWXID__026b4198,local_e8);
              local_f0 = pcVar3;
              if (DAT_028e41d8 == (char *)0x0) {
                pcVar3 = "WCRefineHelper";
                _objc_getClass();
                DAT_028e41d8 = pcVar3;
              }
              pcVar3 = DAT_028e41d8;
              _objc_retainAutoreleaseReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_findTopVC_0269d290);
              _objc_retainAutoreleasedReturnValue();
              local_f8 = pcVar3;
              if ((pcVar3 != (char *)0x0) && (local_f0 != (char *)0x0)) {
                FUN_017af468();
                if (((ulong)pcVar3 & 1) == 0) {
                  pcVar3 = local_f8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f8,PTR_s_navigationController_0269d458);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_release_02578630)();
                  if (pcVar3 == (char *)0x0) {
                    puVar8 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
                    _objc_alloc();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar8,PTR_s_initWithRootViewController__0269d2a0,local_f0);
                    local_108 = puVar8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar8,PTR_s_setModalPresentationStyle__0269d2a8,2);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f8,PTR_s_presentViewController_animated_c_0269d2b0,local_108,1,
                               0);
                    _objc_storeStrong(&local_108,0);
                  }
                  else {
                    pcVar3 = local_f8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f8,PTR_s_navigationController_0269d458);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(pcVar3);
                  }
                }
                else {
                  puVar8 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
                  _objc_alloc();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar8,PTR_s_initWithRootViewController__0269d2a0,local_f0);
                  local_100 = puVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar8,PTR_s_setModalPresentationStyle__0269d2a8,2);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f8,PTR_s_presentViewController_animated_c_0269d2b0,local_100,1,0)
                  ;
                  _objc_storeStrong(&local_100,0);
                }
              }
              _objc_storeStrong(&local_f8);
              _objc_storeStrong(&local_f0,0);
            }
            local_64 = 1;
            _objc_storeStrong(&local_e8);
            _objc_storeStrong(&local_e0,0);
            _objc_storeStrong(&local_d8,0);
            _objc_storeStrong(&local_d0,0);
            goto LAB_017a1d8c;
          }
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (((ulong)pcVar5 & 1) != 0) {
            pcVar7 = &cf_WCRefineAvatarCornerBeautifyViewController;
            _NSClassFromString();
            local_110 = pcVar7;
            if (pcVar7 != (cfstringStruct *)0x0) {
              _objc_alloc_init();
              local_118 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
              if (DAT_028e41d8 == (char *)0x0) {
                pcVar3 = "WCRefineHelper";
                _objc_getClass();
                DAT_028e41d8 = pcVar3;
              }
              pcVar3 = DAT_028e41d8;
              _objc_retainAutoreleaseReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_findTopVC_0269d290);
              _objc_retainAutoreleasedReturnValue();
              local_129 = 0;
              bVar2 = false;
              uVar1 = pcVar3 != (char *)0x0;
              local_120 = pcVar3;
              if ((bool)uVar1) {
                (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_navigationController_0269d458);
                _objc_retainAutoreleasedReturnValue();
                bVar2 = pcVar3 != (char *)0x0;
                local_129 = uVar1;
                local_128 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                uVar1 = local_129;
              }
              local_129 = uVar1;
              if (bVar2) {
                pcVar3 = local_120;
                (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_navigationController_0269d458)
                ;
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar3);
              }
              _objc_storeStrong(&local_120);
              _objc_storeStrong(&local_118,0);
            }
            local_64 = 1;
            goto LAB_017a1d8c;
          }
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (((ulong)pcVar5 & 1) != 0) {
            pcVar7 = &cf_WCRefineMessageBannerBeautifyViewController;
            _NSClassFromString();
            local_138 = pcVar7;
            if (pcVar7 != (cfstringStruct *)0x0) {
              _objc_alloc_init();
              local_140 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
              if (DAT_028e41d8 == (char *)0x0) {
                pcVar3 = "WCRefineHelper";
                _objc_getClass();
                DAT_028e41d8 = pcVar3;
              }
              pcVar3 = DAT_028e41d8;
              _objc_retainAutoreleaseReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_findTopVC_0269d290);
              _objc_retainAutoreleasedReturnValue();
              local_151 = 0;
              bVar2 = false;
              uVar1 = pcVar3 != (char *)0x0;
              local_148 = pcVar3;
              if ((bool)uVar1) {
                (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_navigationController_0269d458);
                _objc_retainAutoreleasedReturnValue();
                bVar2 = pcVar3 != (char *)0x0;
                local_151 = uVar1;
                local_150 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                uVar1 = local_151;
              }
              local_151 = uVar1;
              if (bVar2) {
                pcVar3 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_navigationController_0269d458)
                ;
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar3);
              }
              _objc_storeStrong(&local_148);
              _objc_storeStrong(&local_140,0);
            }
            local_64 = 1;
            goto LAB_017a1d8c;
          }
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (((ulong)pcVar5 & 1) != 0) {
            pcVar7 = &cf_WCRefineAssistFunctionViewController;
            _NSClassFromString();
            local_160 = pcVar7;
            if (pcVar7 != (cfstringStruct *)0x0) {
              _objc_alloc_init();
              local_168 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
              if (DAT_028e41d8 == (char *)0x0) {
                pcVar3 = "WCRefineHelper";
                _objc_getClass();
                DAT_028e41d8 = pcVar3;
              }
              pcVar3 = DAT_028e41d8;
              _objc_retainAutoreleaseReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_findTopVC_0269d290);
              _objc_retainAutoreleasedReturnValue();
              local_179 = 0;
              bVar2 = false;
              uVar1 = pcVar3 != (char *)0x0;
              local_170 = pcVar3;
              if ((bool)uVar1) {
                (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_navigationController_0269d458);
                _objc_retainAutoreleasedReturnValue();
                bVar2 = pcVar3 != (char *)0x0;
                local_179 = uVar1;
                local_178 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                uVar1 = local_179;
              }
              local_179 = uVar1;
              if (bVar2) {
                pcVar3 = local_170;
                (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_navigationController_0269d458)
                ;
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                dVar6 = _dispatch_time(0,300000000);
                puVar8 = PTR___dispatch_main_q_02578680;
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = local_168;
                local_1a8 = PTR___NSConcreteStackBlock_02578660;
                local_1a0 = 0xc2000000;
                local_19c = 0;
                local_198 = FUN_017af70c;
                local_190 = &DAT_02578c20;
                (*(code *)PTR__objc_retain_02578638)();
                local_188 = pcVar7;
                _dispatch_after(dVar6,puVar8,&local_1a8);
                (*(code *)PTR__objc_release_02578630)(puVar8);
                _objc_storeStrong(&local_188,0);
              }
              _objc_storeStrong(&local_170);
              _objc_storeStrong(&local_168,0);
            }
            local_64 = 1;
            goto LAB_017a1d8c;
          }
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_38);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          if (((ulong)pcVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineIconNameCaptureSupport_026cec30,
                       PTR_s_toggleFromSuperFloat_026b1a58);
            local_64 = 1;
            goto LAB_017a1d8c;
          }
          goto LAB_017a1d68;
        }
        if (DAT_028e41f0 == (char *)0x0) {
          pcVar3 = "ThemeExchangeViewController";
          _objc_getClass();
          DAT_028e41f0 = pcVar3;
        }
        pcVar3 = DAT_028e41f0;
        _objc_retainAutoreleaseReturnValue();
        _objc_alloc_init();
        local_b8 = pcVar3;
        if (DAT_028e41d8 == (char *)0x0) {
          pcVar3 = "WCRefineHelper";
          _objc_getClass();
          DAT_028e41d8 = pcVar3;
        }
        pcVar3 = DAT_028e41d8;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = pcVar3 != (char *)0x0;
        local_c0 = pcVar3;
        if (bVar2) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        local_64 = (uint)bVar2;
        _objc_storeStrong(&local_c0);
        _objc_storeStrong(&local_b8,0);
      }
      else {
        puVar8 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
        if (((ulong)puVar8 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_presentPluginVersionBlockedUpdat_0269db58);
          local_64 = 1;
          goto LAB_017a1d8c;
        }
        if (DAT_028e41e0 == (char *)0x0) {
          pcVar3 = "WCRefineRootViewController";
          _objc_getClass();
          DAT_028e41e0 = pcVar3;
        }
        pcVar3 = DAT_028e41e0;
        _objc_retainAutoreleaseReturnValue();
        _objc_alloc_init();
        local_a8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
        if (DAT_028e41d8 == (char *)0x0) {
          pcVar3 = "WCRefineHelper";
          _objc_getClass();
          DAT_028e41d8 = pcVar3;
        }
        pcVar3 = DAT_028e41d8;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = pcVar3 != (char *)0x0;
        local_b0 = pcVar3;
        if (bVar2) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        local_64 = (uint)bVar2;
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_a8,0);
      }
    }
    else {
      pcVar7 = &cf_WCRefineSearchSettingsViewController;
      _NSClassFromString();
      local_60 = pcVar7;
      if (pcVar7 == (cfstringStruct *)0x0) {
        (*DAT_028e4100)(local_28,local_30,local_38);
        local_64 = 1;
        goto LAB_017a1d8c;
      }
      _objc_alloc_init();
      local_70 = pcVar7;
      if (DAT_028e41d8 == (char *)0x0) {
        pcVar3 = "WCRefineHelper";
        _objc_getClass();
        DAT_028e41d8 = pcVar3;
      }
      pcVar3 = DAT_028e41d8;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar3;
      if ((pcVar3 == (char *)0x0) || (local_70 == (cfstringStruct *)0x0)) {
        local_64 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
        pcVar3 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        dVar6 = _dispatch_time(0,300000000);
        puVar8 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = local_70;
        local_a0 = PTR___NSConcreteStackBlock_02578660;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_017af0c0;
        local_88 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = pcVar7;
        _dispatch_after(dVar6,puVar8,&local_a0);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        local_64 = 1;
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
    }
    if (local_64 != 0) goto LAB_017a1d8c;
  }
LAB_017a1d68:
  (*DAT_028e4100)(local_28,local_30,local_38);
  local_64 = 0;
LAB_017a1d8c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

