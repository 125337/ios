// payWebURLValueFromView: @ 00fe084c

/* Function Stack Size: 0x18 bytes */

ID WCRefineIconNameCaptureSupport::payWebURLValueFromView_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1a8;
  undefined *local_1a0;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  int local_e4;
  ulong local_e0;
  SEL local_d8;
  ID local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  uVar2 = local_e0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_c8 = 0;
    local_e4 = 1;
  }
  else {
    uVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_getImageUrlString_026ad3e8);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_getImageUrlString_026ad3e8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_f0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((uVar2 & 1) == 0) ||
         (uVar6 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
         uVar2 = local_f0, uVar6 == 0)) {
        uVar2 = local_f0;
        puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60)
        ;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar6 = local_f0;
        if ((uVar2 & 1) == 0) {
          local_e4 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = uVar6;
          local_e4 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = uVar2;
        local_e4 = 1;
      }
      _objc_storeStrong(&local_f0,0);
      if (local_e4 != 0) goto LAB_00fe0dc8;
    }
    _memset(auStack_138,0,0x40);
    local_c0 = &cf_imageDownloadUrl;
    local_b8 = &cf_lightModeUrl;
    local_b0 = &cf_darkModeUrl;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a0 != (undefined *)0x0) {
      lVar5 = *local_128;
      local_1a8 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,puVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + (long)local_1a8 * 8);
          uVar6 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_f8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
          local_140 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar2 = local_140;
          if ((uVar6 & 1) == 0) {
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            uVar6 = uVar2 & 0xffffffff;
            if ((uVar2 & 1) != 0) {
              uVar4 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
              uVar2 = local_140;
              uVar6 = 0;
              if (uVar4 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_c8 = uVar2;
                uVar6 = 1;
                local_e4 = 1;
                goto LAB_00fe0ce0;
              }
            }
            local_e4 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = uVar2;
            uVar6 = 1;
            local_e4 = 1;
          }
LAB_00fe0ce0:
          _objc_storeStrong(uVar6,&local_140,0);
          if (local_e4 != 0) goto LAB_00fe0d64;
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1a8 = (undefined *)0x0;
      } while (local_1a0 != (undefined *)0x0);
    }
    local_e4 = 0;
LAB_00fe0d64:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_e4 == 0) {
      local_c8 = 0;
      local_e4 = 1;
    }
  }
LAB_00fe0dc8:
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

