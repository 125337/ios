// FUN_021b4f20 @ 021b4f20

uint FUN_021b4f20(void)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  uint local_d4;
  code *local_a8;
  undefined8 local_40;
  undefined *local_38;
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
  local_a8 = (code *)pcVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_a8 == (code *)0x0) {
    local_a8 = (code *)0x0;
  }
  else {
    _swift_getObjCClassMetadata();
  }
  if (local_a8 != (code *)0x0) {
    pcVar3 = local_a8;
    _swift_getObjCClassFromMetadata();
    _class_getClassMethod();
    if (pcVar3 != (code *)0x0) {
      _method_getImplementation();
      _swift_getObjCClassFromMetadata();
      local_d4 = (uint)local_a8;
      (*pcVar3)();
      goto LAB_021b5158;
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
  ppuVar6 = &local_38;
  local_40 = 2;
  local_38 = puVar5;
  FUN_021c8cfc();
  __sSQ2eeoiySbx_xtFZTj(ppuVar6,&local_40,uVar7,puVar5);
  local_d4 = (uint)ppuVar6;
LAB_021b5158:
  return local_d4 & 1;
}

