// thumbForItem: @ 0095f5e8

/* Function Stack Size: 0x18 bytes */

ID WCRClipboardHistoryStore::thumbForItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_50;
  undefined *local_48;
  ulong local_40;
  uint local_34;
  ulong local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
    goto LAB_0095f868;
  }
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_thumbPath);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0, uVar3 == 0)) {
LAB_0095f7b4:
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_imageForItem__026aa848,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_WCRClipboardCapture_026ceac8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRClipboardCapture_026ceac8,PTR_s_resolvedThumbnailForItem__026aabb8,local_30)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
    }
    local_34 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    uVar3 = local_40;
    FUN_0095c294();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_imageWithContentsOfFile__0269e0e0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar2 = local_48;
    bVar1 = local_48 != (undefined *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(&local_48,0);
    if (local_34 == 0) goto LAB_0095f7b4;
  }
  _objc_storeStrong(&local_40,0);
LAB_0095f868:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

