// FUN_021f1194 @ 021f1194

/* WARNING: Type propagation algorithm not settling */

double FUN_021f1194(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   double param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined8 local_b8;
  long local_b0 [3];
  long local_98;
  double local_90;
  undefined8 local_88;
  long local_80 [3];
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  double local_28;
  
  local_90 = 0.0;
  lVar3 = param_7;
  dVar5 = param_1;
  local_68 = param_7;
  local_60 = param_8;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  FUN_021fb08c();
  FUN_021c91ec(&local_68,PTR___sSiN_025789d8);
  puVar1 = PTR___sSiN_025789d8;
  local_80[1] = 0;
  local_80[0] = param_7 + -1;
  if (SBORROW8(param_7,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x21f1390);
    (*pcVar2)();
  }
  dVar4 = dVar5 * param_1;
  __ss3maxyxx_xtSLRzlF
            (local_80 + 2,local_80 + 1,local_80,PTR___sSiN_025789d8,PTR___sSiSLsWP_025789e8);
  local_88 = local_80[2];
  FUN_021c91ec(&local_88,puVar1,lVar3);
  dVar5 = dVar5 * param_1 + dVar4 * param_3 + param_5 * 2.0;
  local_98 = param_8;
  local_90 = dVar5;
  FUN_021c91ec(&local_98,puVar1,lVar3);
  puVar1 = PTR___sSiN_025789d8;
  local_b0[1] = 0;
  local_b0[0] = param_8 + -1;
  if (!SBORROW8(param_8,1)) {
    __ss3maxyxx_xtSLRzlF
              (local_b0 + 2,local_b0 + 1,local_b0,PTR___sSiN_025789d8,PTR___sSiSLsWP_025789e8);
    local_b8 = local_b0[2];
    FUN_021c91ec(&local_b8,puVar1,lVar3);
    return dVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x21f1394);
  (*pcVar2)();
}

