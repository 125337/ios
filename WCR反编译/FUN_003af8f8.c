// FUN_003af8f8 @ 003af8f8

void FUN_003af8f8(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_90;
  ulong local_68;
  byte local_59;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  byte local_39;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_39 = false;
  if (*(long *)(param_1 + 0x20) != 0x7fffffffffffffff) {
    local_39 = param_3 == *(long *)(param_1 + 0x20);
  }
  local_49 = 0;
  local_59 = 0;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  if ((bool)local_39 == false) {
    local_90 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_90;
  }
  else {
    FUN_003afb5c();
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_90 = param_1;
    local_48 = param_1;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setBackgroundColor__026ca888,local_90);
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewWithTag__026cabe0,&DAT_000e1af0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = (ulong)(local_39 & 1);
    FUN_003aebd0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_20,0);
  return;
}

