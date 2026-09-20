// FUN_00441404 @ 00441404

void FUN_00441404(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_d4;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_50;
  uint local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_4;
  local_28 = param_3;
  _objc_storeStrong(&local_38,param_5);
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028ca9f8)(local_28,local_30,local_38);
    local_48 = 1;
  }
  else {
    local_50 = 0;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_collectionView);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_50;
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,local_50);
    local_70 = 0;
    uVar4 = local_50;
    local_68 = param_1;
    uStack_60 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_indexPathForItemAtPoint__026a3d40);
    if ((uVar4 & 1) != 0) {
      uStack_78 = uStack_60;
      local_80 = local_68;
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,uStack_60,local_50,PTR_s_indexPathForItemAtPoint__026a3d40);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_70;
      local_70 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    uVar4 = local_28;
    FUN_0045210c();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    local_d4 = 0;
    local_88 = uVar4;
    if (local_70 != 0) {
      uVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_item_026a1890);
      local_d4 = 0;
      if (-1 < (long)uVar4) {
        uVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_item_026a1890);
        uVar5 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
        uVar4 = local_88;
        local_d4 = 0;
        if ((long)uVar3 < (long)uVar5) {
          uVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_item_026a1890);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_objectAtIndexedSubscript__0269cc78,uVar3);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          uVar3 = uVar4;
          FUN_0045299c();
          local_d4 = (uint)uVar3;
          local_90 = uVar4;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    bVar1 = (local_d4 & 1) == 0;
    if (bVar1) {
      (*DAT_028ca9f8)(local_28,local_30,local_38);
    }
    else {
      uVar4 = local_28;
      FUN_004541e0();
      _objc_retainAutoreleasedReturnValue();
      FUN_0043acd4();
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    local_48 = (uint)!bVar1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

