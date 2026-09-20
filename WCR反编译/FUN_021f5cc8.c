// FUN_021f5cc8 @ 021f5cc8

uint FUN_021f5cc8(void)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  uint local_cc;
  code *local_a0;
  undefined8 local_38;
  undefined *local_30;
  char *local_28;
  
  local_28 = (char *)0x0;
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
  local_28 = pcVar2;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("MMDarkModeConfigUtil",0x14,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar7);
  local_a0 = (code *)pcVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_a0 == (code *)0x0) {
    local_a0 = (code *)0x0;
  }
  else {
    _swift_getObjCClassMetadata();
  }
  if (local_a0 != (code *)0x0) {
    pcVar3 = local_a0;
    _swift_getObjCClassFromMetadata();
    _class_getClassMethod();
    if (pcVar3 != (code *)0x0) {
      _method_getImplementation();
      _swift_getObjCClassFromMetadata();
      local_cc = (uint)local_a0;
      (*pcVar3)();
      goto LAB_021f5ef8;
    }
  }
  uVar7 = 0;
  FUN_021c8c68();
  puVar4 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
  _objc_opt_self();
  FUN_022222a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_02223a60();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  ppuVar6 = &local_30;
  local_38 = 2;
  local_30 = puVar5;
  FUN_021c8cfc();
  __sSQ2eeoiySbx_xtFZTj(ppuVar6,&local_38,uVar7,puVar5);
  local_cc = (uint)ppuVar6;
LAB_021f5ef8:
  return local_cc & 1;
}

