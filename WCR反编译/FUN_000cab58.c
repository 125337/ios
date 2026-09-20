// FUN_000cab58 @ 000cab58

ulong FUN_000cab58(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028c8290);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    uVar1 = local_20;
    FUN_000cb204();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((uVar1 == 0) &&
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_cellView_0269e7e8),
       (uVar1 & 1) != 0)) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cellView_0269e7e8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_000cb204();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_40;
    FUN_000c835c();
    uVar1 = local_20;
    if (uVar2 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar1,&DAT_028c8290,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (uVar1 != 0) {
        _objc_setAssociatedObject(uVar1,local_20,&DAT_028c8291,local_40,3);
      }
    }
    local_38 = 1;
    local_18 = uVar2;
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_integerValue_026ca750);
    local_38 = 1;
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

