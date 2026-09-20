// wcr_peopleDidRefresh: @ 01dd61d4

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsViewController::wcr_peopleDidRefresh_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  uint local_84;
  cfstringStruct *local_78;
  ID local_60;
  ID local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_overviewMode_026af898);
  if ((IVar3 & 1) == 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isGroup_026af768);
    if ((IVar3 & 1) == 0) {
      local_2c = 1;
    }
    else {
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_object_0269ddb0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar6 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_41 = ((ulong)pcVar6 & 1) == 0;
      if (local_41) {
        local_78 = &::cf___;
      }
      else {
        local_78 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_object_0269ddb0);
        _objc_retainAutoreleasedReturnValue();
        local_40 = local_78;
      }
      local_41 = !local_41;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = local_78;
      if (local_41) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      bVar2 = false;
      bVar1 = false;
      local_84 = 0;
      if (pcVar4 != (cfstringStruct *)0x0) {
        local_50 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatUsr_026c5438);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        IVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar4 = local_38;
        local_84 = 0;
        if (IVar3 != 0) {
          local_60 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatUsr_026c5438);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isEqualToString__0269ccc8);
          local_84 = (uint)pcVar4 ^ 1;
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      if ((local_84 & 1) == 0) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sessionResult_026c5440);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        puVar5 = PTR_WCRefineSessionStatsEngine_026ced48;
        if (IVar3 == 0) {
          local_2c = 1;
        }
        else {
          IVar3 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sessionResult_026c5440);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_fillPeopleSnapshot__026c4d58);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadBoard_026c54f8);
          local_2c = 0;
        }
      }
      else {
        local_2c = 1;
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

