@interface MMWebViewPresetUILogic : NSObject
{
    id <MMWebViewPresetUILogicDelegate> _delegate; // +0x8
    NSMutableDictionary * _functionHandlers; // +0x10
    NSDictionary * _functions; // +0x18
}
- (id)init;
- (void)handlePresetUIConfigs:(id)arg1 permissionList:(id)arg2;
- (id)handlerForFunction:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)functionHandlers;
- (void)setFunctionHandlers:(id)arg1;
- (id)functions;
- (void)setFunctions:(id)arg1;
- (void).cxx_destruct;
@end

