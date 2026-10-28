@interface MMLiveFlowFanoutResultItem : NSObject
{
    BOOL _succeeded; // +0x8
    id _input; // +0x10
    id _result; // +0x18
}
- (BOOL)succeeded;
- (void)setSucceeded:(BOOL)arg1;
- (id)input;
- (void)setInput:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (void).cxx_destruct;
@end
