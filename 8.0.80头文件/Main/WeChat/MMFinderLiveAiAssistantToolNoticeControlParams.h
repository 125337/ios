@interface MMFinderLiveAiAssistantToolNoticeControlParams : MMFinderLiveAiAssistantToolParams
{
    NSString * _action; // +0x8
    NSString * _noticeId; // +0x10
    NSString * _subAction; // +0x18
    NSString * _topic; // +0x20
    NSString * _introduction; // +0x28
    NSString * _startTime; // +0x30
    NSNumber * _untimed; // +0x38
}
+ (id)fieldOptions;
- (id)action;
- (void)setAction:(id)arg1;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (id)subAction;
- (void)setSubAction:(id)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)introduction;
- (void)setIntroduction:(id)arg1;
- (id)startTime;
- (void)setStartTime:(id)arg1;
- (id)untimed;
- (void)setUntimed:(id)arg1;
- (void).cxx_destruct;
@end
