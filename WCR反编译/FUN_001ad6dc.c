// FUN_001ad6dc @ 001ad6dc

void FUN_001ad6dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_e4;
  uint local_e0;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UINavigationItem_026ce3d0;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationItem_026ce3d0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    local_40 = 1;
    goto LAB_001addc8;
  }
  puVar1 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c8a8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_48 = puVar1;
  _objc_getAssociatedObject(local_28,&DAT_028c8a8d);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_30;
  local_50 = puVar2;
  FUN_001adea8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_30;
  local_58 = puVar1;
  FUN_001ae210(local_30,local_48,local_50);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    if (local_48 == (undefined *)0x0) {
LAB_001ad8fc:
      local_e4 = 0;
      if (local_50 != (undefined *)0x0) {
        puVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsObject__0269cbb8,local_50);
        local_e4 = (uint)puVar1;
      }
      local_e0 = local_e4;
    }
    else {
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsObject__0269cbb8,local_48);
      local_e0 = 1;
      if (((ulong)puVar1 & 1) == 0) goto LAB_001ad8fc;
    }
    local_61 = (byte)local_e0 & 1;
    if ((local_e0 & 1) != 0) {
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setRightBarButtonItems__0269eac8,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setRightBarButtonItem__0269cf20,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setRightBarButtonItems__0269eac8,local_60);
      }
    }
    _objc_setAssociatedObject(local_28,&DAT_028c8a8c,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028c8a8d,0,1);
    local_40 = 1;
  }
  else {
    if (local_48 == (undefined *)0x0) {
      puVar2 = local_28;
      FUN_001ae57c();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_48;
      local_48 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (local_48 != (undefined *)0x0) {
        _objc_setAssociatedObject(local_28,&DAT_028c8a8c,local_48,1);
      }
    }
    if (local_48 == (undefined *)0x0) {
      local_40 = 1;
    }
    else {
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      if (puVar1 != (undefined *)0x0) {
        if (local_50 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_initWithBarButtonSystemItem_targ_0269fea8,6,0);
          puVar1 = local_50;
          local_50 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4010000000000000,local_50,PTR_s_setWidth__0269feb0);
          _objc_setAssociatedObject(local_28,&DAT_028c8a8d,local_50,1);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_50);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_48);
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
      puVar2 = local_58;
      local_70 = puVar1;
      FUN_001ae97c(local_58,puVar1);
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_setRightBarButtonItems__0269eac8,local_70);
      }
      FUN_001aecd4(local_28,local_48);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationBar_0269ea30);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_layoutIfNeeded_026ca790);
      FUN_001af230(local_48);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      local_40 = 0;
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
LAB_001addc8:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

