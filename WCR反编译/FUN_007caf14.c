// FUN_007caf14 @ 007caf14

void FUN_007caf14(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  ulong local_68;
  cfstringStruct *local_60;
  ulong local_58;
  ulong local_50;
  cfstringStruct *local_48;
  uint local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    local_28 = (cfstringStruct *)0x0;
    local_40 = 1;
    goto LAB_007cb980;
  }
  pcVar3 = local_30;
  FUN_007c7d38(local_30,0x7fffffffffffffff,0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8,&cf__O);
  if ((((ulong)pcVar3 & 1) == 0) &&
     ((pcVar3 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_U_),
      ((ulong)pcVar3 & 1) == 0 &&
      (pcVar3 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_Ss),
      ((ulong)pcVar3 & 1) == 0)))) {
    lVar4 = DAT_028cccc8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc8,PTR_s_length_0269cca0);
    if ((lVar4 == 0) ||
       (pcVar3 = local_30, FUN_007cbcf8(local_30,DAT_028cccc8), ((ulong)pcVar3 & 1) == 0)) {
      uVar5 = DAT_028cccc0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc0,PTR_s_objectForKey__0269e048,&cf__O);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar5 & 1) == 0) ||
         (uVar5 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
         uVar5 == 0)) {
LAB_007cb344:
        pcVar3 = local_30;
        FUN_007cc33c();
        if (((ulong)pcVar3 & 1) == 0) {
          uVar5 = DAT_028cccc0;
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc0,PTR_s_objectForKey__0269e048,&cf_U_);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_58 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar5 & 1) == 0) ||
             (uVar5 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0), uVar5 == 0)) {
LAB_007cb5d0:
            lVar4 = DAT_028cccd8;
            (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccd8,PTR_s_length_0269cca0);
            if (lVar4 != 0) {
              pcVar3 = local_30;
              FUN_007c9cf4(lVar4);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = DAT_028cccd8;
              FUN_007c9cf4();
              _objc_retainAutoreleasedReturnValue();
              pcVar6 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8);
              (*(code *)PTR__objc_release_02578630)(lVar4);
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              if (((ulong)pcVar6 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = &cf_Ss;
                local_40 = 1;
                goto LAB_007cb920;
              }
            }
            uVar5 = DAT_028cccc0;
            (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc0,PTR_s_objectForKey__0269e048,&cf_Ss);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_68 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar5 & 1) == 0) ||
               (uVar5 = local_68,
               (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0), uVar5 == 0)) {
LAB_007cb8f0:
              local_28 = (cfstringStruct *)0x0;
            }
            else {
              pcVar3 = local_30;
              FUN_007c9cf4(uVar5);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = local_68;
              FUN_007c9cf4();
              _objc_retainAutoreleasedReturnValue();
              pcVar6 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8);
              (*(code *)PTR__objc_release_02578630)(uVar5);
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              if (((ulong)pcVar6 & 1) == 0) goto LAB_007cb8f0;
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf_Ss;
            }
            local_40 = 1;
            _objc_storeStrong(&local_68,0);
          }
          else {
            pcVar3 = local_30;
            FUN_007cc680(uVar5,local_30,local_58);
            _objc_retainAutoreleasedReturnValue();
            pcVar6 = local_30;
            local_60 = pcVar3;
            FUN_007c9cf4();
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_60;
            FUN_007c9cf4();
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isEqualToString__0269ccc8);
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            bVar1 = ((ulong)pcVar7 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf_U_;
            }
            local_40 = (uint)bVar1;
            _objc_storeStrong(&local_60,0);
            if (local_40 == 0) goto LAB_007cb5d0;
          }
LAB_007cb920:
          _objc_storeStrong(&local_58,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_U_;
          local_40 = 1;
        }
      }
      else {
        pcVar3 = local_30;
        FUN_007c9cf4(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_50;
        FUN_007c9cf4();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        if (((ulong)pcVar6 & 1) == 0) goto LAB_007cb344;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf__O;
        local_40 = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf__O;
      local_40 = 1;
    }
  }
  else {
    pcVar3 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar3;
    local_40 = 1;
  }
  _objc_storeStrong(&local_48,0);
LAB_007cb980:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

