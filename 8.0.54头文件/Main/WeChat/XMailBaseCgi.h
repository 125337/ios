@interface XMailBaseCgi : WCBaseCgi
- (id)init;
- (void)setCgiNumber:(unsigned int)arg1;
- (void)startWithRequest:(id)arg1;
- (id)errorForResponse:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
@end

