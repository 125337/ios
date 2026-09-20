// FUN_0073edb0 @ 0073edb0

byte FUN_0073edb0(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_m_contact_026a0b68);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_30 = param_1;
  if (param_1 != 0) {
    FUN_0073f8a0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 == 0;
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  if (bVar1) {
    local_11 = 0;
  }
  else {
    lVar2 = local_20;
    (*DAT_028cc648)(local_20,local_28);
    local_11 = (byte)lVar2 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

