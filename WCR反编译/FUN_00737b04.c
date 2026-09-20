// FUN_00737b04 @ 00737b04

byte FUN_00737b04(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_80;
  ulong local_78;
  byte local_69;
  ulong local_60;
  ulong local_58 [3];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    local_40 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_sections_026a7b70);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sections_026a7b70);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_58[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) {
        _objc_storeStrong(&local_40,local_58[0]);
      }
      _objc_storeStrong(local_58,0);
    }
    if (local_40 == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_sections);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_60 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) {
        _objc_storeStrong(&local_40,local_60);
      }
      _objc_storeStrong(&local_60,0);
    }
    if ((local_40 == 0) ||
       (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0),
       uVar1 == 0)) {
      local_21 = 0;
    }
    else {
      local_69 = 0;
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      local_78 = uVar1;
      while (local_78 = local_78 - 1, -1 < (long)local_78) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
        _objc_retainAutoreleasedReturnValue();
        local_80 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
        if ((uVar1 & 1) == 0) {
          local_34 = 5;
        }
        else {
          uVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_getCellCount_026a0b78);
          if (uVar1 == 0) {
            uVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_respondsToSelector__026ca818,
                       PTR_s_safeRemoveObjectAtIndex__026a7b78);
            if ((uVar1 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_removeObjectAtIndex__0269d530,local_78);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_safeRemoveObjectAtIndex__026a7b78,local_78);
            }
            local_69 = 1;
            local_34 = 0;
          }
          else {
            local_34 = 5;
          }
        }
        _objc_storeStrong(&local_80,0);
      }
      local_21 = local_69 & 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

