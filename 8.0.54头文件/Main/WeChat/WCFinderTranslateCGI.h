@interface WCFinderTranslateCGI : WCBaseCgi
{
    NSArray * _translateInfoArray; // +0x8
    NSMutableDictionary * _keyMap; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
}
- (id)initWithTranslateInfos:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (unsigned int)_clientIDForId:(id)arg1;
- (id)translateInfoArray;
- (void)setTranslateInfoArray:(id)arg1;
- (id)keyMap;
- (void)setKeyMap:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

