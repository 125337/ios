@interface MatrixTester : NSObject
{
    NSTimer * _runloopTimer; // +0x8
    NSTimer * _runloop2Timer; // +0x10
}
- (void)swiftCrash;
- (void)pureSwiftCrash;
- (void)notFoundSelectorCrash;
- (void)wrongFormatCrash;
- (void)deadSignalCrash;
- (void)nsexceptionCrash;
- (void)cppexceptionCrash;
- (void)cppToNsExceptionCrash;
- (void)childNsexceptionCrash;
- (void)overflowCrash;
- (void)foo;
- (void)fooo:(char *)arg1;
- (void)generateMainThreadLagLog;
- (void)generateMainThreadBlockToBeKilledLog;
- (void)testSpecialSceneOfLag;
- (void)runloop1Selector;
- (void)runloop2Selector;
- (void)costCPUALot;
- (void)writeMassData;
- (void)readMassData;
- (id)runloopTimer;
- (void)setRunloopTimer:(id)arg1;
- (id)runloop2Timer;
- (void)setRunloop2Timer:(id)arg1;
- (void).cxx_destruct;
@end

