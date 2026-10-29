@interface MMFinderLiveProductQuestionBoxItem : NSObject
{
    BOOL _hasMsg; // +0x8
    BOOL _hasLoaded; // +0x9
    FinderLiveBoxId * _boxId; // +0x10
    id /* block */ _hasMsgCallback; // +0x18
    WCFinderLiveMsgSessionInfo * _session; // +0x20
    id /* block */ _loadedCallback; // +0x28
}
+ (id)genProductQuestionBoxWithSession:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)createBoxId;
- (BOOL)isEqual:(id)arg1;
- (id)sessionId;
- (BOOL)isCurrHasMsg;
- (void)onBoxLoaded;
- (void)checkSessionHasMsg;
- (BOOL)hasMsg;
- (void)setHasMsg:(BOOL)arg1;
- (id)boxId;
- (void)setBoxId:(id)arg1;
- (id /* block */)hasMsgCallback;
- (void)setHasMsgCallback:(id /* block */)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (BOOL)hasLoaded;
- (void)setHasLoaded:(BOOL)arg1;
- (id /* block */)loadedCallback;
- (void)setLoadedCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
