// FUN_001bfed4 @0x1bfed4


void FUN_001bfed4(float param_1,float param_2)



{

  ulong uVar1;

  undefined1 auVar2 [16];

  undefined1 auVar3 [16];

  float fVar4;

  undefined1 auVar5 [16];

  undefined *local_40;

  undefined8 local_38;

  code *local_30;

  undefined *puStack_28;

  undefined8 local_20;

  undefined8 local_18;

  

  if ((DAT_003e97c3 & 1) == 0) {

    FUN_001bfa24();

  }

  if (DAT_003e97c2 == '\x01') {

    FUN_001bffdc(ZEXT816(0x3ff4000000000000));

    auVar3._0_8_ = (double)param_1;

    auVar3._8_8_ = (double)param_2;

    auVar5 = NEON_fmov(0x3ff0000000000000,8);

    auVar2._8_8_ = -(ulong)(auVar5._8_8_ < auVar3._8_8_);

    auVar2._0_8_ = -(ulong)(auVar5._0_8_ < auVar3._0_8_);

    auVar2 = NEON_fmaxnm(auVar3 ^ (auVar3 ^ auVar5) & auVar2,ZEXT216(0),8);

    fVar4 = (float)auVar2._0_8_;

    if (0.05 <= fVar4) {

      auVar3 = _CACurrentMediaTime();

      if (0.06 <= auVar3._0_8_ - DAT_003e97b0) {

        DAT_003e97b0 = auVar3._0_8_;

        uVar1 = FUN_001c009c();

        if ((uVar1 & 1) == 0) {

          auVar5._4_4_ = (float)auVar2._8_8_;

          auVar5._0_4_ = fVar4;

          auVar5._8_8_ = 0;

          FUN_001c0520(auVar5);

          return;

        }

        local_40 = PTR___NSConcreteStackBlock_003886f0;

        local_38 = 0xc0000000;

        local_30 = FUN_001c05e4;

        puStack_28 = &DAT_0038e810;

        local_20 = DAT_003e97b8;

        local_18 = CONCAT44((float)auVar2._8_8_,fVar4);

        _dispatch_async(PTR___dispatch_main_q_00388740,&local_40);

      }

    }

  }

  return;

}




