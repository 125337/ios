@interface WCSTrainBooster : NSObject
{
    WCSTrainModelRoute * _entryRoute; // +0x8
    NSMutableDictionary * _dicRoute; // +0x10
    NSMutableDictionary * _dicRouteExt; // +0x18
}
- (double)scoreByExtMode:(BOOL)arg1 outLeafNodeKeys:(id)arg2 features:(id)arg3;
- (BOOL)applyCondition:(unsigned long long)arg1 leftOperand:(double)arg2 rightOperand:(double)arg3;
- (double)passedHoursFromTimestamp:(unsigned int)arg1;
- (id)entryRoute;
- (void)setEntryRoute:(id)arg1;
- (id)dicRoute;
- (void)setDicRoute:(id)arg1;
- (id)dicRouteExt;
- (void)setDicRouteExt:(id)arg1;
- (void).cxx_destruct;
@end
