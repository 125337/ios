// FUN_0155f39c @ 0155f39c

void FUN_0155f39c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_98;
  undefined *local_78;
  bool local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  local_28 = param_2;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  FUN_015601d8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  FUN_01560624(puVar2,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  if (local_28 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_28 = puVar2;
  }
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_44 = 1;
  }
  else {
    local_98 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_59 = 0;
    local_69 = false;
    bVar1 = local_98 == (undefined *)0x0;
    if (bVar1) {
      local_98 = (undefined *)0x0;
    }
    else {
      FUN_01560164(local_98);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_98;
    }
    local_69 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_98;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    puVar2 = local_50;
    if (local_50 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_38
                );
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        if (puVar2 != (undefined *)0x0) {
          FUN_01560164(puVar2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
      }
      puVar2 = local_78;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_44 = 1;
      _objc_storeStrong(&local_78,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

