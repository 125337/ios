@interface WAEJBindingBase : NSObject
{
    OpaqueJSValue * jsObject; // +0x8
    unsigned int uid_; // +0x10
    BOOL isJsObjectValid; // +0x14
    WAEJJavaScriptView * scriptView; // +0x18
    unsigned int _ownerId; // +0x20
}
+ (OpaqueJSValue *)createJSObjectWithContext:(OpaqueJSContext *)arg1 scriptView:(id)arg2 instance:(id)arg3;
- (id)initWithContext:(OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const OpaqueJSValue * *)arg3;
- (void)createWithJSObject:(OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (void)dealloc;
- (void)prepareGarbageCollection;
- (void)resetJSObject;
- (BOOL)isPaused;
- (id)scriptView;
- (unsigned int)ownerId;
- (void)setOwnerId:(unsigned int)arg1;
@end
