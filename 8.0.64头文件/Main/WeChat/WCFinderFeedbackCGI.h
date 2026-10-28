@interface WCFinderFeedbackCGI : WCFinderBaseCgi
{
    int _scene; // +0x8
    int _satisfactionQuestSubType; // +0xc
    unsigned long long _objectID; // +0x10
    unsigned long long _feedbackType; // +0x18
    long long _subType; // +0x20
    NSMutableArray * _subTypeList; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
    NSString * _nonceID; // +0x40
    NSString * _sessionBuffer; // +0x48
    unsigned long long _liveScene; // +0x50
}
- (id)initWithFeedbackType:(unsigned long long)arg1 subType:(long long)arg2 subTypeList:(id)arg3 objectID:(unsigned long long)arg4 nonceID:(id)arg5 sessionBuffer:(id)arg6 scene:(int)arg7 liveScene:(unsigned long long)arg8 sessionExtraKey:(id)arg9 satisfactionQuestSubType:(int)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (unsigned long long)feedbackType;
- (void)setFeedbackType:(unsigned long long)arg1;
- (long long)subType;
- (void)setSubType:(long long)arg1;
- (id)subTypeList;
- (void)setSubTypeList:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)liveScene;
- (void)setLiveScene:(unsigned long long)arg1;
- (int)satisfactionQuestSubType;
- (void)setSatisfactionQuestSubType:(int)arg1;
- (void).cxx_destruct;
@end
