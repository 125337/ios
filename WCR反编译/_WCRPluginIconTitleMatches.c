// _WCRPluginIconTitleMatches @ 010f52cc

byte _WCRPluginIconTitleMatches(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefinePluginIconCatalog_026ce4e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_defaultTitleForItemID__026aece8,local_28
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_resolvedTitleForItemID__026aecd0,
               local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((puVar2 == (undefined *)0x0) ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_40),
       (uVar1 & 1) == 0)) {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if ((puVar2 == (undefined *)0x0) ||
         (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_48),
         (uVar1 & 1) == 0)) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_isEqualToString__0269ccc8,&cf_lp_import_local_emoticon);
        if (((uVar1 & 1) == 0) ||
           (uVar1 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf__eQh_)
           , (uVar1 & 1) == 0)) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_lp_voice_pack_unzip);
          if (((uVar1 & 1) == 0) ||
             ((uVar1 = local_30,
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_S),
              (uVar1 & 1) == 0 &&
              (uVar1 = local_30,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_isEqualToString__0269ccc8,&cf_S0RS), (uVar1 & 1) == 0)))) {
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
    local_34 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

