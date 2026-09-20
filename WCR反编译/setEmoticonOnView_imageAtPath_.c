// setEmoticonOnView:imageAtPath: @ 00f51c4c

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonUtil::setEmoticonOnView_imageAtPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  int local_6c;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_28 == 0) ||
     (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_34 = 1;
    }
    else {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_6c = (int)uVar4;
      if ((uVar4 & 1) == 0) {
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isGifData__0269e0a8,local_40);
        local_6c = (int)IVar5;
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setEmoticonOnView_imageData_isGi_0269e0b0,local_28,local_40,
                 local_6c != 0);
      local_34 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

