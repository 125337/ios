// FUN_01780328 @ 01780328

void FUN_01780328(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_selectedIndex_0269e580);
  if (param_3 != lVar1) {
    local_70 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    local_70 = *(undefined8 *)(param_1 + 0x28);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setTitleColor_forState__026caac0,local_70,0);
  if (param_3 != lVar1) {
    local_80 = *(undefined8 *)PTR__UIFontWeightRegular_02578158;
  }
  else {
    local_80 = *(undefined8 *)PTR__UIFontWeightSemibold_02578160;
  }
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402e000000000000,local_80,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_20,0);
  return;
}

