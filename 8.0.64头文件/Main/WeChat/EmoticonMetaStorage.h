@interface EmoticonMetaStorage : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonMetaStorageCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonMetaStorageDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonMetaStorageDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)loadStoreItemFromCache:(id)arg1;
- (void)saveStoreItemToCache:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
