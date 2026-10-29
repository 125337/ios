@interface QMCJsonBusinessDataProcessor : NSObject
- (id)mergeWithNonMcpData:(id)arg1 mcpBusinessData:(id)arg2;
- (void)processNonMcpData:(id)arg1 businessData:(id)arg2;
- (id)processNonMcpItem:(id)arg1 craftDataJson:(id)arg2;
@end
