// FUN_007fa0e4 @ 007fa0e4

byte FUN_007fa0e4(double param_1,double param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_20;
  bool local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_3);
  FUN_007f7ae4();
  uVar3 = local_20;
  if (((ulong)puVar1 & 1) == 0) {
    local_11 = false;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_11 = false;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_adjustedContentInset_0269dcd0);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentOffset_0269dd18);
      local_11 = param_2 + param_1 < 10.0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

