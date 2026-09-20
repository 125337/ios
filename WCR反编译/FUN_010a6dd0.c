// FUN_010a6dd0 @ 010a6dd0

byte FUN_010a6dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  int local_e4;
  ulong local_d8;
  ulong local_80;
  ulong local_78;
  undefined *local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_type)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_010a6348();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_010a6348();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_text);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
       uVar2 == 0)) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_61 = 0;
      if ((uVar3 & 1) == 0) {
        local_d8 = 0;
      }
      else {
        local_d8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_58 = local_d8;
      if ((long)local_d8 < 1) {
        local_21 = 0;
        local_3c = 1;
      }
      else {
        local_70 = PTR_s_GetMsg_LocalID__0269d5e8;
        if ((local_38 == 0) ||
           (uVar2 = local_38,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
           (uVar2 & 1) == 0)) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_valid);
          _objc_retainAutoreleasedReturnValue();
          local_78 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
          if ((uVar2 & 1) == 0) {
            local_e4 = 1;
          }
          else {
            uVar2 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_boolValue_026ca540);
            local_e4 = (int)uVar2;
          }
          local_21 = local_e4 != 0;
          local_3c = 1;
          _objc_storeStrong(&local_78,0);
        }
        else {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          FUN_010a6348();
          _objc_retainAutoreleasedReturnValue();
          local_80 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
          if (uVar2 == 0) {
            _objc_storeStrong(&local_80,&cf_filehelper);
          }
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,local_70,local_80,local_58);
          _objc_retainAutoreleasedReturnValue();
          local_21 = uVar2 != 0;
          (*(code *)PTR__objc_release_02578630)();
          local_3c = 1;
          _objc_storeStrong(&local_80,0);
        }
      }
    }
    else {
      local_21 = 1;
      local_3c = 1;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

