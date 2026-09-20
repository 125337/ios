// FUN_0082e90c @ 0082e90c

byte FUN_0082e90c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == local_28) {
    local_11 = 1;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
    puVar2 = local_20;
    if ((((puVar1 == (undefined *)0x24f6e7) || (puVar1 == &UNK_0000271a)) ||
        (puVar1 == &UNK_000d8cc0)) || (puVar1 == (undefined *)0xd90a7)) {
      local_11 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_11 = (byte)puVar1 & 1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        local_11 = 1;
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

