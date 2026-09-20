// FUN_01d64b98 @ 01d64b98

void FUN_01d64b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_5;
  local_18 = param_5;
  if (*(long *)(param_5 + 0x20) == 0) {
    uVar3 = 0x3ff0000000000000;
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    uVar2 = DAT_02323c60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x28),PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x28),PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar3,param_3,param_4,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,&cf_R_1Y_);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTextAlignment__026caa90,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_grayColor_026a9f68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x28),PTR_s_addSubview__026ca4c0,local_28);
    _objc_storeStrong(&local_28,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x28),PTR_s_setImage__026ca978,
               *(undefined8 *)(param_5 + 0x20));
  }
  return;
}

