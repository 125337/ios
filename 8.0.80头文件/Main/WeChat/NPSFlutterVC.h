@interface NPSFlutterVC : MMFlutterViewController
{
    FinderNPSPlugin * _finderNPSPlugin; // +0x70
    NSString * _tid; // +0x78
}
- (void)onClickNPSQuestionBuffer:(id)arg1 answerBuffer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4;
- (void)onCloseNPS;
- (id)finderNPSPlugin;
- (void)setFinderNPSPlugin:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (void).cxx_destruct;
@end
