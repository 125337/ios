// _wcm_yy_png_delay_wcm_to_seconds @0x956ec

undefined1  [16] _wcm_yy_png_delay_wcm_to_seconds(ushort param_1,ushort param_2)

{
  undefined1 auVar1 [16];
  undefined8 local_8;
  
  if (param_2 == 0) {
    local_8 = (double)param_1 / 100.0;
  }
  else {
    local_8 = (double)param_1 / (double)param_2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_8;
  return auVar1;
}

