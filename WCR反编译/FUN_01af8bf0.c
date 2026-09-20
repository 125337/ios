// FUN_01af8bf0 @ 01af8bf0

void FUN_01af8bf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  long local_30;
  undefined4 local_24;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) ||
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_24 = 1;
  }
  else {
    uVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e4570);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == 0) {
      lVar1 = local_20;
      FUN_01af77ac();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_updateUsrName_withHeadImgUrl_;
      local_30 = lVar1;
      _NSSelectorFromString();
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((uVar2 & 1) == 0) ||
         (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
         lVar1 == 0)) {
        uVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_checkAndUpdateImage_0269de70);
        uVar2 = local_18;
        if ((uVar4 & 1) == 0) {
          pcVar3 = &cf_doUpdateHeadImg_;
          _NSSelectorFromString(&cf_doUpdateHeadImg_);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
          uVar4 = local_18;
          if ((uVar2 & 1) != 0) {
            pcVar3 = &cf_doUpdateHeadImg_;
            _NSSelectorFromString();
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,pcVar3,1);
          }
          local_24 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_checkAndUpdateImage_0269de70);
          local_24 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar3,local_20,local_30);
        local_24 = 1;
      }
      _objc_storeStrong(&local_30,0);
    }
    else {
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

