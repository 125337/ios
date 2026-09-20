// FUN_00feb504 @ 00feb504

void FUN_00feb504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_78;
  cfstringStruct *local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
    if ((uVar1 & 1) == 0) {
      if (local_28 != 0) {
        if (local_30 == (cfstringStruct *)0x0) {
          local_a8 = &cf___;
        }
        else {
          local_a8 = local_30;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setText__026caa88,local_a8);
      }
    }
    else {
      if (local_30 == (cfstringStruct *)0x0) {
        local_98 = &cf___;
      }
      else {
        local_98 = local_30;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setText__026caa88,local_98);
    }
  }
  else {
    if (local_30 == (cfstringStruct *)0x0) {
      local_78 = &cf___;
    }
    else {
      local_78 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setText__026caa88,local_78);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

