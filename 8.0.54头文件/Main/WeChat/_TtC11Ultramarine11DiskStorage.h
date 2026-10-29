@interface _TtC11Ultramarine11DiskStorage : _TtCs12_SwiftObject
{
     $defaultActor; // +0x0
     directory; // +0x0
     sizeLimit; // +0x0
     countLimit; // +0x0
     trimRatio; // +0x0
     observeTask; // +0x0
     fileCountOfLastCheck; // +0x0
     diskCostOfLastCheck; // +0x0
     fileManager; // +0x0
}
- (void)doDeepClean;
- (void)scheduleNextSweep;
@end

