// FUN_01d55a8c @ 01d55a8c

/* WARNING: Removing unreachable block (ram,0x01d55ce4) */
/* WARNING: Removing unreachable block (ram,0x01d55cf8) */
/* WARNING: Removing unreachable block (ram,0x01d55cfc) */
/* WARNING: Removing unreachable block (ram,0x01d55d04) */
/* WARNING: Removing unreachable block (ram,0x01d55d18) */
/* WARNING: Removing unreachable block (ram,0x01d55d1c) */
/* WARNING: Removing unreachable block (ram,0x01d55d28) */
/* WARNING: Removing unreachable block (ram,0x01d55d30) */
/* WARNING: Removing unreachable block (ram,0x01d55bd8) */
/* WARNING: Removing unreachable block (ram,0x01d55bec) */
/* WARNING: Removing unreachable block (ram,0x01d55bf0) */
/* WARNING: Removing unreachable block (ram,0x01d55bf8) */
/* WARNING: Removing unreachable block (ram,0x01d55c0c) */
/* WARNING: Removing unreachable block (ram,0x01d55c10) */
/* WARNING: Removing unreachable block (ram,0x01d55c1c) */
/* WARNING: Removing unreachable block (ram,0x01d55c24) */
/* WARNING: Removing unreachable block (ram,0x01d55b24) */
/* WARNING: Removing unreachable block (ram,0x01d55b40) */
/* WARNING: Removing unreachable block (ram,0x01d55b44) */
/* WARNING: Removing unreachable block (ram,0x01d55b4c) */
/* WARNING: Removing unreachable block (ram,0x01d55b60) */
/* WARNING: Removing unreachable block (ram,0x01d55b64) */
/* WARNING: Removing unreachable block (ram,0x01d55b70) */
/* WARNING: Removing unreachable block (ram,0x01d55b78) */
/* WARNING: Removing unreachable block (ram,0x01d55c30) */
/* WARNING: Removing unreachable block (ram,0x01d55c4c) */
/* WARNING: Removing unreachable block (ram,0x01d55c50) */
/* WARNING: Removing unreachable block (ram,0x01d55c58) */
/* WARNING: Removing unreachable block (ram,0x01d55c6c) */
/* WARNING: Removing unreachable block (ram,0x01d55c70) */
/* WARNING: Removing unreachable block (ram,0x01d55c7c) */
/* WARNING: Removing unreachable block (ram,0x01d55c84) */

undefined1  [16]
FUN_01d55a8c(double param_1,double param_2,double param_3,double param_4,double param_5,
            double param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  double local_50;
  double dStack_48;
  
  dVar2 = 1.0 - param_3 * param_1;
  local_50 = param_5;
  dStack_48 = param_6;
  if (DAT_02323ca8 <= ABS(dVar2)) {
    dVar2 = (param_2 + param_4 * param_1) / dVar2;
    param_4 = param_4 + dVar2 * param_3;
    if ((ABS(dVar2) != INFINITY) && (ABS(param_4) != INFINITY)) {
      FUN_01d47748();
      local_50 = dVar2;
      dStack_48 = param_4;
    }
  }
  auVar1._8_8_ = dStack_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}

