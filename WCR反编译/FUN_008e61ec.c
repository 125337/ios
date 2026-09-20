// FUN_008e61ec @ 008e61ec

bool FUN_008e61ec(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_isEqualToString__0269ccc8,&cf_VideoMessageCellView);
  bVar1 = true;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rangeOfString__0269d838,&cf_Sight);
    bVar1 = uVar2 != 0x7fffffffffffffff;
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

