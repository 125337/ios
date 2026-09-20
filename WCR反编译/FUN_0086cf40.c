// FUN_0086cf40 @ 0086cf40

void FUN_0086cf40(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  
  (*DAT_028cd6c8)(param_1,param_2,param_3 & 1);
  _objc_setAssociatedObject(param_1,&DAT_028cd8c7,0,1);
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_m_contact_026a0b68);
  _objc_retainAutoreleasedReturnValue();
  FUN_00884260();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((DAT_028cd865 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0087ddf0();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

