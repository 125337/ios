@interface WCFinderModEventCGI : WCFinderBaseCgi
{
    unsigned int _scene; // +0x8
    NSString * _username; // +0x10
    unsigned long long _eventTopicId; // +0x18
    unsigned long long _objectId; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithUsername:(id)arg1 eventTopicId:(unsigned long long)arg2 scene:(unsigned int)arg3 objectId:(unsigned long long)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
