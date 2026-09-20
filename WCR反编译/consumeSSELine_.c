// consumeSSELine: @ 009c6750

/* Function Stack Size: 0x18 bytes */

void WCRefineAIRequest::consumeSSELine_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  undefined *local_d8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  ID local_90;
  ID local_88;
  undefined *local_80;
  undefined *local_78;
  bool local_69;
  undefined *local_68;
  undefined *local_60;
  ulong local_58;
  ulong local_50;
  uint local_44;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_data_);
  if ((uVar3 & 1) == 0) {
    local_44 = 1;
  }
  else {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_009af3fc();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((uVar3 == 0) ||
       (uVar3 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf__DONE_),
       (uVar3 & 1) != 0)) {
      local_44 = 1;
    }
    else {
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_dataUsingEncoding__026a12e8,4);
      _objc_retainAutoreleasedReturnValue();
      local_69 = false;
      local_58 = uVar3;
      if (uVar3 == 0) {
        local_d8 = (undefined *)0x0;
      }
      else {
        local_d8 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                   PTR_s_JSONObjectWithData_options_error_026ca480,uVar3,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_d8;
      }
      local_69 = uVar3 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_d8;
      if ((local_69 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      puVar5 = local_60;
      FUN_009c6c6c();
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
      IVar7 = local_28;
      puVar2 = local_78;
      if (puVar5 == (undefined *)0x0) {
        puVar2 = local_60;
        FUN_009c716c(local_60,1);
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
        if (puVar2 != (undefined *)0x0) {
          IVar7 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fullText_026aae98);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar7);
          IVar7 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chunkBlock_026aaeb0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR___dispatch_main_q_02578680;
          local_88 = IVar7;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          IVar7 = local_88;
          local_b8 = PTR___NSConcreteStackBlock_02578660;
          local_b0 = 0xc2000000;
          local_ac = 0;
          local_a8 = FUN_009c7984;
          local_a0 = &DAT_0257ca68;
          (*(code *)PTR__objc_retain_02578638)();
          puVar1 = local_80;
          local_90 = IVar7;
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = puVar1;
          _dispatch_async(puVar5,&local_b8);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_storeStrong(&local_98);
          _objc_storeStrong(&local_90,0);
          _objc_storeStrong(&local_88,0);
        }
        local_44 = (uint)(puVar2 == (undefined *)0x0);
        _objc_storeStrong(&local_80,0);
      }
      else {
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusCode_026a1578);
        FUN_009c701c(puVar2,IVar6);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_finishText__026aaea8);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_44 = 1;
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

