// FUN_000bf8dc @ 000bf8dc

void FUN_000bf8dc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c80d8)(param_1,param_2);
  FUN_000bfbf8();
  uVar1 = local_18;
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_selectionStyle_0269e628);
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectionStyle__0269e5f8,0);
    }
    FUN_000bfc1c(local_28,&cf_MMTableViewCell_layoutSubviews);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

