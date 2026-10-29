@interface ProductDetailLogicHelper : MMObject <LocationRetrieveDelegate, PBMessageObserverDelegate, IMsgExt>
{
    LocationRetriever * m_locationRetriver; // +0x8
    ScanProductItem * m_productItem; // +0x10
    unsigned long long lastMsgSvrId; // +0x18
    id <ProductDetailLogicHelperDelegate> _delegate; // +0x20
}
- (id)initWithProductItem:(id)arg1;
- (void)dealloc;
- (void)startAsyncGetActionInfo;
- (void)sendGetActionInfoRequest:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
