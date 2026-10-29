@interface IamBizAudioSubtitleMgr : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizAudioSubtitleMgrCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizAudioSubtitleMgrDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizAudioSubtitleMgrDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getLocalAsrParagraphAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getLocalAsrParagraphAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchAsrParagraphFromServerAsync:(id)arg1 ttsPlayCtx:(const void *)arg2 completion:(id /* block */)arg3;
- (void)fetchAsrParagraphFromServerAsync:(id)arg1 ttsPlayCtx:(const void *)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)clearCache:(id)arg1;
- (void)clearAllCache;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
