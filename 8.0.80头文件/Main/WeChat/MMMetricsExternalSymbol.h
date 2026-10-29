@interface MMMetricsExternalSymbol : NSObject
{
    unsigned long long _address; // +0x8
    NSString * _symbolName; // +0x10
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)address;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_address;
+ (const void *)symbolName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_symbolName;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
- (unsigned long long)address;
- (void)setAddress:(unsigned long long)arg1;
- (id)symbolName;
- (void)setSymbolName:(id)arg1;
- (void).cxx_destruct;
@end
