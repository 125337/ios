@interface ProtobufEventHandler : NSObject
- (void)OnProtocolStart:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
- (void)OnProtocolConnectFail:(id)arg1;
@end

