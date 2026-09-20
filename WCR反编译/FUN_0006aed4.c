// FUN_0006aed4 @ 0006aed4

long FUN_0006aed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5
                 ,byte param_6)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long local_50 [3];
  byte local_33;
  byte local_32;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  undefined8 *puVar4;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar4 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar4,param_4);
  uVar3 = (uint)puVar4;
  local_32 = param_6;
  local_31 = param_5;
  FUN_0007799c();
  lVar5 = local_18;
  pcVar2 = DAT_028c7da8;
  local_33 = (byte)uVar3;
  if ((uVar3 & 1) != 0) {
    DAT_028c7f48 = DAT_028c7f48 + 1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  bVar1 = local_32;
  if ((local_33 & 1) != 0) {
    bVar1 = 0;
  }
  (*pcVar2)(lVar5,local_20,local_28,local_30,local_31 & 1,bVar1 & 1);
  uVar7 = local_28;
  if (((local_33 & 1) != 0) && (DAT_028c7f48 != 0)) {
    DAT_028c7f48 = DAT_028c7f48 + -1;
  }
  local_50[0] = lVar5;
  if (lVar5 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar6);
    if ((uVar7 & 1) != 0) {
      FUN_00077a3c(local_50[0],local_28);
    }
  }
  lVar5 = local_50[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return lVar5;
}

