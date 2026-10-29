@interface QMCJsonMcpProcessResult : NSObject
{
    NSMutableArray * _commandSets; // +0x8
    NSMutableDictionary * _businessData; // +0x10
}
+ (id)emptyResult;
- (id)initWithCommandSets:(id)arg1 businessData:(id)arg2;
- (id)commandSets;
- (void)setCommandSets:(id)arg1;
- (id)businessData;
- (void)setBusinessData:(id)arg1;
- (void).cxx_destruct;
@end
