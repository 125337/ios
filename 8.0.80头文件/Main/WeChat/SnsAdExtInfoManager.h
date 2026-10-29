@interface SnsAdExtInfoManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<sns_ad::SnsAdExtInfoManagerCppCover> cpp_cover; // +0x80
    weak_ptr<sns_ad::SnsAdExtInfoManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<sns_ad::SnsAdExtInfoManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)updateDeviceInfo:(id)arg1;
- (void)updateBizVersionInfo:(id)arg1;
- (void)updateDeviceCapabilityInfo:(id)arg1;
- (BOOL)isEnableOhosSnsAd;
- (BOOL)isEnableOhosSnsAdFromTimeline;
- (BOOL)isEnableOhosSnsAdFromTimelineWithUpdate;
- (BOOL)compareVersion:(id)arg1 targetVersion:(id)arg2;
- (void)setAdPassThroughInfo:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
