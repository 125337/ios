@interface BatchTransFavToC2CStage : UploadStateStage
{
    NSArray * _dataList; // +0x8
    CMessageWrap * _msgWrap; // +0x10
    NSMutableSet * _dataIdSet; // +0x18
    NSMutableArray * _arrUploadTask; // +0x20
    NSMutableArray * _arrFavTranCDNItem; // +0x28
}
- (id)initWithContext:(id)arg1;
- (void)start;
- (id)getStateName;
- (void)sendBatchTransRequest:(id)arg1;
- (void)HandleBatchTransCDNSucc:(id)arg1;
- (id)genBatchTransItemArrayWithDataList:(id)arg1 withClientStrId:(id)arg2;
- (id)dataList;
- (void)setDataList:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)dataIdSet;
- (void)setDataIdSet:(id)arg1;
- (id)arrUploadTask;
- (void)setArrUploadTask:(id)arg1;
- (id)arrFavTranCDNItem;
- (void)setArrFavTranCDNItem:(id)arg1;
- (void).cxx_destruct;
@end
