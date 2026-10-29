@interface WAPNAuthFlutterCardSession : WAAgentAuthCardSession
{
    id /* block */ _onResult; // +0x8
    NSDictionary * _preparedCardJson; // +0x10
    NSDictionary * _resultBusinessData; // +0x18
}
- (id)initWithAppId:(id)arg1;
- (void)finishWithStatus:(unsigned long long)arg1 extra:(id)arg2;
- (BOOL)acceptWaitsForCGI;
- (void)confirmAcceptFromCardWithCompletion:(id /* block */)arg1;
- (id)buildAuthCardData;
- (id)buildFlutterCardData;
- (void)applyFlutterBusinessData:(id)arg1 forStatus:(unsigned long long)arg2;
- (id /* block */)onResult;
- (void)setOnResult:(id /* block */)arg1;
- (id)preparedCardJson;
- (void)setPreparedCardJson:(id)arg1;
- (id)resultBusinessData;
- (void)setResultBusinessData:(id)arg1;
- (void).cxx_destruct;
@end
