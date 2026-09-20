// FUN_01050504 @ 01050504

undefined8 FUN_01050504(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_url_026a5a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_cleanMediaScoreForURL__026add48);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_url_026a5a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_cleanMediaScoreForURL__026add48);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 == lVar3) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_height_026a12d8);
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_height_026a12d8);
    if (lVar1 == lVar2) {
      local_18 = 0;
    }
    else {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_height_026a12d8);
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_height_026a12d8);
      local_18 = 0xffffffffffffffff;
      if (lVar1 < lVar2) {
        local_18 = 1;
      }
    }
  }
  else {
    local_18 = 0xffffffffffffffff;
    if (lVar2 < lVar3) {
      local_18 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

