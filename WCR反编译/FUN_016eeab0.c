// FUN_016eeab0 @ 016eeab0

void FUN_016eeab0(long param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  byte local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLoadingState__026b3440,0);
  if (*(long *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_showResultWithMessage_isSuccess__026b3438,
                 &cf_gRhVeT_,0);
    }
    else {
      local_38 = 0;
      local_48 = 0;
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,*(undefined8 *)(param_1 + 0x30),0,
                 &local_48);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_38,local_48);
      local_40 = pcVar2;
      if (local_38 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_success);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_4d = (byte)pcVar3;
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_msg);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_c0 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = local_c0;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_d8 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = local_d8;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_showResultWithMessage_isSuccess__026b3438,
                   puVar4,local_4d & 1);
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
        _objc_storeStrong(&local_58,0);
        local_4c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_showResultWithMessage_isSuccess__026b3438,
                   &cf_gT_1Y_,0);
        local_4c = 1;
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_showResultWithMessage_isSuccess__026b3438,uVar1,0);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  return;
}

