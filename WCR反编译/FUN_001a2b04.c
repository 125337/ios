// FUN_001a2b04 @ 001a2b04

byte FUN_001a2b04(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long local_48;
  undefined4 local_40;
  undefined1 local_39;
  long local_38;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_39 = 0;
  bVar2 = true;
  uVar1 = local_20 != 0;
  if ((bool)uVar1) {
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 == 0;
    local_39 = uVar1;
    local_38 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_39;
  }
  local_39 = uVar1;
  if (bVar2) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_11 = false;
    if (local_48 != 0) {
      lVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isHidden_026ca768);
      local_11 = (int)lVar3 == 0;
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

