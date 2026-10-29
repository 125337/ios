@interface MMFinderLiveProductShareTask : MMFinderLiveECBaseShareTask
{
    BOOL _tryCurrentLiveIfSameAnchor; // +0x8
    BOOL _ignoreClickShareCommodityReport; // +0x9
    unsigned int _scene; // +0xc
    WCFinderDataItem * _finderDataItem; // +0x10
    unsigned long long _productID; // +0x18
    unsigned long long _realProductId; // +0x20
    NSString * _ecSource; // +0x28
    NSString * _promoterKey; // +0x30
    WCFinderLiveProductShareItem * _productShareItem; // +0x38
    id /* block */ _onGetData; // +0x40
}
+ (id)task;
- (id)init;
- (unsigned long long)getCurrentProductId;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (unsigned long long)productID;
- (void)setProductID:(unsigned long long)arg1;
- (unsigned long long)realProductId;
- (void)setRealProductId:(unsigned long long)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (BOOL)tryCurrentLiveIfSameAnchor;
- (void)setTryCurrentLiveIfSameAnchor:(BOOL)arg1;
- (id)promoterKey;
- (void)setPromoterKey:(id)arg1;
- (id)productShareItem;
- (void)setProductShareItem:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)ignoreClickShareCommodityReport;
- (void)setIgnoreClickShareCommodityReport:(BOOL)arg1;
- (id /* block */)onGetData;
- (void)setOnGetData:(id /* block */)arg1;
- (void).cxx_destruct;
@end

