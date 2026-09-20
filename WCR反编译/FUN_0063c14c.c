// FUN_0063c14c @ 0063c14c

void FUN_0063c14c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long local_80;
  long local_78;
  long local_70;
  long local_68 [3];
  long local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_40 = 0;
  local_34 = param_3;
  _objc_storeStrong(&local_40,param_4);
  if (local_28 == 0) {
    local_44 = 1;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    local_50 = lVar1;
    if ((lVar1 == 0x76b) || (lVar1 == 0x76a)) {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_68[0] = lVar1;
      if (lVar1 == 0) {
        local_44 = 1;
      }
      else {
        FUN_0063bfb8(lVar1,local_28);
        lVar2 = local_68[0];
        local_70 = lVar1;
        FUN_0063bfb8(local_68[0],local_30);
        lVar1 = local_68[0];
        local_78 = lVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_80 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        if (local_80 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_tag_026cab98);
        }
        _objc_storeStrong(&local_80,0);
        local_44 = 0;
      }
      _objc_storeStrong(local_68,0);
    }
    else {
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

