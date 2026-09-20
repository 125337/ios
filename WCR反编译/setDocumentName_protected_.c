// setDocumentName:protected: @ 01979420

/* Function Stack Size: 0x1c bytes */

void WCRFileManagerState::setDocumentName_protected_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_38;
  undefined4 local_30;
  byte local_29;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_30 = 1;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_WCRefine);
    if ((uVar1 & 1) == 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_protectedDocumentNames_026ba1f8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((local_29 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObject__0269d678,local_28);
      }
      else {
        IVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,local_28);
        if ((IVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_28);
        }
      }
      puVar4 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_38,0);
      local_30 = 0;
    }
    else {
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

