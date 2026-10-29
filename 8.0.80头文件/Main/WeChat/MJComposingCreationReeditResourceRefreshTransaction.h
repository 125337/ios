@interface MJComposingCreationReeditResourceRefreshTransaction : NSObject
{
    BOOL _finished; // +0x8
    BOOL _finishing; // +0x9
    OMJCamResourceManager * _resourceManager; // +0x10
    NSString * _registeredTemplateID; // +0x18
    NSString * _updatedTemplateID; // +0x20
    unsigned long long _version; // +0x28
    NSString * _lastGoodZipPath; // +0x30
}
- (id)initWithResourceManager:(id)arg1 registeredTemplateID:(id)arg2 updatedTemplateID:(id)arg3 version:(unsigned long long)arg4 lastGoodZipPath:(id)arg5;
- (void)commit;
- (void)rollbackForError:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isFinished;
- (void)setFinished:(BOOL)arg1;
- (id)resourceManager;
- (void)setResourceManager:(id)arg1;
- (id)registeredTemplateID;
- (void)setRegisteredTemplateID:(id)arg1;
- (id)updatedTemplateID;
- (void)setUpdatedTemplateID:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (id)lastGoodZipPath;
- (void)setLastGoodZipPath:(id)arg1;
- (BOOL)isFinishing;
- (void)setFinishing:(BOOL)arg1;
- (void).cxx_destruct;
@end
