// FUN_005258fc @ 005258fc

void FUN_005258fc(cfstringStruct *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_128;
  cfstringStruct *local_d8;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined4 local_68;
  cfstringStruct *local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_28;
  
  local_50 = param_2;
  local_48 = param_1;
  (*DAT_028cb168)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_58 = param_1;
  FUN_0052b2cc();
  local_40 = local_58;
  if (((ulong)param_1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = 1;
  }
  else {
    puVar1 = PTR_WCRefineMomentsMonitor_026ce718;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_isDataItemMarkedDeleted__026a4720,local_48)
    ;
    local_40 = local_58;
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = 1;
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_40 = local_58;
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = 1;
      }
      else {
        pcVar3 = local_48;
        FUN_0052b368();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_d8 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_d8;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar4 = local_70;
        FUN_0052bac4();
        pcVar3 = local_58;
        if (((ulong)pcVar4 & 1) == 0) {
          pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_128 = &cf__;
          }
          else {
            local_128 = local_28;
          }
          (*(code *)PTR__objc_retain_02578638)();
          _objc_storeStrong(&local_28,0);
          _objc_autoreleaseReturnValue(local_128);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_58;
          local_78 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
          pcVar3 = local_78;
          if (pcVar4 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_40 = pcVar3;
            local_68 = 1;
          }
          else {
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_58;
            local_80 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,puVar1);
            if ((((((ulong)pcVar3 & 1) == 0) &&
                 (pcVar3 = local_58,
                 (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,local_78),
                 ((ulong)pcVar3 & 1) == 0)) &&
                (pcVar3 = local_58,
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf__),
                ((ulong)pcVar3 & 1) == 0)) &&
               ((pcVar3 = local_58,
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf__),
                ((ulong)pcVar3 & 1) == 0 &&
                (pcVar3 = local_58,
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf__),
                ((ulong)pcVar3 & 1) == 0)))) {
              pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_____);
              _objc_retainAutoreleasedReturnValue();
              local_40 = pcVar3;
            }
            else {
              pcVar3 = local_58;
              (*(code *)PTR__objc_retain_02578638)();
              local_40 = pcVar3;
            }
            local_68 = 1;
            _objc_storeStrong(&local_80,0);
          }
          _objc_storeStrong(&local_78,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_40 = pcVar3;
          local_68 = 1;
        }
        _objc_storeStrong(&local_70,0);
      }
    }
  }
  _objc_storeStrong(&local_58,0);
  _objc_autoreleaseReturnValue(local_40);
  return;
}

