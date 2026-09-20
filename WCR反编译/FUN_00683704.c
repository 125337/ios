// FUN_00683704 @ 00683704

void FUN_00683704(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_50;
  undefined4 local_48;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  lVar1 = local_30;
  FUN_0067da68();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  if ((local_28 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0), lVar1 == 0)) {
    local_48 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setText__026caa88);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar4 = 0x4030000000000000;
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextAlignment__026caa90,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sizeToFit_0269ec08);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,param_2,param_3 + 8.0,param_4,local_50,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRightView__026a64d0,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRightViewMode__026a64d8,3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClearButtonMode__026a64e0,0);
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

