// FUN_00f34f60 @ 00f34f60

void FUN_00f34f60(long param_1)

{
  long lVar1;
  undefined8 local_40;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_40 = *(long *)(param_1 + 0x28);
    if (local_40 == 0) {
      local_40 = *(long *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_downloadFirstAvailableCandidate__026ac058,
               local_40,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

