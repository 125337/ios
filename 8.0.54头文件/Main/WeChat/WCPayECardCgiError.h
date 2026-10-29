@interface WCPayECardCgiError : WCPayBaseNetworkingError
{
    PopItem * _popItem; // +0x8
}
- (id)initWithErrorCode:(unsigned int)arg1 errorMsg:(id)arg2 popItem:(id)arg3;
- (id)description;
- (id)popItem;
- (void)setPopItem:(id)arg1;
- (void).cxx_destruct;
@end

