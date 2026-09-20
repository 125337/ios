// hookOfficialTopSearchForClass: @ 004c799c

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffd8 : 0x004c7a08 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameSearchButton::hookOfficialTopSearchForClass_
               (ID param_1,SEL param_2,CLASS param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  CLASS CVar4;
  ID IVar5;
  ID IVar6;
  CLASS CVar7;
  long lVar8;
  
  puVar3 = PTR_s_WCRefine_checkAndUpdateMenuBarIt_026a4098;
  puVar2 = PTR_s_checkAndUpdateMenuBarItemSearchS_0269fe38;
  lVar8 = *(long *)PTR____stack_chk_guard_02578670;
  bVar1 = false;
  while (!bVar1) {
    CVar4 = param_3;
    _class_getInstanceMethod(param_3,puVar2);
    IVar5 = param_1;
    _class_getInstanceMethod(param_1,puVar3);
    if ((CVar4 != 0) && (IVar5 != 0)) {
      IVar6 = IVar5;
      _method_getImplementation();
      _method_getTypeEncoding(IVar5);
      _class_addMethod(param_3,puVar3,IVar6,IVar5);
      CVar7 = param_3;
      _class_getInstanceMethod(param_3,puVar3);
      if (CVar7 != 0) {
        _method_exchangeImplementations(CVar4,CVar7);
      }
    }
    bVar1 = true;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar8 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar8);
}

