// FUN_004421a8 @ 004421a8

void FUN_004421a8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_11c;
  undefined8 local_80;
  undefined *local_78;
  long local_70;
  ulong local_68;
  byte local_59;
  ulong local_58 [3];
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if (((ulong)puVar1 & 1) != 0) {
    uVar2 = local_28;
    FUN_004504e8();
    uVar4 = local_28;
    if ((uVar2 & 1) != 0) {
      lVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_item_026a1890);
      FUN_00455744(uVar4,lVar3);
    }
  }
  uVar4 = local_28;
  (*DAT_028caa38)(local_28,local_30,local_38,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_58[0] = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if (((ulong)puVar1 & 1) != 0) {
    uVar4 = local_28;
    FUN_004504e8();
    if (((uVar4 & 1) != 0) && (DAT_028ca9b8 != 0)) {
      uVar4 = local_28;
      FUN_00455950();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_40;
      local_68 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_item_026a1890);
      uVar4 = local_68;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_70 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      lVar3 = local_70;
      if (((uVar4 & 1) != 0) && (-1 < local_70)) {
        uVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
        puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
        if (lVar3 < (long)uVar4) {
          uVar4 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectAtIndexedSubscript__0269cc78,local_70);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_relativePathResolvingWrap__026a3d80);
          _objc_retainAutoreleasedReturnValue();
          local_78 = puVar1;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          puVar1 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
          uVar5 = 0;
          local_11c = 0;
          if (puVar1 != (undefined *)0x0) {
            FUN_0043c204();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_11c = (byte)uVar6;
            local_80 = uVar5;
          }
          local_59 = local_11c & 1;
          if (puVar1 != (undefined *)0x0) {
            (*(code *)PTR__objc_release_02578630)(local_80);
          }
          _objc_storeStrong(&local_78,0);
        }
      }
      _objc_storeStrong(&local_68,0);
    }
  }
  uVar4 = local_58[0];
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar4 & 1) != 0) {
    FUN_00455ae0(local_58[0],local_59 & 1);
  }
  uVar4 = local_58[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

