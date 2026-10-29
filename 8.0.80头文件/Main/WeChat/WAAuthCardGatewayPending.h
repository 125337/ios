@interface WAAuthCardGatewayPending : NSObject
{
    WAPNAuthGatewayFetcher * _fetcher; // +0x8
    WAAuthCardOnceResult * _result; // +0x10
}
- (id)fetcher;
- (void)setFetcher:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (void).cxx_destruct;
@end
