@interface WCPayF2FReceiveHistoryResponse : NSObject
{
    BOOL _bIsAllDataLoadEnd; // +0x8
    unsigned int _svrRetTrynum; // +0xc
    long long _retCode; // +0x10
    NSString * _retMsg; // +0x18
    NSArray * _historyList; // +0x20
    unsigned long long _chooseFlag; // +0x28
    unsigned long long _loadMoreDirection; // +0x30
    unsigned long long _svrFromTimestamp; // +0x38
}
- (long long)retCode;
- (void)setRetCode:(long long)arg1;
- (id)retMsg;
- (void)setRetMsg:(id)arg1;
- (id)historyList;
- (void)setHistoryList:(id)arg1;
- (unsigned long long)chooseFlag;
- (void)setChooseFlag:(unsigned long long)arg1;
- (unsigned long long)loadMoreDirection;
- (void)setLoadMoreDirection:(unsigned long long)arg1;
- (BOOL)bIsAllDataLoadEnd;
- (void)setBIsAllDataLoadEnd:(BOOL)arg1;
- (unsigned long long)svrFromTimestamp;
- (void)setSvrFromTimestamp:(unsigned long long)arg1;
- (unsigned int)svrRetTrynum;
- (void)setSvrRetTrynum:(unsigned int)arg1;
- (void).cxx_destruct;
@end
