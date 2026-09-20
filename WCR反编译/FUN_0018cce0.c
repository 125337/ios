// FUN_0018cce0 @ 0018cce0

byte FUN_0018cce0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_40;
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
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_0018d720();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_hideContactsChatsOnlyEnabled_0269fc60);
      if ((((ulong)puVar1 & 1) == 0) ||
         (uVar2 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_NJ_YvgS)
         , (uVar2 & 1) == 0)) {
        puVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hideContactsGroupChatsEnabled_0269fc68)
        ;
        if ((((ulong)puVar1 & 1) == 0) ||
           (uVar2 = local_38,
           (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf__J),
           (uVar2 & 1) == 0)) {
          puVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hideContactsTagsEnabled_0269fc70);
          if ((((ulong)puVar1 & 1) == 0) ||
             (uVar2 = local_38,
             (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_h__)
             , (uVar2 & 1) == 0)) {
            puVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_hideContactsOfficialAccountsEnab_0269fc78);
            if ((((ulong)puVar1 & 1) == 0) ||
               (uVar2 = local_38,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_38,PTR_s_isEqualToString__0269ccc8,&cf_lQOS), (uVar2 & 1) == 0)) {
              puVar1 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_hideContactsServiceAccountsEnabl_0269fc80);
              if ((((ulong)puVar1 & 1) == 0) ||
                 (uVar2 = local_38,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_38,PTR_s_isEqualToString__0269ccc8,&cf_gRS), (uVar2 & 1) == 0)) {
                puVar1 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_hideContactsWeComContactsEnabled_0269fc88);
                if ((((ulong)puVar1 & 1) == 0) ||
                   (uVar2 = local_38,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_38,PTR_s_isEqualToString__0269ccc8,&cf_ON_OT_N),
                   (uVar2 & 1) == 0)) {
                  local_11 = 0;
                }
                else {
                  local_11 = 1;
                }
              }
              else {
                local_11 = 1;
              }
            }
            else {
              local_11 = 1;
            }
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

