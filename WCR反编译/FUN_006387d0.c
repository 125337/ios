// FUN_006387d0 @ 006387d0

byte FUN_006387d0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_38;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = false;
  local_11 = false;
  if (local_20 != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
    local_11 = true;
    if (uVar2 != 0x65) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
      local_11 = true;
      if (uVar2 != _WCR_NAMEPLATE_VIEW_TAG) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
        _WCRNameplateOwnsTag();
        local_11 = true;
        if ((uVar2 & 1) == 0) {
          local_38 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewWithTag__026cabe0,0x65);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_11 = local_38 != 0;
        }
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

