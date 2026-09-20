// FUN_0103b224 @ 0103b224

void FUN_0103b224(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long local_b8;
  long local_98;
  long local_78;
  long local_68;
  long local_58;
  long local_48;
  long local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  if (local_20 == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,local_28);
    }
    local_34 = 1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    if (lVar4 == 0) {
      local_58 = *(long *)(param_1 + 0x30);
      local_48 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_resolvedURL_026ad978);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_douyinAwemeIDFromURL__026adf78);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar1 = local_58 == 0;
      local_b8 = local_58;
      if (bVar1) {
        local_78 = *(long *)(param_1 + 0x30);
        local_68 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sourceURL_026ad980);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_douyinAwemeIDFromURL__026adf78);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = local_78;
      }
      local_98 = local_b8;
    }
    else {
      local_98 = *(long *)(param_1 + 0x20);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_98;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_ensureDouyinBrowserPlaybackURLFo_026ad9e8,
               local_20);
    uVar5 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_douyinParseSucceeded_cardPlaybac_026adf80,local_20,
               *(byte *)(param_1 + 0x38) & 1);
    if (((uVar5 & 1) != 0) &&
       (lVar4 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       lVar4 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_storeDouyinParseResult_forAwemeI_026adf88,
                 local_20,local_40);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_20,local_28);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

