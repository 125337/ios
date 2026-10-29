@interface WCADQuestionExp : MMObject
{
    NSString * nsExpId; // +0x8
    NSMutableArray * aryQuestions; // +0x10
    NSArray * firstStepOrder; // +0x18
}
- (id)nsExpId;
- (void)setNsExpId:(id)arg1;
- (id)aryQuestions;
- (void)setAryQuestions:(id)arg1;
- (id)firstStepOrder;
- (void)setFirstStepOrder:(id)arg1;
- (void).cxx_destruct;
@end

