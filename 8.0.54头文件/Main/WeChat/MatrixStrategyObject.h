@interface MatrixStrategyObject : NSObject
{
    NSMutableArray * _reportIDArray; // +0x8
    NSString * _strategyName; // +0x10
}
+ (id)loadReportID:(id)arg1;
- (id)initWithStrategy:(id)arg1;
- (id)getReportIDs;
- (void)addReportID:(id)arg1;
- (void)saveReportIDs;
- (id)reportIDArray;
- (void)setReportIDArray:(id)arg1;
- (id)strategyName;
- (void)setStrategyName:(id)arg1;
- (void).cxx_destruct;
@end

