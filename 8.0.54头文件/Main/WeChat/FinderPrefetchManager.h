@interface FinderPrefetchManager : NSObject
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
- (void)initWithDbDirPath:(id)arg1;
- (void)updateLocalBackupFeed:(id)arg1 commentScene:(int)arg2 feedSource:(unsigned long long)arg3;
- (void)removeLocalBackupFeeds:(id)arg1;
- (id)localFeedArray:(int)arg1 commentScene:(int)arg2 limitCount:(int)arg3;
- (id)localFeedArrayWithFeedSource:(unsigned long long)arg1 commentScene:(int)arg2 limitCount:(int)arg3;
- (BOOL)hasEnoughValidLocalFeeds:(int)arg1 commentScene:(int)arg2 count:(int)arg3;
- (BOOL)canShowEduTipsWithKey:(int)arg1;
- (void)markShowOnceEduTipsWithKey:(int)arg1;
- (void)markEduTipsNeverShowWithKey:(int)arg1;
- (void)resetEduTipsRecordWithKey:(int)arg1;
- (void)updateEduTipsSvrFlag:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

