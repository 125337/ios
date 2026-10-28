@interface WCFinderQRCodeCgi : WCFinderBaseCgi
{
    id <WCFinderQRCodeCgiDelegate> _delegate; // +0x8
}
+ (id)qrCodeForContact:(id)arg1;
+ (id)qrCodeForFeedComment:(id)arg1 commentId:(unsigned long long)arg2;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
