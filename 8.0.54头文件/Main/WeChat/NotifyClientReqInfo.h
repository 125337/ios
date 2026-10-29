@interface NotifyClientReqInfo : NSObject
{
    int _funcMsgScene; // +0x8
    NSString * _functionID; // +0x10
    NSString * _clientAIInfo; // +0x18
}
- (int)funcMsgScene;
- (void)setFuncMsgScene:(int)arg1;
- (id)functionID;
- (void)setFunctionID:(id)arg1;
- (id)clientAIInfo;
- (void)setClientAIInfo:(id)arg1;
- (void).cxx_destruct;
@end

