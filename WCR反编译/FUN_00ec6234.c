// FUN_00ec6234 @ 00ec6234

void FUN_00ec6234(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint local_90;
  uint local_8c;
  uint local_7c;
  long local_58;
  undefined4 local_4c;
  long local_48;
  byte local_39;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_customTitle);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_sourceTitle);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_39 = 0;
  local_7c = 0;
  if (lVar1 != 0) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_customTitle);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_8c = 1;
    local_38 = lVar1;
    if (lVar1 == 0) {
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      local_90 = 0;
      if (lVar1 != 0) {
        lVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_30);
        local_90 = (uint)lVar1 ^ 1;
      }
      local_8c = local_90;
    }
    local_7c = local_8c;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (((local_7c & 1) != 0) &&
     (uVar4 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setNsTitle__0269ff70),
     (uVar4 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNsTitle__0269ff70,local_28);
  }
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_customIcon);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_4c = 1;
  }
  else {
    lVar1 = local_48;
    FUN_00ec39c8();
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar1;
    if ((lVar1 != 0) &&
       (uVar4 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setOImage__026ab548),
       (uVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOImage__026ab548,local_58);
    }
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

