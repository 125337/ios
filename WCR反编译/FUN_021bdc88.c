// FUN_021bdc88 @ 021bdc88

uint FUN_021bdc88(void)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  uint local_a8;
  uint local_80;
  uint local_54;
  
  pcVar1 = "swipeUp";
  uVar2 = 7;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("swipeUp",7,1);
  uVar3 = uVar2;
  FUN_021bd198();
  _swift_bridgeObjectRelease(uVar2);
  __sSS7isEmptySbvg(pcVar1,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_54 = 1;
  }
  else {
    pcVar1 = "swipeDown";
    uVar2 = 9;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("swipeDown",9,1);
    uVar3 = uVar2;
    FUN_021bd198();
    _swift_bridgeObjectRelease(uVar2);
    __sSS7isEmptySbvg(pcVar1,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    local_54 = (uint)pcVar1 ^ 1;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  if ((local_54 & 1) == 0) {
    pcVar1 = "swipeLeft";
    uVar2 = 9;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("swipeLeft",9,1);
    uVar3 = uVar2;
    FUN_021bd198();
    _swift_bridgeObjectRelease(uVar2);
    __sSS7isEmptySbvg(pcVar1,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    local_80 = (uint)pcVar1 ^ 1;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_80 = 1;
  }
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  if ((local_80 & 1) == 0) {
    pcVar1 = "swipeRight";
    uVar2 = 10;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("swipeRight",10,1);
    uVar3 = uVar2;
    FUN_021bd198();
    _swift_bridgeObjectRelease(uVar2);
    __sSS7isEmptySbvg(pcVar1,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    local_a8 = (uint)pcVar1 ^ 1;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_a8 = 1;
  }
  return local_a8 & 1;
}

