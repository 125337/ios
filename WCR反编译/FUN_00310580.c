// FUN_00310580 @ 00310580

void FUN_00310580(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_6c;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_28 == (undefined *)0x0) ||
     (puVar2 = local_28, FUN_0031918c(), ((ulong)puVar2 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    puVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c9ba1);
    _objc_retainAutoreleasedReturnValue();
    local_6c = 0;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = local_28;
      FUN_0031169c();
      local_6c = (uint)puVar3 ^ 1;
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_6c & 1) == 0) {
      FUN_003101cc(local_28);
      puVar3 = local_28;
      FUN_003192a4();
      puVar2 = local_28;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(puVar2,&DAT_028c9ba1,puVar3,1);
        (*(code *)PTR__objc_release_02578630)();
        FUN_0031245c();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_28;
        local_58 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColor_026ca518);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_58;
        (*(code *)PTR__objc_release_02578630)();
        if (puVar4 != puVar2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setBackgroundColor__026ca888,local_58);
        }
        _objc_storeStrong(&local_58,0);
        local_38 = 0;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_28;
        local_40 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColor_026ca518);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_40;
        (*(code *)PTR__objc_release_02578630)();
        if (puVar3 != puVar2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setBackgroundColor__026ca888,local_40);
        }
        local_49 = 0;
        puVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = false;
        if (puVar3 != (undefined *)0x0) {
          puVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          local_49 = 1;
          local_48 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _CGColorGetAlpha(puVar3);
          bVar1 = DAT_02323d38 < param_1;
        }
        if ((local_49 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_48);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_40;
        if (bVar1) {
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
          puVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        local_38 = 1;
        _objc_storeStrong(&local_40,0);
      }
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

