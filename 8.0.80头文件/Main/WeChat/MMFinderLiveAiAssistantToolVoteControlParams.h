@interface MMFinderLiveAiAssistantToolVoteControlParams : MMFinderLiveAiAssistantToolParams
{
    NSString * _action; // +0x8
    NSString * _question; // +0x10
    NSArray * _choices; // +0x18
    NSNumber * _durationMinutes; // +0x20
    NSNumber * _allowMultipleSelection; // +0x28
}
+ (id)fieldOptions;
- (id)action;
- (void)setAction:(id)arg1;
- (id)question;
- (void)setQuestion:(id)arg1;
- (id)choices;
- (void)setChoices:(id)arg1;
- (id)durationMinutes;
- (void)setDurationMinutes:(id)arg1;
- (id)allowMultipleSelection;
- (void)setAllowMultipleSelection:(id)arg1;
- (void).cxx_destruct;
@end
