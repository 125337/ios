// FUN_00696be8 @ 00696be8

void FUN_00696be8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_50 [2];
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) ||
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_30 = 1;
  }
  else {
    local_38 = 0;
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf__searcher);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    if (uVar2 == 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_searcher);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_searchBar_026a2698);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_searchBar_026a2698);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    _objc_storeStrong(&local_40,0);
    if (local_38 == 0) {
      local_50[0] = 0;
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_view);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50[0];
      local_50[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_50[0];
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_50[0];
        FUN_00697190();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_38;
        local_38 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      _objc_storeStrong(local_50,0);
    }
    if (local_38 == 0) {
      local_30 = 1;
    }
    else {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setText__026caa88,local_20);
      }
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_doSearch_026a6528);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onSearch__026a6530);
        if ((uVar2 & 1) == 0) {
          uVar2 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_respondsToSelector__026ca818,
                     PTR_s_doSearchWithIntelligence__026a6538);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_doSearchWithIntelligence__026a6538,1);
          }
          local_30 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onSearch__026a6530,0);
          local_30 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_doSearch_026a6528);
        local_30 = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

