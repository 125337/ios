// FUN_0028470c @ 0028470c

void FUN_0028470c(undefined8 param_1)

{
  long lVar1;
  long local_50;
  long local_30;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copy_0269d150);
    local_30 = local_50;
  }
  _objc_storeStrong(&DAT_028c95a8,local_50);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

