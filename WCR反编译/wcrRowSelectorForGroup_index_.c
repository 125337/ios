// wcrRowSelectorForGroup:index: @ 017c6828

/* Function Stack Size: 0x20 bytes */

SEL WCRefineAIPersonaLibraryViewController::wcrRowSelectorForGroup_index_
              (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  unsigned_long_long local_58;
  unsigned_long_long local_50;
  undefined **local_48;
  undefined *local_40;
  unsigned_long_long local_38;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_wcrPersonaRow__lu__lu);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_20;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,puVar2);
  if ((IVar3 & 1) == 0) {
    ppuVar4 = &local_78;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc0000000;
    local_6c = 0;
    local_68 = FUN_017c6994;
    local_60 = &DAT_02589070;
    local_58 = local_30;
    local_50 = local_38;
    _objc_retainBlock();
    ppuVar5 = ppuVar4;
    _imp_implementationWithBlock();
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    local_48 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_replaceMethod();
    local_18 = local_40;
  }
  else {
    local_18 = local_40;
  }
  return (SEL)local_18;
}

