@interface TextStateSimplifiedCardReportModel : NSObject
{
    NSString * _textStateId; // +0x8
    long long _scene; // +0x10
    long long _action; // +0x18
    unsigned long long _actionTimestamp; // +0x20
    long long _exitType; // +0x28
    unsigned long long _duration; // +0x30
    NSString * _sceneSessionId; // +0x38
    NSString * _cardListId; // +0x40
    unsigned long long _requestId; // +0x48
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (unsigned long long)actionTimestamp;
- (void)setActionTimestamp:(unsigned long long)arg1;
- (long long)exitType;
- (void)setExitType:(long long)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
- (id)sceneSessionId;
- (void)setSceneSessionId:(id)arg1;
- (id)cardListId;
- (void)setCardListId:(id)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

