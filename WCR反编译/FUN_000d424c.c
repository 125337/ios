// FUN_000d424c @ 000d424c

void FUN_000d424c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  uint local_7c;
  ulong local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c8371);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar5 = local_30;
  local_7c = 0;
  if ((uVar3 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_7c = (uint)uVar5;
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((local_7c & 1) != 0) {
    local_48[0] = 0;
    pcVar6 = &cf_getMsgInSection_Row_;
    _NSSelectorFromString();
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar6);
    uVar2 = local_18;
    if ((uVar3 & 1) != 0) {
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
      uVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,pcVar6,uVar5,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48[0];
      local_48[0] = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar2 = local_18;
    FUN_000daf14(local_18,local_48[0]);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_30,1);
    }
    _objc_storeStrong(local_48,0);
    if (bVar1) goto LAB_000d453c;
  }
  (*DAT_028c82d0)(local_18,local_20,local_28,local_30);
LAB_000d453c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

