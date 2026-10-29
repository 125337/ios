@interface WeNoteZidlImplListenerImpl : NSObject <ZidlImplListener>
{
    NSString * _moduleName; // +0x8
    id /* block */ _initCompleteHandle; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)checkZidlImplReadyWithCompleteHandle:(id /* block */)arg1;
- (void)readyNotify;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (id /* block */)initCompleteHandle;
- (void)setInitCompleteHandle:(id /* block */)arg1;
- (void).cxx_destruct;
@end

