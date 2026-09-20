// listVoiceDetailForItem: @ 015b15bc

/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineVoicePackStore::listVoiceDetailForItem_
          (WCRefineVoicePackStore *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  double in_d0;
  ID local_60;
  ID local_58;
  ID local_50 [2];
  cfstringStruct *local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isDirectory_026b0ba0),
     (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_cachedDurationSecondsForItem__026b0c48,local_30);
    if (0.0 <= in_d0) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(in_d0,local_20,PTR_s_formattedDuration__026b0c50);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
      if (IVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_50[0]);
      }
      _objc_storeStrong(local_50,0);
    }
    IVar3 = local_20;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fileSize_026a1640);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_formattedSize__026b0c58,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
    if (IVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_58);
    }
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_listExtensionForItem__026b0c60,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
    if (IVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_60);
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_componentsJoinedByString__0269d140,&::cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

