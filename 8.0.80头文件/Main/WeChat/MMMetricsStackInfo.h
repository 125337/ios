@interface MMMetricsStackInfo : NSObject
{
    MatrixStackInfo * m_info; // +0x8
    NSString * m_symbolNames; // +0x10
    NSMutableArray * m_externalSymbolNames; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)stackHash;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_stackHash;
+ (const void *)stackFrames;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_stackFrames;
+ (const void *)symbolNames;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_symbolNames;
+ (const void *)externalSymbols;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_externalSymbols;
+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)generateOfflineStackReportItems:(id)arg1;
- (id)init;
- (id)initWithStackInfo:(MatrixStackInfo *)arg1;
- (void)dealloc;
- (unsigned long long)stackHash;
- (void)setStackHash:(unsigned long long)arg1;
- (id)stackFrames;
- (void)setStackFrames:(id)arg1;
- (id)frameAddresses;
- (id)symbolNames;
- (void)setSymbolNames:(id)arg1;
- (id)externalSymbols;
- (void)setExternalSymbols:(id)arg1;
- (unsigned int)externalSymbolCount;
- (unsigned long long)externalSymbolAtIndex:(unsigned int)arg1;
- (void)setExternalSymbolName:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)generateStackReportItem;
- (id)generateOfflineStackReportItem;
- (void).cxx_destruct;
@end
