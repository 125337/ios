// FUN_004f38d0 @ 004f38d0

void FUN_004f38d0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong *local_98;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_yJu;
      local_38 = 1;
    }
    else {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getContactByName__0269d178,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      FUN_004f2588();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        local_98 = &local_20;
      }
      else {
        local_98 = &local_48;
      }
      pcVar2 = (cfstringStruct *)*local_98;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = 1;
      local_18 = pcVar2;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

