// FUN_0067ba7c @ 0067ba7c

void FUN_0067ba7c(cfstringStruct *param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_180;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ulong local_50;
  uint local_48;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*DAT_028cbcf8)(local_28,local_30,local_38);
  if ((DAT_028cbd4b & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_48 = 1;
    }
    else {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar4 = local_28;
      if (((ulong)puVar3 & 1) == 0) {
        local_48 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)pcVar4 & 1) == 0) {
          local_48 = 1;
        }
        else {
          local_50 = 0;
          pcVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
          if (((ulong)pcVar4 & 1) != 0) {
            pcVar4 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_58 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((ulong)pcVar4 & 1) != 0) {
              _objc_storeStrong(&local_50,local_58);
            }
            _objc_storeStrong(&local_58,0);
          }
          uVar5 = local_50;
          FUN_00691fc0();
          if ((uVar5 & 1) == 0) {
            local_48 = 1;
          }
          else {
            pcVar4 = local_28;
            FUN_0069224c();
            _objc_retainAutoreleasedReturnValue();
            local_60 = pcVar4;
            if (pcVar4 == (cfstringStruct *)0x0) {
              local_48 = 1;
            }
            else {
              DAT_028cbd4b = 1;
              FUN_00692410(local_28);
              pcVar4 = &cf_getChatUsername;
              _NSSelectorFromString();
              local_79 = 0;
              local_89 = 0;
              pcVar6 = local_60;
              local_68 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_respondsToSelector__026ca818,pcVar4);
              if (((ulong)pcVar6 & 1) == 0) {
                local_180 = &cf___;
              }
              else {
                local_180 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)(local_60,local_68);
                _objc_retainAutoreleasedReturnValue();
                local_79 = 1;
                local_78 = local_180;
                FUN_0067d82c();
                _objc_retainAutoreleasedReturnValue();
                local_89 = 1;
                local_88 = local_180;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_70 = local_180;
              if ((local_89 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_88);
              }
              if ((local_79 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_78);
              }
              pcVar4 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
              if (pcVar4 != (cfstringStruct *)0x0) {
                pcVar6 = local_60;
                FUN_00692550();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR_WCRefineConfig_026cdf58;
                local_98 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar2;
                FUN_0067d82c();
                _objc_retainAutoreleasedReturnValue();
                local_a0 = puVar7;
                (*(code *)PTR__objc_release_02578630)(puVar2);
                (*(code *)PTR__objc_release_02578630)();
                FUN_0067fa24();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR___dispatch_main_q_02578680;
                local_a8 = puVar3;
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = local_a0;
                local_e8 = PTR___NSConcreteStackBlock_02578660;
                local_e0 = 0xc2000000;
                local_dc = 0;
                local_d8 = FUN_006928c0;
                local_d0 = &DAT_0257b6a8;
                (*(code *)PTR__objc_retain_02578638)();
                puVar3 = local_a8;
                local_c8 = puVar7;
                (*(code *)PTR__objc_retain_02578638)();
                pcVar1 = local_70;
                local_c0 = puVar3;
                (*(code *)PTR__objc_retain_02578638)();
                pcVar6 = local_98;
                local_b8 = pcVar1;
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = pcVar6;
                _dispatch_async(puVar2,&local_e8);
                (*(code *)PTR__objc_release_02578630)(puVar2);
                _objc_storeStrong(&local_b0);
                _objc_storeStrong(&local_b8,0);
                _objc_storeStrong(&local_c0,0);
                _objc_storeStrong(&local_c8,0);
                _objc_storeStrong(&local_a8,0);
                _objc_storeStrong(&local_a0,0);
                _objc_storeStrong(&local_98,0);
              }
              else {
                DAT_028cbd4b = 0;
              }
              local_48 = (uint)(pcVar4 == (cfstringStruct *)0x0);
              _objc_storeStrong(&local_70,0);
            }
            _objc_storeStrong(&local_60,0);
          }
          _objc_storeStrong(&local_50,0);
        }
      }
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

