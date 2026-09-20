// relativeDirectory @ 01dfd168

/* Function Stack Size: 0x10 bytes */

ID WCRefineSuperFloatBallWarehouseViewController::relativeDirectory(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  pcVar2 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballIconDirectory_026c5bb8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_WCRefine_SuperFloat_FloatBall;
    local_34 = 1;
    goto LAB_01dfd474;
  }
  uVar3 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
  if (((ulong)pcVar2 & 1) == 0) {
LAB_01dfd36c:
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathComponents_026ae478);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
    if (((pcVar2 == (cfstringStruct *)0x0) ||
        (pcVar2 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsObject__0269cbb8,&cf___),
        ((ulong)pcVar2 & 1) != 0)) ||
       (pcVar5 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsObject__0269cbb8,&::cf__),
       pcVar2 = local_30, ((ulong)pcVar5 & 1) != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_WCRefine_SuperFloat_FloatBall;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_34 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_30;
    local_48 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,uVar4);
    pcVar2 = local_30;
    bVar1 = ((ulong)pcVar5 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_WCRefine_SuperFloat_FloatBall;
    }
    else {
      uVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,uVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(&local_48,0);
    if (local_34 == 0) goto LAB_01dfd36c;
  }
  _objc_storeStrong(&local_40,0);
LAB_01dfd474:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

