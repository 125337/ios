// _Call @0xa5f4

void _Call(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int iVar10;
  undefined8 local_170;
  undefined8 local_118;
  byte local_e1;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  byte local_89;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70 [3];
  long local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = _NSSelectorFromString(local_38);
  if (local_30 == 0) {
    local_28 = 0;
    local_4c = 1;
    goto LAB_0000b028;
  }
  uVar3 = _objc_opt_respondsToSelector(local_30,local_48);
  if ((uVar3 & 1) == 0) {
    _objc_msgSend_stringByAppendingString_(&cf_api_missing_,local_118,local_38);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _Trace(uVar4,PTR____NSDictionary0__struct_00110720);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_28 = 0;
    local_4c = 1;
    goto LAB_0000b028;
  }
  uVar4 = _objc_msgSend_methodSignatureForSelector_(local_30,local_118,local_48);
  local_58 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (local_58 == 0) {
LAB_0000a740:
    local_28 = 0;
    local_4c = 1;
  }
  else {
    lVar5 = _objc_msgSend_numberOfArguments(local_58,local_118);
    lVar6 = _objc_msgSend_count(local_40,local_118);
    if (lVar5 != lVar6 + 2) goto LAB_0000a740;
    uVar4 = _objc_msgSend_invocationWithMethodSignature_
                      (&_OBJC_CLASS___NSInvocation,local_118,local_58);
    local_70[0] = _objc_retainAutoreleasedReturnValue(uVar4);
    _objc_msgSend_setTarget_(local_70[0],local_118,local_30);
    _objc_msgSend_setSelector_(local_70[0],local_118,local_48);
    local_78 = 0;
    while( true ) {
      uVar3 = local_78;
      uVar7 = _objc_msgSend_count(local_40,local_118);
      lVar5 = local_58;
      if (uVar7 <= uVar3) break;
      local_89 = 0;
      uVar4 = _objc_msgSend_objectAtIndexedSubscript_(local_40,local_118,local_78);
      lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar4 = _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_118);
      lVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
      if (lVar5 - lVar6 == 0) {
        local_170 = 0;
      }
      else {
        uVar4 = _objc_msgSend_objectAtIndexedSubscript_(lVar5 - lVar6,local_40,local_118,local_78);
        local_170 = _objc_retainAutoreleasedReturnValue(uVar4);
        local_89 = 1;
        local_88 = local_170;
      }
      local_80 = (*(code *)PTR__objc_retain_00110460)(local_170);
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_88);
      }
      (*(code *)PTR__objc_release_00110458)(lVar6);
      (*(code *)PTR__objc_release_00110458)(lVar5);
      lVar5 = local_58;
      _objc_retainAutorelease();
      uVar4 = _objc_msgSend_getArgumentTypeAtIndex_(lVar5,local_118,local_78 + 2);
      local_98 = (char *)_Type(uVar4);
      uVar4 = local_80;
      if ((*local_98 == '@') || (*local_98 == '#')) {
        _objc_msgSend_setArgument_atIndex_(local_70[0],local_118,&local_80,local_78 + 2);
LAB_0000abcc:
        local_4c = 0;
      }
      else {
        uVar8 = _objc_opt_class(&_OBJC_CLASS___NSNumber);
        uVar2 = _objc_opt_isKindOfClass(uVar4,uVar8);
        if ((uVar2 & 1) != 0) {
          cVar1 = *local_98;
          if (cVar1 == 'B') {
            local_b1 = _objc_msgSend_boolValue(0,local_80,local_118);
            _objc_msgSend_setArgument_atIndex_(local_70[0],local_118,&local_b1,local_78 + 2);
          }
          else if (cVar1 == 'C') {
            local_b2 = _objc_msgSend_unsignedCharValue(0,local_80,local_118);
            _objc_msgSend_setArgument_atIndex_(local_70[0],local_118,&local_b2,local_78 + 2);
          }
          else if (cVar1 == 'I') {
            local_b0 = _objc_msgSend_unsignedIntValue(0,local_80,local_118);
            _objc_msgSend_setArgument_atIndex_(local_70[0],local_118,&local_b0,local_78 + 2);
          }
          else if (cVar1 == 'Q') {
            local_a8 = _objc_msgSend_unsignedLongLongValue(0,local_80,local_118);
            _objc_msgSend_setArgument_atIndex_(local_70[0],local_118,&local_a8,local_78 + 2);
          }
          else if (cVar1 == 'i') {
            local_ac = _objc_msgSend_intValue(0,local_80,local_118);
            _objc_msgSend_setArgument_atIndex_(local_70[0],local_118,&local_ac,local_78 + 2);
          }
          else {
            if (cVar1 != 'q') {
              local_28 = 0;
              local_4c = 1;
              goto LAB_0000abd4;
            }
            local_a0 = _objc_msgSend_longLongValue(0,local_80,local_118);
            _objc_msgSend_setArgument_atIndex_(local_70[0],local_118,&local_a0,local_78 + 2);
          }
          goto LAB_0000abcc;
        }
        local_28 = 0;
        local_4c = 1;
      }
LAB_0000abd4:
      _objc_storeStrong(&local_80,0);
      iVar10 = local_4c;
      if (local_4c != 0) goto LAB_0000af04;
      local_78 = local_78 + 1;
    }
    _objc_retainAutorelease(uVar3 - uVar7);
    uVar4 = _objc_msgSend_methodReturnType(lVar5,local_118);
    local_c0 = (char *)_Type(uVar4);
    if ((*local_c0 == '\0') || (pcVar9 = _strchr("v@#qQiIB",(int)*local_c0), pcVar9 == (char *)0x0))
    {
      local_28 = 0;
      iVar10 = 1;
      local_4c = 1;
    }
    else {
      _objc_msgSend_invoke(local_70[0],local_118);
      iVar10 = (int)*local_c0;
      if ((iVar10 == 0x23) || (iVar10 == 0x40)) {
        local_c8 = 0;
        _objc_msgSend_getReturnValue_(0,local_70[0],local_118,&local_c8);
        local_28 = (*(code *)PTR__objc_retain_00110460)(local_c8);
        iVar10 = 1;
        local_4c = 1;
      }
      else if (iVar10 == 0x42) {
        local_e1 = 0;
        _objc_msgSend_getReturnValue_(0,local_70[0],local_118,&local_e1);
        uVar4 = _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_118,local_e1 & 1);
        local_28 = _objc_retainAutoreleasedReturnValue(uVar4);
        iVar10 = 1;
        local_4c = 1;
      }
      else if (iVar10 == 0x49) {
        local_e0 = 0;
        _objc_msgSend_getReturnValue_(0,local_70[0],local_118,&local_e0);
        uVar4 = _objc_msgSend_numberWithUnsignedInt_(&_OBJC_CLASS___NSNumber,local_118,local_e0);
        local_28 = _objc_retainAutoreleasedReturnValue(uVar4);
        iVar10 = 1;
        local_4c = 1;
      }
      else if (iVar10 == 0x51) {
        local_d8 = 0;
        _objc_msgSend_getReturnValue_(0,local_70[0],local_118,&local_d8);
        uVar4 = _objc_msgSend_numberWithUnsignedLongLong_
                          (&_OBJC_CLASS___NSNumber,local_118,local_d8);
        local_28 = _objc_retainAutoreleasedReturnValue(uVar4);
        iVar10 = 1;
        local_4c = 1;
      }
      else if (iVar10 == 0x69) {
        local_dc = 0;
        _objc_msgSend_getReturnValue_(0,local_70[0],local_118,&local_dc);
        uVar4 = _objc_msgSend_numberWithInt_(&_OBJC_CLASS___NSNumber,local_118,local_dc);
        local_28 = _objc_retainAutoreleasedReturnValue(uVar4);
        iVar10 = 1;
        local_4c = 1;
      }
      else if (iVar10 == 0x71) {
        local_d0 = 0;
        _objc_msgSend_getReturnValue_(0,local_70[0],local_118,&local_d0);
        uVar4 = _objc_msgSend_numberWithLongLong_(&_OBJC_CLASS___NSNumber,local_118,local_d0);
        local_28 = _objc_retainAutoreleasedReturnValue(uVar4);
        iVar10 = 1;
        local_4c = 1;
      }
      else {
        iVar10 = iVar10 + -0x76;
        if (iVar10 == 0) {
          local_28 = (*(code *)PTR__objc_retain_00110460)(PTR____kCFBooleanTrue_00110730);
          iVar10 = 1;
          local_4c = 1;
        }
        else {
          local_4c = 0;
        }
      }
    }
LAB_0000af04:
    _objc_storeStrong(iVar10,local_70,0);
  }
  _objc_storeStrong(&local_58,0);
  if (local_4c == 0) {
    local_28 = 0;
    local_4c = 1;
  }
LAB_0000b028:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

