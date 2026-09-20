// FUN_0071e768 @ 0071e768

void FUN_0071e768(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  (*DAT_028cc348)(param_1,param_2,param_3 & 1);
  FUN_00720d74(&cf_com_qimiao_wcrefine_send_captrue_did_show);
  uVar1 = param_1;
  FUN_0071ed08();
  FUN_0071ef54();
  if ((uVar1 & 1) != 0) {
    FUN_0071f028(param_1);
  }
  return;
}

