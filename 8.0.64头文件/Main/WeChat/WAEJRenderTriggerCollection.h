@interface WAEJRenderTriggerCollection : NSObject
{
    NSMutableDictionary * triggers; // +0x8
    int lastId; // +0x10
    WAEJJavaScriptView * scriptView; // +0x18
}
- (id)initWithScriptView:(id)arg1;
- (void)dealloc;
- (int)scheduleCallback:(OpaqueJSValue *)arg1 isMain:(BOOL)arg2;
- (void)cancelId:(int)arg1;
- (void)update;
@end
