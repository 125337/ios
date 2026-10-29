@interface QMCProcessContext : NSObject
{
    NSDictionary * _mcpItem; // +0x8
    NSDictionary * _craftDataJson; // +0x10
    long long _dataType; // +0x18
    NSString * _commandType; // +0x20
    NSArray * _preprocessedFullData; // +0x28
    NSArray * _preprocessedCommandData; // +0x30
    id _command; // +0x38
    NSArray * _businessData; // +0x40
}
- (id)initWithMcpItem:(id)arg1 craftDataJson:(id)arg2;
- (id)mcpItem;
- (id)craftDataJson;
- (long long)dataType;
- (void)setDataType:(long long)arg1;
- (id)commandType;
- (void)setCommandType:(id)arg1;
- (id)preprocessedFullData;
- (void)setPreprocessedFullData:(id)arg1;
- (id)preprocessedCommandData;
- (void)setPreprocessedCommandData:(id)arg1;
- (id)command;
- (void)setCommand:(id)arg1;
- (id)businessData;
- (void)setBusinessData:(id)arg1;
- (void).cxx_destruct;
@end
