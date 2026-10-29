@interface EcsBaseAsyncJsApiHandler : EcsBaseJsApiHandler
{
    NSMutableArray * _logicList; // +0x8
}
- (void)handle:(id)arg1 params:(id)arg2 callback:(id)arg3;
- (id)logicList;
- (void).cxx_destruct;
@end
