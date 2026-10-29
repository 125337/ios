@interface WCCentralManager : CBCentralManager
+ (BOOL)canSilientInitCentralManager;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
@end

