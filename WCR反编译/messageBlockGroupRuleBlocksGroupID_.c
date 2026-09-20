// messageBlockGroupRuleBlocksGroupID: @ 0219b3ac

/* Function Stack Size: 0x18 bytes */

bool WCRefineConfig::messageBlockGroupRuleBlocksGroupID_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  uint local_54;
  ulong local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar2 & 1) == 0)) {
    local_11 = false;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_messageBlockGroupRuleSelectedIDs_026c02b0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (uint)IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_messageBlockGroupRule_026c02a0);
    if (IVar3 != 0) {
      local_54 = local_54 & 0xff ^ 1;
    }
    local_54 = local_54 & 1;
    local_11 = local_54 != 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

