@interface WCFinderPoiGroupBuyListOpenParams : NSObject
{
    NSString * _poiId; // +0x8
    NSString * _jumpInfoToGroupbuyByPass; // +0x10
    NSMutableDictionary * _reportDict; // +0x18
}
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (id)jumpInfoToGroupbuyByPass;
- (void)setJumpInfoToGroupbuyByPass:(id)arg1;
- (id)reportDict;
- (void)setReportDict:(id)arg1;
- (void).cxx_destruct;
@end
