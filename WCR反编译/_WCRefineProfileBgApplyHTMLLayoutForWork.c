// _WCRefineProfileBgApplyHTMLLayoutForWork @ 01cf22d8

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _WCRefineProfileBgApplyHTMLLayoutForWork(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_138;
  undefined *local_118;
  bool local_e1;
  undefined *local_e0;
  bool local_d1;
  undefined *local_d0;
  bool local_c1;
  undefined *local_c0;
  bool local_b1;
  undefined *local_b0;
  bool local_a1;
  undefined *local_a0;
  bool local_91;
  undefined *local_90;
  bool local_81;
  undefined *local_80;
  bool local_71;
  undefined *local_70;
  bool local_61;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  _WCRefineProfileBgSafePathComponent();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_30;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setProfileBgHTMLHeight__026c3928);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setProfileBgHTMLAutoRawHeight__026c3930);
    DAT_028e4700 = 0;
    local_3c = 1;
  }
  else {
    lVar1 = local_30;
    FUN_01cf1aa0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dataWithContentsOfFile__0269e0b8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      FUN_01cf30a8(local_38);
      local_3c = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_48,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_50 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar2 & 1) == 0) {
        local_118 = *(undefined **)PTR____NSDictionary0___02578288;
      }
      else {
        local_118 = local_50;
      }
      FUN_01cf0474();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
      if (local_118 == (undefined *)0x0) {
        FUN_01cf30a8(local_38);
        local_3c = 1;
      }
      else {
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar2 == (undefined *)0x0) {
          param_1 = 0;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setProfileBgHTMLHeight__026c3928);
        }
        else {
          puVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setProfileBgHTMLHeight__026c3928);
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_autoRawHeight);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          local_138 = 0;
        }
        else {
          local_60 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_autoRawHeight);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_138 = param_1;
        }
        local_61 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setProfileBgHTMLAutoRawHeight__026c3930);
        if (local_61) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_autoRawTrusted);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        DAT_028e4700 = SUB81(puVar3,0);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetX);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          local_158 = 0;
        }
        else {
          local_70 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetX);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_158 = local_138;
        }
        local_71 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setProfileBgOffsetX__026c3980);
        if (local_71) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetY);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          local_168 = 0;
        }
        else {
          local_80 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetY);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_168 = local_158;
        }
        local_81 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setProfileBgOffsetY__026c3970);
        if (local_81) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_scale);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          local_178 = 0x3ff0000000000000;
        }
        else {
          local_90 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_scale);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_178 = local_168;
        }
        local_91 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setProfileBgScale__026c3990);
        if (local_91) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_alpha);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          local_188 = 0x3ff0000000000000;
        }
        else {
          local_a0 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_alpha);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_188 = local_178;
        }
        local_a1 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setProfileBgAlpha__026c39a0);
        if (local_a1) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetXNight);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_profileBgOffsetX_026a8da0);
          local_198 = local_188;
        }
        else {
          local_b0 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetXNight);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_198 = local_188;
        }
        local_b1 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setProfileBgOffsetXNight__026c3988);
        if (local_b1) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetYNight);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_profileBgOffsetY_026a8d98);
          local_1a8 = local_198;
        }
        else {
          local_c0 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetYNight);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1a8 = local_198;
        }
        local_c1 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setProfileBgOffsetYNight__026c3978);
        if (local_c1) {
          (*(code *)PTR__objc_release_02578630)(local_c0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_scaleNight);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_profileBgScale_026a8da8);
          local_1b8 = local_1a8;
        }
        else {
          local_d0 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_scaleNight);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1b8 = local_1a8;
        }
        local_d1 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setProfileBgScaleNight__026c3998);
        if (local_d1) {
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_alphaNight);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_profileBgAlpha_026a8db0);
          local_1c8 = local_1b8;
        }
        else {
          local_e0 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_alphaNight);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1c8 = local_1b8;
        }
        local_e1 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c8,local_38,PTR_s_setProfileBgAlphaNight__026c39a8);
        if (local_e1) {
          (*(code *)PTR__objc_release_02578630)(local_e0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_3c = 0;
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

