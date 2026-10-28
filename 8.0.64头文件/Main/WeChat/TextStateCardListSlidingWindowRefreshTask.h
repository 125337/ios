@interface TextStateCardListSlidingWindowRefreshTask : NSObject
{
    BOOL _success; // +0x8
    NSString * _taskId; // +0x10
    NSArray * _textStateList; // +0x18
    id /* block */ _completion; // +0x20
    id /* block */ _getCurrentTextStateId; // +0x28
}
+ (id)textStateListFromJSONObject:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)description;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)textStateList;
- (void)setTextStateList:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)getCurrentTextStateId;
- (void)setGetCurrentTextStateId:(id /* block */)arg1;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
