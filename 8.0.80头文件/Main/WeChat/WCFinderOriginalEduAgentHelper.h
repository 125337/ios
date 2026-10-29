@interface WCFinderOriginalEduAgentHelper : NSObject <WCFinderOriginalEduActionSheetDelegate>
{
    WCFinderFeedContentVM * _contentVM; // +0x8
    unsigned long long _type; // +0x10
    MMUIViewController * _fromVC; // +0x18
    unsigned long long _sourcePageType; // +0x20
}
- (void)originalEduClickRuleAction:(id)arg1 fromVC:(id)arg2;
- (void)originalEduClickAcceptAction:(id)arg1;
- (void)originalEduClickRewardEdu;
- (void)originalEduClickHelpEdu;
- (void)interestsGuideClickEdu;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (unsigned long long)sourcePageType;
- (void)setSourcePageType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
