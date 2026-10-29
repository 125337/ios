@interface MMLiveQcPollResponseOption : NSObject
{
    NSString * _optionId; // +0x8
    NSString * _content; // +0x10
    MMLiveQcPollQuestion * _followUp; // +0x18
}
+ (id)responseOptionWithBackendModel:(id)arg1 questionBackendModels:(id)arg2;
- (id)description;
- (id)optionId;
- (void)setOptionId:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)followUp;
- (void)setFollowUp:(id)arg1;
- (void).cxx_destruct;
@end
