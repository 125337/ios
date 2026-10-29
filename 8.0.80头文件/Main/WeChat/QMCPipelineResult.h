@interface QMCPipelineResult : NSObject
{
    id _command; // +0x8
    NSArray * _businessData; // +0x10
}
- (id)initWithCommand:(id)arg1 businessData:(id)arg2;
- (id)command;
- (void)setCommand:(id)arg1;
- (id)businessData;
- (void)setBusinessData:(id)arg1;
- (void).cxx_destruct;
@end
