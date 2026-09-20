// FUN_01d242dc @ 01d242dc

void FUN_01d242dc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  if ((local_20 == 0) ||
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setRedEnvelopMinDelaySeconds__026c42f0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setRedEnvelopMaxDelaySeconds__026c42f8,0);
  }
  else {
    lVar1 = local_20;
    puVar2 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf__);
    local_38 = lVar1;
    local_30 = puVar2;
    if (lVar1 == 0x7fffffffffffffff) {
      local_60 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_integerValue_026ca750);
      if (local_60 < 0) {
        local_60 = 0;
      }
      if (999999 < local_60) {
        local_60 = 999999;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setRedEnvelopMinDelaySeconds__026c42f0,
                 local_60);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setRedEnvelopMaxDelaySeconds__026c42f8,
                 local_60);
    }
    else {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_40 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
      if (lVar1 == 2) {
        lVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        local_48 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar1);
        lVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        local_50 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar1);
        if (local_48 < 0) {
          local_48 = 0;
        }
        if (local_50 < 0) {
          local_50 = 0;
        }
        if (999999 < local_48) {
          local_48 = 999999;
        }
        if (999999 < local_50) {
          local_50 = 999999;
        }
        if (local_50 < local_48) {
          local_50 = local_48;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_setRedEnvelopMinDelaySeconds__026c42f0,
                   local_48);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_setRedEnvelopMaxDelaySeconds__026c42f8,
                   local_50);
      }
      else {
        local_58 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_integerValue_026ca750);
        if (local_58 < 0) {
          local_58 = 0;
        }
        if (999999 < local_58) {
          local_58 = 999999;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_setRedEnvelopMinDelaySeconds__026c42f0,
                   local_58);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_setRedEnvelopMaxDelaySeconds__026c42f8,
                   local_58);
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_20,0);
  return;
}

