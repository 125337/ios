// FUN_0045e82c @ 0045e82c

byte FUN_0045e82c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_s_onEmoticonSearchIconClicked_026a3e78;
  if (local_20 != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,
               PTR_s_onEmoticonSearchIconClicked_026a3e78);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1);
      local_11 = 1;
      goto LAB_0045e978;
    }
  }
  puVar1 = PTR_s_showSearchEmoticonViewController_026a3e80;
  if (local_20 != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,
               PTR_s_showSearchEmoticonViewController_026a3e80);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,0);
      local_11 = 1;
      goto LAB_0045e978;
    }
  }
  local_11 = 0;
LAB_0045e978:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

