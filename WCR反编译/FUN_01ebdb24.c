// FUN_01ebdb24 @ 01ebdb24

undefined8 FUN_01ebdb24(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long lVar4;
  long local_100;
  long local_e8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  undefined8 local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = local_38;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_headerTitle_026af648);
  local_59 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_c0 = &cf___;
  }
  else {
    local_c0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_headerTitle_026af648);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_c0;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_c0;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_headerTitle_026af648);
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_d0 = &cf___;
  }
  else {
    local_d0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_headerTitle_026af648);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_d0;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_objectForKeyedSubscript__0269d098,local_50);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    local_e8 = 100;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_objectForKeyedSubscript__0269d098,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_objectForKeyedSubscript__0269d098,local_68);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    local_100 = 100;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_objectForKeyedSubscript__0269d098,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_100 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if (local_e8 < local_100) {
    local_28 = 0xffffffffffffffff;
  }
  else if (local_100 < local_e8) {
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

