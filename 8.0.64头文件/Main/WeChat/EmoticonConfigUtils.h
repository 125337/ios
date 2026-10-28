@interface EmoticonConfigUtils : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonConfigUtilsCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonConfigUtilsDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonConfigUtilsDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (int)inputLimitEmotionBufSize;
- (int)inputLimitAppMsgEmotionBufSize;
- (int)inputLimitEmotionWidth;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
