// FUN_01f88268 @ 01f88268

/* WARNING: Removing unreachable block (ram,0x01f883a4) */

void FUN_01f88268(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  uint local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSearchBarStyle__0269e9c0,2);
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_new_0269d288);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundImage__026a0020);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_28 = 0;
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_searchTextField_0269e9f8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_28;
    puVar2 = PTR__OBJC_CLASS___UITextField_026ce2a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemBackgroundColor_026ca848);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402e000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBorderStyle__026aa180,0);
    }
    local_1c = (uint)!bVar1;
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

