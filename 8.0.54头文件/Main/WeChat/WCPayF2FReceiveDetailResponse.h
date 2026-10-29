@interface WCPayF2FReceiveDetailResponse : NSObject
{
    long long _retCode; // +0x8
    NSString * _retMsg; // +0x10
    WCPayF2FReceiveDetailSummaryItem * _summaryItem; // +0x18
    NSArray * _recordList; // +0x20
}
- (long long)retCode;
- (void)setRetCode:(long long)arg1;
- (id)retMsg;
- (void)setRetMsg:(id)arg1;
- (id)summaryItem;
- (void)setSummaryItem:(id)arg1;
- (id)recordList;
- (void)setRecordList:(id)arg1;
- (void).cxx_destruct;
@end

