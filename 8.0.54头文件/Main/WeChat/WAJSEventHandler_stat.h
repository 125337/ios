@interface WAJSEventHandler_stat : WAJSEventHandler_BaseEvent
{
    NSMutableDictionary * _recursiveDic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)innerHandleJSEven:(id)arg1;
- (id)dicFromStat:(stat)arg1;
- (void)traversePath:(id)arg1 isLocalCache:(BOOL)arg2;
- (id)recursiveDic;
- (void)setRecursiveDic:(id)arg1;
- (void).cxx_destruct;
@end

