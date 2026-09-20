// FUN_021d010c @ 021d010c

uint FUN_021d010c(void)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 local_118;
  uint local_dc;
  code *local_b0;
  undefined8 local_40;
  undefined1 local_38 [8];
  char *local_30;
  
  local_30 = (char *)0x0;
  pcVar1 = "isDarkMode";
  uVar7 = 10;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("isDarkMode",10,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar7);
  pcVar2 = pcVar1;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = "MMDarkModeConfigUtil";
  uVar7 = 0x14;
  local_30 = pcVar2;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("MMDarkModeConfigUtil",0x14,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar7);
  local_b0 = (code *)pcVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_b0 == (code *)0x0) {
    local_b0 = (code *)0x0;
  }
  else {
    _swift_getObjCClassMetadata();
  }
  if (local_b0 != (code *)0x0) {
    pcVar3 = local_b0;
    _swift_getObjCClassFromMetadata();
    _class_getClassMethod();
    if (pcVar3 != (code *)0x0) {
      _method_getImplementation();
      _swift_getObjCClassFromMetadata();
      local_dc = (uint)local_b0;
      (*pcVar3)();
      goto LAB_021d036c;
    }
  }
  uVar4 = 0;
  FUN_021c8c68();
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  uVar7 = unaff_x20;
  FUN_022239e0(unaff_x20,local_118);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  uVar5 = uVar7;
  FUN_02223a60(uVar7,local_118);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  puVar6 = local_38;
  local_40 = 2;
  FUN_021c8cfc();
  __sSQ2eeoiySbx_xtFZTj(puVar6,&local_40,uVar4,uVar5);
  local_dc = (uint)puVar6;
LAB_021d036c:
  return local_dc & 1;
}

