@interface MMLiveQcPoll : NSObject
{
    NSString * _pollId; // +0x8
    NSString * _pollTaskId; // +0x10
    MMLiveQcPollQuestion * _leadingQuestion; // +0x18
}
+ (id)pollWithBackendModel:(id)arg1;
+ (void)printDiagnosticsForBackendModel:(id)arg1;
- (id)pollId;
- (void)setPollId:(id)arg1;
- (id)pollTaskId;
- (void)setPollTaskId:(id)arg1;
- (id)leadingQuestion;
- (void)setLeadingQuestion:(id)arg1;
- (void).cxx_destruct;
@end
