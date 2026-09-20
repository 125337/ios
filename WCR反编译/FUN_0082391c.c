// FUN_0082391c @ 0082391c

void FUN_0082391c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_e0;
  undefined *local_c8;
  undefined *local_78;
  undefined *local_68;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_2);
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundView_026a0320);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_30;
  (*(code *)PTR__objc_release_02578630)();
  if (puVar4 == puVar5) {
    local_40 = 1;
  }
  else {
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundView_026a0320);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    local_48 = puVar5;
    if ((puVar5 == local_30) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_tag_026cab98),
       puVar5 != (undefined *)0x24f6e7)) {
      local_68 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundView_026a0320);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar1 = local_68 == (undefined *)0x0;
      local_e0 = local_68;
      if (bVar1) {
        local_78 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_e0 = local_78;
      }
      local_c8 = local_e0;
    }
    else {
      local_c8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      local_58 = local_c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_c8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    _objc_setAssociatedObject(local_30,&DAT_028cd1dd,local_50,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundView__026a2060,local_30);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

