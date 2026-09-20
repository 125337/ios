// FUN_0051338c @ 0051338c

undefined4 FUN_0051338c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_createtime_026a46f0);
  if ((uVar1 & 1) == 0) {
    local_38 = 0;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_createtime);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
    if ((uVar1 & 1) == 0) {
      local_14 = 0;
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_unsignedIntValue_0269db10);
      local_14 = (undefined4)uVar1;
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_createtime_026a46f0);
    local_14 = (undefined4)uVar1;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

