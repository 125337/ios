@interface MMFinderLivePromoteManageReportData : NSObject
{
    int _advertisementType; // +0x8
    NSString * _businessId; // +0x10
    long long _actionType; // +0x18
}
+ (id)getPromoteManageReportDataWithPromoteItem:(id)arg1;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (long long)actionType;
- (void)setActionType:(long long)arg1;
- (int)advertisementType;
- (void)setAdvertisementType:(int)arg1;
- (void).cxx_destruct;
@end

