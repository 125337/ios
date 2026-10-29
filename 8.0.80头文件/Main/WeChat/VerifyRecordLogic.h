@interface VerifyRecordLogic : MMObject <PBMessageObserverDelegate>
{
    id <VerifyRecordLogicDelegate> _delegate; // +0x8
}
+ (void)printVerifyRecords:(id)arg1;
+ (id)getPrintSayHelloUpToCloudHello:(id)arg1 dicHellos:(id)arg2 arrHelloUserName:(id)arg3;
- (BOOL)getVerifyRecordHistoryWithVersion:(unsigned long long)arg1 syncScene:(unsigned int)arg2;
- (void)OnGetVerifyRecordHistoryResponse:(id)arg1;
- (BOOL)delVerifyRecordWithUserName:(id)arg1;
- (void)OnDelVerifyRecordResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
