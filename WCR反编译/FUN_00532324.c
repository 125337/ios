// FUN_00532324 @ 00532324

byte FUN_00532324(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_48;
  undefined *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    local_30 = PTR_s_homepageType_026a4700;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_homepageType_026a4700);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30), local_48 = uVar2
       , uVar2 != 1)) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_delegate);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_isStarBrowsingEnabled_026a4be0;
      local_50 = uVar2;
      if (((uVar2 == 0) ||
          ((*(code *)PTR__objc_msgSend_02578628)
                     (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isStarBrowsingEnabled_026a4be0)
          , (uVar2 & 1) == 0)) ||
         (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,puVar1), (uVar2 & 1) == 0
         )) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
      local_24 = 1;
      _objc_storeStrong(&local_50,0);
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

