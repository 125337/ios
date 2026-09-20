// FUN_000c5418 @ 000c5418

double FUN_000c5418(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  double local_68;
  double local_50 [3];
  double local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028c81d8)(local_20,local_28,local_30);
  local_50[0] = 0.0;
  uVar1 = local_30;
  local_38 = param_1;
  FUN_000c9a18(local_30,local_50);
  if ((uVar1 & 1) == 0) {
    local_18 = local_38;
  }
  else {
    dVar2 = 12.0;
    FUN_000c93c4(&cf_message_node_content_margin_left);
    local_68 = local_50[0] - dVar2 * 2.0;
    if (local_68 < 60.0) {
      local_68 = 60.0;
    }
    if (local_68 < local_38) {
      local_18 = local_68;
    }
    else {
      local_18 = local_38;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

