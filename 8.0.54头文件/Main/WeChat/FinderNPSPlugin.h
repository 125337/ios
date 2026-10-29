@interface FinderNPSPlugin : NSObject <FinderNPSNativeAPI, MMFlutterPlugin>
{
    MMFlutterViewController * _flutterVC; // +0x8
    FinderNPSFlutterAPI * _flutterAPI; // +0x10
}
+ (id)plugin;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController:(id)arg1;
- (void)resignTextField;
- (void)onClickNPSQuestionBuffer:(id)arg1 answerBuffer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4 error:(id *)arg5;
- (void)onCloseNPSWithError:(id *)arg1;
- (id)flutterAPI;
- (void)setFlutterAPI:(id)arg1;
- (void).cxx_destruct;
@end

