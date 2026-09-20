// FUN_00601d8c @ 00601d8c

void FUN_00601d8c(undefined8 param_1,double param_2,double param_3,double param_4,undefined *param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint local_3fc;
  double local_248;
  double local_150;
  undefined *local_138;
  undefined *local_130;
  char *local_128;
  char *local_120;
  undefined *local_118;
  long local_110 [2];
  undefined1 *local_100;
  undefined1 *local_f8;
  byte local_e9;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0 [2];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  char *local_88;
  char *local_80;
  uint local_74;
  undefined *local_70;
  long local_68;
  byte local_51;
  undefined *local_50 [3];
  ulong local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_6;
  local_28 = param_5;
  _objc_storeStrong(&local_38,param_7);
  (*DAT_028cb8d0)(local_28,local_30,local_38);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_50[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_navigationShowAvatar_026a0ac0);
  local_51 = (byte)puVar2;
  local_68 = 4;
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f6de);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar2;
  if (((local_51 & 1) == 0) || (local_68 != 3)) {
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHidden__026ca970,1);
      FUN_0060cb94(local_70);
    }
    local_74 = 1;
    goto LAB_0060379c;
  }
  pcVar3 = "MMServiceCenter";
  _objc_getClass(0);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "MMLanguageMgr";
  _objc_getClass();
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (local_80 == (char *)0x0) {
    if (local_70 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setHidden__026ca970,1);
      FUN_0060cb94(local_70);
    }
    local_74 = 1;
  }
  else {
    pcVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_getStringForCurLanguage__0269f768,&cf_TaskBar_More);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       (uVar6 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,pcVar3),
       (uVar6 & 1) == 0)) {
      if (local_70 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setHidden__026ca970,1);
        FUN_0060cb94(local_70);
      }
      local_74 = 1;
    }
    else {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f6de);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
        _objc_alloc_init();
        puVar2 = local_90;
        local_90 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setTag__026caa80,0x24f6de);
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setContentMode__026ca8e0,2);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_90);
      }
      local_98 = (undefined *)0x0;
      puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_a0 != (undefined *)0x0) {
        puVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_rootViewController_026ca820);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = puVar2;
        if (puVar2 != (undefined *)0x0) {
          puVar7 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_performSelector_withObject__026ca7c0,
                     PTR_s_findMsgViewControllerFromViewCon_026a5dc0,puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_98;
          local_98 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        _objc_storeStrong(&local_a8,0);
      }
      if (local_98 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,1);
        FUN_0060cb94(local_90);
        local_74 = 1;
      }
      else {
        local_b0 = (undefined *)0x0;
        pcVar9 = &cf_GetContact;
        _NSSelectorFromString();
        puVar2 = local_98;
        local_b8 = pcVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_respondsToSelector__026ca818,pcVar9);
        if (((ulong)puVar2 & 1) == 0) {
          pcVar9 = &cf_getChatContact;
          _NSSelectorFromString();
          puVar2 = local_98;
          local_c0 = pcVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_respondsToSelector__026ca818,pcVar9);
          if (((ulong)puVar2 & 1) != 0) {
            puVar7 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_performSelector__026ca7b8,local_c0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar2 = local_b0;
            local_b0 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
        }
        else {
          puVar7 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_performSelector__026ca7b8,local_b8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_b0;
          local_b0 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        if (local_b0 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,1);
          FUN_0060cb94(local_90);
          local_74 = 1;
        }
        else {
          puVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
          _objc_retainAutoreleasedReturnValue();
          local_d0[0] = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
          if (puVar2 == (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,1);
            FUN_0060cb94(local_90);
            local_74 = 1;
          }
          else {
            puVar2 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_d8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_navigationAvatarBlacklist_026a0ad8);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = puVar2;
            if ((puVar2 == (undefined *)0x0) ||
               ((*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_containsObject__0269cbb8,local_d0[0]),
               ((ulong)puVar2 & 1) == 0)) {
              local_74 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,1);
              FUN_0060cb94(local_90);
              local_74 = 1;
            }
            _objc_storeStrong(&local_e0);
            _objc_storeStrong(&local_d8,0);
            if (local_74 == 0) {
              puVar2 = local_d0[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0[0],PTR_s_containsString__0269d0b0,&cf__chatroom);
              local_e9 = (byte)puVar2;
              puVar2 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              local_100 = (undefined1 *)0x2;
              local_f8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_navigationDisplayScene_026a5e98);
              local_100 = puVar2;
              if ((local_e9 & 1) == 0) {
                if (puVar2 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) goto LAB_00602ad4;
                (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,1);
                FUN_0060cb94(local_90);
                local_74 = 1;
              }
              else if (puVar2 == (undefined1 *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,1);
                FUN_0060cb94(local_90);
                local_74 = 1;
              }
              else {
LAB_00602ad4:
                lVar10 = 9;
                _NSSearchPathForDirectoriesInDomains(9,1,1);
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar10;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_110[0] = lVar11;
                (*(code *)PTR__objc_release_02578630)(lVar10);
                if (local_110[0] == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,1);
                  FUN_0060cb94(local_90);
                  local_74 = 1;
                }
                else {
                  puVar2 = local_d0[0];
                  FUN_006132ec(local_d0[0],local_110[0],1);
                  _objc_retainAutoreleasedReturnValue();
                  local_118 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
                  if (puVar2 == (undefined *)0x0) {
                    if (DAT_028cb980 == (char *)0x0) {
                      pcVar3 = "MMHeadImageCacher";
                      _objc_getClass();
                      DAT_028cb980 = pcVar3;
                    }
                    pcVar3 = DAT_028cb980;
                    _objc_retainAutoreleaseReturnValue();
                    _objc_alloc_init();
                    local_120 = pcVar3;
                    if (pcVar3 == (char *)0x0) {
                      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,1);
                      FUN_0060cb94(local_90);
                      local_74 = 1;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar3,PTR_s_loadImageFromLocal_withCategory__026a0a08,local_d0[0],
                                 0,0);
                      _objc_retainAutoreleasedReturnValue();
                      local_128 = pcVar3;
                      if (pcVar3 == (char *)0x0) {
                        puVar2 = PTR__OBJC_CLASS___NSBundle_026ce418;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
                        _objc_retainAutoreleasedReturnValue();
                        local_130 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar2,PTR_s_pathForResource_ofType__026a3330,
                                   &cf_Expression_67_2x,&cf_png);
                        _objc_retainAutoreleasedReturnValue();
                        local_3fc = 0;
                        local_138 = puVar2;
                        if (puVar2 != (undefined *)0x0) {
                          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSFileManager_026ce158,
                                     PTR_s_defaultManager_026ca5f0);
                          _objc_retainAutoreleasedReturnValue();
                          puVar7 = puVar2;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          local_3fc = (uint)puVar7;
                          (*(code *)PTR__objc_release_02578630)(puVar2);
                        }
                        if ((local_3fc & 1) != 0) {
                          pcVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___UIImage_026cdfd0,
                                     PTR_s_imageWithContentsOfFile__0269e0e0,local_138);
                          _objc_retainAutoreleasedReturnValue();
                          pcVar3 = local_128;
                          local_128 = pcVar4;
                          (*(code *)PTR__objc_release_02578630)(pcVar3);
                        }
                        _objc_storeStrong(&local_138);
                        _objc_storeStrong(&local_130,0);
                      }
                      bVar1 = local_128 != (char *)0x0;
                      if (bVar1) {
                        FUN_0060f0f4(local_90,local_128);
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,1);
                        FUN_0060cb94(local_90);
                      }
                      local_74 = (uint)!bVar1;
                      _objc_storeStrong(&local_128,0);
                    }
                    _objc_storeStrong(&local_120,0);
                    if (local_74 == 0) goto LAB_0060301c;
                  }
                  else {
                    FUN_0060ee30(puVar2,local_90,local_118);
LAB_0060301c:
                    dVar12 = 35.0;
                    local_150 = 35.0;
                    bVar1 = false;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_50[0],PTR_s_navigationAvatarSize_026a5ea8);
                    if (dVar12 == 0.0) {
                      bVar1 = true;
                    }
                    else {
                      local_150 = dVar12;
                      if (dVar12 <= 0.0) {
                        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
                        param_3 = param_2;
                        local_150 = param_4 * DAT_02323d00;
                      }
                    }
                    if (bVar1) {
                      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,1);
                      FUN_0060cb94(local_90);
                      local_74 = 1;
                    }
                    else {
                      dVar13 = 0.0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_50[0],PTR_s_navigationAvatarHorizontalOffset_026a5f00);
                      dVar12 = dVar13;
                      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
                      dVar13 = (param_3 - local_150) / 2.0 + dVar13;
                      dVar14 = 0.0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_50[0],PTR_s_navigationAvatarVerticalOffset_026a5f08);
                      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
                      dVar15 = (dVar12 - local_150) / 2.0 + -dVar14;
                      dVar12 = local_150;
                      dVar14 = local_150;
                      FUN_0060df68();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (dVar13,dVar15,dVar12,dVar14,local_90,PTR_s_setFrame__026ca960);
                      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHidden__026ca970,0);
                      dVar12 = 0.0;
                      local_248 = 0.0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_50[0],PTR_s_navigationAvatarRadius_026a5f18);
                      if (0.0 < dVar12) {
                        local_248 = (local_150 / 2.0) * dVar12;
                      }
                      if (local_248 <= 0.0) {
                        puVar2 = local_90;
                        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)(0);
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_90;
                        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                      }
                      else {
                        puVar2 = local_90;
                        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)(local_248);
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        puVar2 = local_90;
                        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                      }
                      FUN_0060cb94(local_90);
                      local_74 = 0;
                    }
                  }
                  _objc_storeStrong(&local_118,0);
                }
                _objc_storeStrong(local_110,0);
              }
              _objc_storeStrong(&local_f8,0);
            }
          }
          _objc_storeStrong(local_d0,0);
        }
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_80,0);
LAB_0060379c:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  return;
}

