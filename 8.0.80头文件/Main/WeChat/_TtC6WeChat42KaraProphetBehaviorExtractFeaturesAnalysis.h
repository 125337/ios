@interface _TtC6WeChat42KaraProphetBehaviorExtractFeaturesAnalysis : NSObject <PBCoding, WCTColumnCoding>
{
     time; // +0x8
    void * heaviest; // +0x18
    void * nulls; // +0x20
}
+ (void)PBArrayAdd_time;
+ (void)PBArrayAdd_heaviest;
+ (void)PBArrayAdd_nulls;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)time;
- (void)setTime:(id)arg1;
- (id)heaviest;
- (void)setHeaviest:(id)arg1;
- (id)nulls;
- (void)setNulls:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
