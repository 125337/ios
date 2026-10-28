@interface _TtC6WeChat34KaraProphetBehaviorPredictAnalysis : NSObject <PBCoding, WCTColumnCoding>
{
     time; // +0x8
     error; // +0x18
     modelDescription; // +0x28
     extractFeatures; // +0x38
}
+ (void)PBArrayAdd_time;
+ (void)PBArrayAdd_error;
+ (void)PBArrayAdd_modelDescription;
+ (void)PBArrayAdd_extractFeatures;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)time;
- (void)setTime:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)modelDescription;
- (void)setModelDescription:(id)arg1;
- (id)extractFeatures;
- (void)setExtractFeatures:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
