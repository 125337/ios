@interface WCPayF2FDeleteRecordResponse : NSObject
{
    long long _retCode; // +0x8
    NSString * _retMsg; // +0x10
    WCPayF2FReceiveDetailSummaryItem * _summaryItem; // +0x18
}
- (long long)retCode;
- (void)setRetCode:(long long)arg1;
- (id)retMsg;
- (void)setRetMsg:(id)arg1;
- (id)summaryItem;
- (void)setSummaryItem:(id)arg1;
- (void).cxx_destruct;
@end

