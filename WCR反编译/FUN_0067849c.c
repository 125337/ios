// FUN_0067849c @ 0067849c

void FUN_0067849c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *local_78;
  undefined *local_70;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  uint local_48;
  ulong local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_30 == (undefined *)0x0;
  (*(code *)PTR__objc_release_02578630)();
  if (((ulong)puVar3 & 1) == 0 || bVar1) {
    local_48 = 1;
  }
  else {
    FUN_00678c18();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_30;
    local_50 = puVar2;
    FUN_00678108(local_30,PTR_s_fromUserName_026a37c0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    local_58 = puVar3;
    FUN_00678108(local_30,PTR_s_pattedUserName_026a37c8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = local_30;
      FUN_00678108(local_30,PTR_s_pattedUsername_026a37e8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_60;
      local_60 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar4 = local_38;
    FUN_00678300();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_50;
    local_68 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (((puVar2 == (undefined *)0x0) ||
        (puVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
        puVar2 == (undefined *)0x0)) ||
       (puVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
       puVar2 == (undefined *)0x0)) {
      local_48 = 1;
    }
    else {
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_50);
      if ((((ulong)puVar2 & 1) == 0) ||
         (puVar2 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_50),
         ((ulong)puVar2 & 1) != 0)) {
        local_48 = 1;
      }
      else {
        uVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (uVar4 == 0) {
          _objc_storeStrong(&local_68,local_58);
        }
        puVar2 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                   local_58);
        if ((((ulong)puVar2 & 1) == 0) &&
           (puVar2 = PTR_WCRefineHelper_026ce000,
           (*(code *)PTR__objc_msgSend_02578628)
                     (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                      local_68), ((ulong)puVar2 & 1) == 0)) {
          uVar4 = local_68;
          FUN_00678dd0(local_68,local_58);
          if ((uVar4 & 1) == 0) {
            puVar3 = local_30;
            FUN_0067915c();
            _objc_retainAutoreleasedReturnValue();
            local_70 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            if (puVar3 == (undefined *)0x0) {
              puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_________0f);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = local_70;
              local_70 = puVar2;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_back_________);
            _objc_retainAutoreleasedReturnValue();
            local_78 = puVar2;
            FUN_00679508();
            bVar1 = ((ulong)puVar2 & 1) != 0;
            if (bVar1) {
              FUN_006797a4(local_28,local_58,local_68);
            }
            local_48 = (uint)!bVar1;
            _objc_storeStrong(&local_78);
            _objc_storeStrong(&local_70,0);
          }
          else {
            local_48 = 1;
          }
        }
        else {
          local_48 = 1;
        }
      }
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

