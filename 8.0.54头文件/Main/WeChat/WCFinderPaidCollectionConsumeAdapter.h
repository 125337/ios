@interface WCFinderPaidCollectionConsumeAdapter : NSObject
{
    int _collectionType; // +0x8
    FinderPaidCollectionInfo * _paidCollectionInfo; // +0x10
}
- (id)initWithPaidCollectionInfo:(id)arg1;
- (void)fetchPurchaseBillWithFinderUsername:(id)arg1 sourceFeedID:(id)arg2 reportScene:(int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (int)wecoinBusinessID;
- (id)productTitle;
- (id)productInsufficientTitle;
- (id)consumeAggrementString;
- (id)consumeFailTips;
- (id)consumeSuccTips;
- (id)consumeTimeoutTips;
- (id)consumeRepeatTips;
- (id)paidCollectionInfo;
- (void)setPaidCollectionInfo:(id)arg1;
- (int)collectionType;
- (void)setCollectionType:(int)arg1;
- (void).cxx_destruct;
@end

