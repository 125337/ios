@interface TingBypSyncHandler : NSObject <BypCustomHandlerProtocol>
+ (BOOL)handleBypSyncItems:(id)arg1;
+ (void)handleItem:(id)arg1;
+ (long long)parseStatusNotifyOpCode:(id)arg1;
@end
