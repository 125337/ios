// cropEdgeForPoint: @0xb54f4

/* Function Stack Size: 0x20 bytes */

long_long WCMTOCropView::cropEdgeForPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  ulong uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_28;
  
  dVar7 = param_3.field1_0x8;
  dVar2 = param_3.field0_0x0;
  dVar8 = dVar7;
  uVar3 = _objc_msgSend_cropBoxFrame(param_1);
  uVar3 = _CGRectInset(uVar3);
  uVar1 = _CGRectContainsPoint(uVar3,dVar8,0x4050000000000000,0x4050000000000000,dVar2,dVar7);
  if ((uVar1 & 1) == 0) {
    dVar4 = (double)_CGRectGetMaxX(uVar3,dVar8,in_d2,in_d3);
    uVar1 = _CGRectContainsPoint
                      (dVar4 - 64.0,dVar8,0x4050000000000000,0x4050000000000000,dVar2,dVar7);
    if ((uVar1 & 1) == 0) {
      dVar5 = (double)_CGRectGetMaxY(uVar3,dVar8,in_d2,in_d3);
      uVar1 = _CGRectContainsPoint
                        (uVar3,dVar5 - 64.0,0x4050000000000000,0x4050000000000000,dVar2,dVar7);
      if ((uVar1 & 1) == 0) {
        uVar1 = _CGRectContainsPoint
                          (dVar4 - 64.0,dVar5 - 64.0,0x4050000000000000,0x4050000000000000,dVar2,
                           dVar7);
        if ((uVar1 & 1) == 0) {
          uVar6 = _CGRectGetWidth(uVar3,dVar8,in_d2,in_d3);
          uVar1 = _CGRectContainsPoint(uVar3,dVar8,uVar6,0x4050000000000000,dVar2,dVar7);
          if ((uVar1 & 1) == 0) {
            dVar4 = (double)_CGRectGetMaxY(uVar3,dVar8,in_d2,in_d3);
            uVar1 = _CGRectContainsPoint(uVar3,dVar4 - 64.0,uVar6,0x4050000000000000,dVar2,dVar7);
            if ((uVar1 & 1) == 0) {
              uVar6 = _CGRectGetHeight(uVar3,dVar8,in_d2,in_d3);
              uVar1 = _CGRectContainsPoint(uVar3,dVar8,0x4050000000000000,uVar6,dVar2,dVar7);
              if ((uVar1 & 1) == 0) {
                dVar4 = (double)_CGRectGetMaxX(uVar3,dVar8,in_d2,in_d3);
                uVar1 = _CGRectContainsPoint
                                  (dVar4 - 64.0,dVar8,0x4050000000000000,uVar6,dVar2,dVar7);
                if ((uVar1 & 1) == 0) {
                  local_28 = 0;
                }
                else {
                  local_28 = 4;
                }
              }
              else {
                local_28 = 8;
              }
            }
            else {
              local_28 = 6;
            }
          }
          else {
            local_28 = 2;
          }
        }
        else {
          local_28 = 5;
        }
      }
      else {
        local_28 = 7;
      }
    }
    else {
      local_28 = 3;
    }
  }
  else {
    local_28 = 1;
  }
  return local_28;
}

