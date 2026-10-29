@interface EmoticonFinderDesignerDataSource : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    EmoticonFinderDesignerDataSourceCppCover cpp_cover; // +0x80
    weak_ptr<emoticon::EmoticonFinderDesignerDataSourceDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<emoticon::EmoticonFinderDesignerDataSourceDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)startFirstFetch:(int)arg1 needStatics:(BOOL)arg2;
- (void)fetchMoreDataFor:(int)arg1 emoticonType:(int)arg2 cleanReq:(BOOL)arg3;
- (id)getEmojiInfoList:(int)arg1;
- (id)getIpSetList:(int)arg1;
- (id)getStorePackList:(int)arg1;
- (BOOL)isTypeHasMore:(int)arg1 emoticonType:(int)arg2;
- (BOOL)hasCache:(int)arg1;
- (int)totalEmoticonCount:(int)arg1;
- (int)totalEmojiCount:(int)arg1;
- (BOOL)didFinishFirstFetch:(int)arg1;
- (void)onDisplayEnded:(int)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

