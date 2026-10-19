// ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke.2091 @0x511d8

void ___46__WCMFeedController_storeHeaderImage_account___block_invoke_2091(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_b8;
  undefined8 local_78;
  uint local_58;
  long local_50;
  undefined8 local_48;
  byte local_39;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  lVar1 = _objc_loadWeakRetained(param_1 + 0x30);
  local_29 = 0;
  local_39 = 0;
  local_58 = 1;
  if (lVar1 != 0) {
    local_28 = _objc_loadWeakRetained(param_1 + 0x30);
    local_29 = 1;
    _objc_msgSend_account(local_28,local_78);
    local_38 = _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_58 = _objc_msgSend_isEqual_(local_38,local_78,*(undefined8 *)(param_1 + 0x20));
    local_58 = local_58 ^ 1;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_38);
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_28);
  }
  (*(code *)PTR__objc_release_00110458)(lVar1);
  if ((local_58 & 1) == 0) {
    lVar1 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x28),local_78);
    if ((lVar1 == 0) ||
       (uVar2 = _objc_msgSend_length(*(undefined8 *)(param_1 + 0x28),local_78), 400000 < uVar2)) {
      uVar3 = _objc_loadWeakRetained(param_1 + 0x30);
      _objc_msgSend_status_(uVar3,local_78,&cf_VGrYt1Y_bc);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    else {
      _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_78);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar4 = _objc_loadWeakRetained(param_1 + 0x30);
      _objc_msgSend_headerBrandKey(uVar4,local_78);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_dictionaryForKey_(uVar3,local_78);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      lVar1 = _objc_msgSend_mutableCopy(uVar6,local_78);
      local_b8 = lVar1;
      if (lVar1 == 0) {
        local_50 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
        local_b8 = local_50;
      }
      local_48 = (*(code *)PTR__objc_retain_00110460)(local_b8);
      if (lVar1 == 0) {
        (*(code *)PTR__objc_release_00110458)(local_50);
      }
      (*(code *)PTR__objc_release_00110458)(lVar1);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_msgSend_setObject_forKeyedSubscript_
                (local_48,local_78,*(undefined8 *)(param_1 + 0x28),&cf_png);
      _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_78);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48;
      uVar5 = _objc_loadWeakRetained(param_1 + 0x30);
      _objc_msgSend_headerBrandKey(uVar5,local_78);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setObject_forKey_(uVar4,local_78,uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      uVar3 = _objc_loadWeakRetained(param_1 + 0x30);
      _objc_msgSend_applyHeaderBrand(uVar3,local_78);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_storeStrong(&local_48,0);
    }
  }
  return;
}

