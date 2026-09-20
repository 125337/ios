// FUN_02214480 @ 02214480

undefined1  [16]
FUN_02214480(double param_1,double param_2,double param_3,double param_4,double param_5,
            double param_6,double param_7,double param_8)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double in_stack_00000000;
  double in_stack_00000018;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  _memset(&local_60,0,0x40);
  dVar1 = param_5 * param_6 + in_stack_00000000 + param_7;
  local_60 = param_1;
  local_58 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  local_40 = param_5;
  local_38 = param_6;
  local_30 = param_7;
  local_28 = param_8;
  _sin();
  dVar2 = (param_5 * param_6 * DAT_02323c98 - in_stack_00000000 * 0.7) + param_7 * DAT_02323f50;
  _sin();
  dVar1 = in_stack_00000018 * param_8 * (dVar1 * DAT_02323f60 + dVar2 * DAT_02323e88);
  auVar3._0_8_ = param_1 + param_3 * dVar1;
  auVar3._8_8_ = param_2 + param_4 * dVar1;
  return auVar3;
}

