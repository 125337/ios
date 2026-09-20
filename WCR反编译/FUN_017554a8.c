// FUN_017554a8 @ 017554a8

void FUN_017554a8(long param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  cfstringStruct *local_b0;
  cfstringStruct *local_98;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLoadingState__026b3440,0);
  if (*(long *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_showResultWithMessage_isSuccess__026b3438,
                 &cf_QQbc1Y_gRhVeT_,0);
    }
    else {
      local_28 = 0;
      local_38 = 0;
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,*(undefined8 *)(param_1 + 0x30),0,
                 &local_38);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_28,local_38);
      local_30 = pcVar2;
      if (local_28 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        if (pcVar2 != (cfstringStruct *)0x0) {
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = pcVar4 == (cfstringStruct *)section_000000b8.segname;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (bVar1) {
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
          _objc_retainAutoreleasedReturnValue();
          local_98 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_98 = &cf_QQbcbRSvP_N__O_u;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_showResultWithMessage_isSuccess__026b3438,local_98,1);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          pcVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_b0 = &cf_QQbc1Y_hgQQbcx_f_Tcknx0;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_showResultWithMessage_isSuccess__026b3438,local_b0,0);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_showResultWithMessage_isSuccess__026b3438,
                   &cf_QQbc1Y_elggRhVT_,0);
      }
      _objc_storeStrong(&local_30);
      _objc_storeStrong(&local_28,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_handleRequestError__026b41f0,
               *(undefined8 *)(param_1 + 0x28));
  }
  return;
}

