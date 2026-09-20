// FUN_00541958 @ 00541958

byte FUN_00541958(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte local_88;
  byte local_74;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_NKb_gvQb);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_bDd),
       (uVar2 & 1) == 0)) {
      FUN_005422c4();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      FUN_0054245c(uVar2,PTR_s_curLanguageIsChineseTraditional_026a4d50);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_38;
        FUN_0054245c(local_38,PTR_s_curLanguageIsEnglish_026a4d58);
        if ((uVar2 & 1) == 0) {
          local_11 = 0;
        }
        else {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf_ChoosefromPhotos);
          local_88 = 1;
          if ((uVar2 & 1) == 0) {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_isEqualToString__0269ccc8,&cf_Camera);
            local_88 = 1;
            if ((uVar2 & 1) == 0) {
              uVar2 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_isEqualToString__0269ccc8,&cf_Takeaphotoorvideo);
              local_88 = (byte)uVar2;
            }
          }
          local_11 = local_88 & 1;
        }
      }
      else {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isEqualToString__0269ccc8,&cf__Kb_jv__xd);
        local_74 = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_isEqualToString__0269ccc8,&cf__Kb_jvQxd);
          local_74 = 1;
          if ((uVar2 & 1) == 0) {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_be);
            local_74 = (byte)uVar2;
          }
        }
        local_11 = local_74 & 1;
      }
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      local_11 = 1;
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

