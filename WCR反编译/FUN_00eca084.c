// FUN_00eca084 @ 00eca084

void FUN_00eca084(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_c0;
  cfstringStruct *local_60;
  ulong local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  cfstringStruct *local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_native),
     (uVar1 & 1) != 0)) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,local_40)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar5 = local_48;
    if (pcVar2 == (cfstringStruct *)0x0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_id_);
      if ((uVar1 & 1) == 0) {
        local_18 = (cfstringStruct *)0x0;
        local_34 = 1;
      }
      else {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_4c = (undefined4)uVar3;
        uVar3 = uVar3 & 0xffffffff;
        FUN_00eca784();
        if ((uVar3 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_sourceTitle);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          FUN_00ebd790();
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
          if (uVar1 == 0) {
            uVar3 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            FUN_00ebd790();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_58;
            local_58 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar1);
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
          if ((uVar1 == 0) ||
             (uVar1 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_id_),
             (uVar1 & 1) != 0)) {
            local_18 = (cfstringStruct *)0x0;
            local_34 = 1;
          }
          else {
            pcVar5 = &cf_title_;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&cf_title_,PTR_s_stringByAppendingString__0269d398,local_58);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_28;
            local_60 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_objectForKeyedSubscript__0269d098,pcVar5);
            _objc_retainAutoreleasedReturnValue();
            local_c0 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_c0 = local_60;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = local_c0;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            local_34 = 1;
            _objc_storeStrong(&local_60,0);
          }
          _objc_storeStrong(&local_58,0);
        }
        else {
          local_18 = (cfstringStruct *)0x0;
          local_34 = 1;
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar5;
      local_34 = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_18 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

