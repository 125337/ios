// randomAvatarFrameRelativePathFromCandidates:fallback: @ 01819478

/* Function Stack Size: 0x20 bytes */

ID WCRefineAvatarCornerBeautifyViewController::randomAvatarFrameRelativePathFromCandidates_fallback_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  u_int32_t uVar1;
  ID IVar2;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  local_18 = local_38;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    uVar1 = _arc4random_uniform((u_int32_t)IVar2);
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

