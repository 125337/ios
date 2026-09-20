// FUN_00801d34 @ 00801d34

void FUN_00801d34(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  uint local_2c;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_isKindOfClass__0269cd68,*(undefined8 *)(param_1 + 0x28));
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_20);
    if ((uVar2 & 1) == 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_WCRefineToDo_reloadCard_026a8810)
      ;
      uVar2 = local_20;
      if ((uVar3 & 1) == 0) {
        local_2c = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isViewLoaded_0269cde0);
        bVar1 = (uVar2 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_WCRefineToDo_reloadCard_026a8810);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_20);
        }
        local_2c = (uint)!bVar1;
        _objc_storeStrong(&local_38,0);
        if (local_2c == 0) {
          local_2c = 0;
        }
      }
      goto LAB_00801e94;
    }
  }
  local_2c = 1;
LAB_00801e94:
  _objc_storeStrong(&local_20,0);
  return;
}

