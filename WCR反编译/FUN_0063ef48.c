// FUN_0063ef48 @ 0063ef48

void FUN_0063ef48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar3 = *(ulong *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,local_28);
  if ((uVar3 & 1) != 0) {
    FUN_0063e464(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

