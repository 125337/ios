// FUN_00556fc8 @ 00556fc8

void FUN_00556fc8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_140;
  cfstringStruct *local_100;
  cfstringStruct *local_f0;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_momentsFakeCommentCount_026a4e78);
  if ((long)pcVar1 < 1) {
    pcVar1 = *(cfstringStruct **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = 1;
    local_28 = pcVar1;
  }
  else {
    uVar2 = local_30;
    FUN_00546750(pcVar1);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentsFakeRefreshEachOpen_026a4e90);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = &cf_WCRefineMomentsFakeCommentAdditionsCache;
      FUN_00557784(&cf_WCRefineMomentsFakeCommentAdditionsCache,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
      pcVar3 = local_68;
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentsFakeCommentCount_026a4e78);
        FUN_0054d83c();
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar1;
        FUN_00557a74(&cf_WCRefineMomentsFakeCommentAdditionsCache,local_50,pcVar1);
        if (local_70 == (cfstringStruct *)0x0) {
          local_140 = *(cfstringStruct **)PTR____NSArray0___02578280;
        }
        else {
          local_140 = local_70;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_140;
        local_48 = 1;
        _objc_storeStrong(&local_70,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
        local_48 = 1;
      }
      _objc_storeStrong(&local_68,0);
    }
    else {
      FUN_00550dd0();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      pcVar1 = local_58;
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentsFakeCommentCount_026a4e78);
        FUN_0054d83c();
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar1;
        FUN_00550dd0();
        _objc_retainAutoreleasedReturnValue();
        if (local_60 == (cfstringStruct *)0x0) {
          local_f0 = *(cfstringStruct **)PTR____NSArray0___02578280;
        }
        else {
          local_f0 = local_60;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_setObject_forKey__026ca9e8,local_f0,local_50);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (local_60 == (cfstringStruct *)0x0) {
          local_100 = *(cfstringStruct **)PTR____NSArray0___02578280;
        }
        else {
          local_100 = local_60;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_100;
        local_48 = 1;
        _objc_storeStrong(&local_60,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_48 = 1;
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

