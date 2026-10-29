@interface StatusLogicManager : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)updateIconConfigList:(id)arg1;
- (id)getIcon:(id)arg1;
- (id)getTopicGroupListData:(id)arg1;
- (id)getStatusName:(id)arg1;
- (id)findValidStatusIconAction:(id)arg1;
- (id)getStatusItemIconDescDataWithReq:(id)arg1;
- (void)updateClusterPresentType:(id)arg1;
- (id)getStatusPublishIconGroupWithReq:(id)arg1;
- (id)genStatusFeedMediaLocalFilePath:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
