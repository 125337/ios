// isDocumentNameProtected: @ 019792f0

/* Function Stack Size: 0x18 bytes */

bool WCRFileManagerState::isDocumentNameProtected_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_WCRefine);
    if ((uVar1 & 1) == 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_protectedDocumentNames_026ba1f8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = (byte)IVar3 & 1;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

