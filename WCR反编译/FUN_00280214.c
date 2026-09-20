// FUN_00280214 @ 00280214

byte FUN_00280214(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint local_a0;
  ulong local_48;
  ulong local_40;
  uint local_38;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar2 == 0) || (local_20 == 0)) {
    local_11 = 1;
    local_38 = 1;
    goto LAB_00280570;
  }
  uVar3 = local_20;
  FUN_0027a1c0(local_20,&cf_fileFormat);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,local_28);
  if ((uVar3 & 1) == 0) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getFormatVideoPath_026a16d0);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getFormatVideoPath_026a16d0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_a0 = 0;
      if ((uVar3 & 1) != 0) {
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a0 = (uint)uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      bVar1 = (local_a0 & 1) != 0;
      if (bVar1) {
        local_11 = 1;
      }
      local_38 = (uint)bVar1;
      _objc_storeStrong(&local_48,0);
      if (local_38 != 0) goto LAB_00280550;
    }
    local_11 = 0;
    local_38 = 1;
  }
  else {
    local_11 = 1;
    local_38 = 1;
  }
LAB_00280550:
  _objc_storeStrong(&local_40,0);
LAB_00280570:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

