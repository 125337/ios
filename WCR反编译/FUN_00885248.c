// FUN_00885248 @ 00885248

void FUN_00885248(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 != 0) &&
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle_forState__026caab8,local_20,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle_forState__026caab8,local_20,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle_forState__026caab8,local_20,4);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle_forState__026caab8,local_20,2);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

