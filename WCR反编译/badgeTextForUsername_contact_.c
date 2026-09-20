// badgeTextForUsername:contact: @ 010ddb28

/* Function Stack Size: 0x20 bytes */

ID WCRefineNameplateHelper::badgeTextForUsername_contact_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_208;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a0;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 local_138;
  cfstringStruct *local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  cfstringStruct *local_e8;
  undefined4 local_dc;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  int local_a4;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined8 local_88;
  undefined8 local_80;
  SEL local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_80 = 0;
  local_78 = param_2;
  local_70 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_80,param_3);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_4);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_90 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_nameplateBadgeMode_026ae888);
  local_98 = pcVar1;
  if (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 2)) {
    pcVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_nameplateBadgeCustomText_026ae890);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_1a0 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_1a0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_1b0 = &::cf__;
    }
    else {
      local_1b0 = local_a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_1b0;
    local_a4 = 1;
    _objc_storeStrong(&local_a0,0);
  }
  else {
    if (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
      pcVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_firstLabelNameForContact_usernam_026ae898,local_88,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_a4 = 0;
      }
      else {
        pcVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
        pcVar1 = local_b0;
        if (pcVar2 < (cfstringStruct *)((long)&MACH_HEADER.magic + 3)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = pcVar1;
          local_a4 = 1;
        }
        else {
          pcVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
          local_dc = 4;
          local_1c8 = pcVar2;
          if ((cfstringStruct *)((long)&MACH_HEADER.magic + 3) < pcVar2) {
            local_1c8 = (cfstringStruct *)&MACH_HEADER.cputype;
          }
          local_e8 = local_1c8;
          local_38 = 0;
          local_40 = local_1c8;
          local_30 = 0;
          local_28 = local_1c8;
          local_d0 = 0;
          local_c8 = local_1c8;
          puVar4 = PTR_s_rangeOfComposedCharacterSequence_026a44a0;
          local_d8 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_rangeOfComposedCharacterSequence_026a44a0,0,local_1c8);
          pcVar2 = local_b0;
          local_100 = &local_108;
          local_108 = 0;
          local_f8 = 0x20000000;
          local_f4 = 0x20;
          local_f0 = 0;
          local_120 = &local_128;
          local_128 = 0;
          local_118 = 0x20000000;
          local_114 = 0x20;
          local_110 = 0;
          pcVar3 = local_b0;
          local_c0 = pcVar1;
          local_b8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
          local_58 = 0;
          local_50 = 0;
          local_138 = 0;
          local_178 = PTR___NSConcreteStackBlock_02578660;
          local_170 = 0xc2000000;
          local_16c = 0;
          local_168 = FUN_010de0dc;
          local_160 = &DAT_025854e0;
          local_158 = &local_108;
          local_150 = &local_128;
          local_130 = pcVar3;
          local_60 = pcVar3;
          local_48 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_enumerateSubstringsInRange_optio_026a64a0,0,pcVar3,2,&local_178);
          pcVar1 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_substringToIndex__0269d6c0,local_120[3]);
          _objc_retainAutoreleasedReturnValue();
          local_a4 = 1;
          local_68 = pcVar1;
          __Block_object_dispose(&local_128,8);
          __Block_object_dispose(&local_108,8);
        }
      }
      _objc_storeStrong(&local_b0,0);
      if (local_a4 != 0) goto LAB_010de098;
    }
    pcVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_displayNameForContact_username__026ae8a0,local_88,local_80);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_70;
    local_180 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lastCharacterOfString__026ae8a8,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    local_188 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_208 = &::cf__;
    }
    else {
      local_208 = local_188;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_208;
    local_a4 = 1;
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_180,0);
  }
LAB_010de098:
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_68;
}

