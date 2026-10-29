@interface _TtC6WeChat34KaraProphetBehaviorExtractAnalysis : NSObject <PBCoding, WCTColumnCoding>
{
     error; // +0x8
     bytes; // +0x18
     extractFeatures; // +0x28
}
+ (void)PBArrayAdd_error;
+ (void)PBArrayAdd_bytes;
+ (void)PBArrayAdd_extractFeatures;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)error;
- (void)setError:(id)arg1;
- (id)bytes;
- (void)setBytes:(id)arg1;
- (id)extractFeatures;
- (void)setExtractFeatures:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

