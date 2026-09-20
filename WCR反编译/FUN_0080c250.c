// FUN_0080c250 @ 0080c250

void FUN_0080c250(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  byte local_19;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = DAT_028ccf50;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028ccf50,PTR_s_objectForKeyedSubscript__0269d098,local_18);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if ((local_19 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_makeObjectsPerformSelector__0269f220,PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028ccf68,PTR_s_removeObjectsInArray__026a8500,local_28);
  }
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf50,PTR_s_removeObjectForKey__0269d700,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf58,PTR_s_removeObjectForKey__0269d700,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf60,PTR_s_removeObjectForKey__0269d700,local_18);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

