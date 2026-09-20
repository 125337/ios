// FUN_00195bc8 @ 00195bc8

void FUN_00195bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  ulong local_18;
  long *plVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  plVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(plVar2,param_3);
  uVar1 = (uint)plVar2;
  FUN_0018f95c();
  uVar4 = local_18;
  if (((((uVar1 & 1) == 0) || (local_18 == 0)) || (local_20 == 0)) || (local_28 == 0)) {
    local_38 = 1;
  }
  else {
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
    FUN_001911e8(uVar4,lVar3);
    if ((long)uVar4 < 0) {
      local_38 = 1;
    }
    else {
      uVar4 = local_18;
      FUN_00198f60(local_18,local_20);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = &cf_updateNewContactsItemCell_contact_;
      local_40 = uVar4;
      _NSSelectorFromString();
      if ((local_40 == 0) ||
         (uVar4 = local_18,
         (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar5),
         (uVar4 & 1) == 0)) {
        local_38 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar5,local_28,local_40);
        local_38 = 0;
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

