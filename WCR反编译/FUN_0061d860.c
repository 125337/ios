// FUN_0061d860 @ 0061d860

void FUN_0061d860(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_70;
  undefined1 local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  undefined *local_40 [3];
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_28 != (undefined *)0x0) {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = puVar3;
    if (puVar3 != (undefined *)0x0) {
      uVar6 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_findBaseMsgViewControllerFromVie_026a5e50,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 0;
      local_61 = 0;
      bVar2 = false;
      uVar1 = uVar6 != 0;
      local_48 = uVar6;
      if ((bool)uVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar2 = uVar6 != 0;
        local_61 = uVar1;
        local_60 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar6);
        uVar1 = local_61;
      }
      local_61 = uVar1;
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      if (bVar2) {
        uVar6 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar6);
        uVar6 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedsLayout_0269deb8);
        if ((uVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setNeedsLayout_0269deb8);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layoutIfNeeded_026ca790);
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

