// FUN_000b9bac @ 000b9bac

void FUN_000b9bac(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_a8;
  ulong local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  char local_39;
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
  local_59 = 0;
  local_69 = 0;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  if ((bool)local_39 == false) {
    local_a8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_a8;
  }
  else {
    FUN_000b9f24();
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_a8 = param_1;
    local_58 = param_1;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setBackgroundColor__026ca888,local_a8);
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewWithTag__026cabe0,&DAT_000e1af0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_78 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    FUN_000ba020();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_20,0);
  return;
}

