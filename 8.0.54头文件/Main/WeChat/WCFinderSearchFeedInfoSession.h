@interface WCFinderSearchFeedInfoSession : NSObject
{
    BOOL _continueFlag; // +0x8
    NSMutableArray * _searchInfos; // +0x10
    NSData * _lastBuff; // +0x18
    NSString * _reqId; // +0x20
}
- (id)searchInfos;
- (BOOL)isEmpty;
- (void)setSearchInfos:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)reqId;
- (void)setReqId:(id)arg1;
- (void).cxx_destruct;
@end

