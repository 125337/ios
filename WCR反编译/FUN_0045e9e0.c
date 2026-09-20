// FUN_0045e9e0 @ 0045e9e0

byte FUN_0045e9e0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_78 [2];
  ulong local_68 [2];
  ulong local_58 [2];
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) == 0) || (local_30 == 0)) {
    local_21 = 0;
    local_40 = 1;
  }
  else {
    local_48 = 0;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_pageWrapPid);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_48 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_isEqualToString__0269ccc8,&cf_custom_emoticon_pid);
    if ((uVar3 & 1) == 0) {
      uVar2 = local_48;
      FUN_004514e4();
      uVar3 = local_48;
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((uVar3 & 1) == 0) ||
           (uVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
           uVar3 == 0)) {
          local_58[0] = 0;
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_valueForKey__0269d128,&cf_emoticonWrap);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_58[0];
          local_58[0] = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_68[0] = 0;
          uVar2 = local_58[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58[0],PTR_s_valueForKey__0269d128,&cf_m_emojiInfo);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_68[0];
          local_68[0] = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_78[0] = 0;
          uVar2 = local_68[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68[0],PTR_s_valueForKey__0269d128,&cf_productId);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_78[0];
          local_78[0] = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_78[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78[0],PTR_s_isEqualToString__0269ccc8,&cf_custom_emoticon_pid);
          if ((uVar3 & 1) == 0) {
            uVar2 = local_78[0];
            FUN_004514e4();
            uVar3 = local_78[0];
            if ((uVar2 & 1) == 0) {
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
              if (((uVar3 & 1) == 0) ||
                 (uVar3 = local_78[0],
                 (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_length_0269cca0),
                 uVar3 == 0)) {
                puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isLocalWrap__026a10b0,
                           local_58[0]);
                local_21 = (byte)puVar1 & 1;
              }
              else {
                local_21 = 0;
              }
            }
            else {
              local_21 = 1;
            }
          }
          else {
            local_21 = 0;
          }
          local_40 = 1;
          _objc_storeStrong(local_78);
          _objc_storeStrong(local_68,0);
          _objc_storeStrong(local_58,0);
        }
        else {
          local_21 = 0;
          local_40 = 1;
        }
      }
      else {
        local_21 = 1;
        local_40 = 1;
      }
    }
    else {
      local_21 = 0;
      local_40 = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

