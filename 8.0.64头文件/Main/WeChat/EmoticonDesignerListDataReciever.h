@interface EmoticonDesignerListDataReciever : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<emoticon::EmoticonDesignerListDataRecieverCppCover> cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonDesignerListDataRecieverDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<emoticon::EmoticonDesignerListDataRecieverDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)onGotTotalEmoticonCount:(id)arg1 emoticonCount:(int)arg2 emojiCount:(int)arg3;
- (void)onFirstFetchFinished:(id)arg1;
- (void)onFirstFetchFailed:(id)arg1;
- (void)onFetchEmoticonFinishedFor:(id)arg1 dataType:(int)arg2 hasMore:(BOOL)arg3;
- (void)onFetchEmoticonDataFailedFor:(id)arg1 dataType:(int)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
