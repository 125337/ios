@interface WCPayCancelPayCgi : WCPayBaseCgi
{
    id <WCPayCancelPayCgiDelegate> _cgiDelegate; // +0x8
    NSString * _reqKey; // +0x10
}
- (id)initWithDelegate:(id)arg1 PayScene:(unsigned int)arg2 PayChannel:(unsigned int)arg3 ReqKey:(id)arg4;
- (void)startRequest;
- (BOOL)selectCgi;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (void).cxx_destruct;
@end

