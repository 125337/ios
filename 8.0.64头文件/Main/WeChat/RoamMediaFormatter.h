@interface RoamMediaFormatter : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<affroam::RoamMediaFormatterCppCover> cpp_cover; // +0x80
    weak_ptr<affroam::RoamMediaFormatterDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<affroam::RoamMediaFormatterDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)getHDLiveMediaID:(long long)arg1;
- (id)getLiveMediaID:(long long)arg1;
- (id)getHDMediaID:(long long)arg1;
- (id)getMediaID:(long long)arg1;
- (id)getThumbMediaID:(long long)arg1;
- (id)getGNThumbMediaID:(long long)arg1 index:(int)arg2;
- (id)getGNDataMediaID:(long long)arg1 index:(int)arg2;
- (id)getFavThumbMediaID:(long long)arg1 suffix:(id)arg2;
- (id)getFavMediaID:(long long)arg1 suffix:(id)arg2;
- (id)getHistoryThumbMediaID:(long long)arg1 suffix:(id)arg2;
- (id)getHistoryMediaID:(long long)arg1 suffix:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
