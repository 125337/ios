// FUN_01582a9c @ 01582a9c

void FUN_01582a9c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _objc_getAssociatedObject(uVar2,DAT_028c5fd8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  bVar1 = false;
  if (lVar3 == 0) {
    local_38 = *(cfstringStruct **)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wxid_026b04e8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_60 = local_38;
    if (local_38 == (cfstringStruct *)0x0) {
      local_60 = &cf___;
    }
    local_50 = local_60;
  }
  else {
    local_50 = *(cfstringStruct **)(param_1 + 0x28);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_50;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_30);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setImage__026ca978,
               *(undefined8 *)(param_1 + 0x38));
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (pcVar4 != (cfstringStruct *)0x0) {
      FUN_01560164(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar3 = *(long *)(param_1 + 0x40);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      FUN_01582608();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

