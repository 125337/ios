@interface TranslateSnsMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, WCFacadeExt>
{
    NSMutableDictionary * _dicSessionTransInfos; // +0x8
    NSMutableDictionary * _dicSequenceWaitTask; // +0x10
    NSMutableDictionary * _dicSequenceRunningTask; // +0x18
    unsigned int _sequence; // +0x20
    BOOL _isWorking; // +0x24
}
+ (id)getSnsTransDataWrap:(id)arg1 andScene:(int)arg2;
+ (id)getSnsTransDataWrapWithComment:(id)arg1 andScene:(int)arg2 andDataItemTid:(id)arg3;
+ (BOOL)checkContentOrComment:(id)arg1;
+ (BOOL)canShowTranslateView:(id)arg1;
+ (BOOL)showTranslatedTextBtn:(id)arg1;
+ (id)GetTranslateContent:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)resetSnsAllTranslatingStatus;
- (void)clearSnsTranslateCache;
- (void)changeLanguageAndCleanAllCache;
- (void)onServiceMemoryWarning;
- (id)getCommentSnsID:(id)arg1 withDataItemID:(id)arg2;
- (id)getContentSnsID:(id)arg1;
- (id)getSnsID:(id)arg1;
- (id)getDataWrapContent:(id)arg1;
- (void)callExtensionWhenPhotoContentChange:(id)arg1;
- (void)translateSns:(id)arg1;
- (void)tryTranslateMsgs;
- (id)getTranslateInfo:(id)arg1;
- (void)removeTranslateInfo:(id)arg1;
- (BOOL)showTranslatedTextNow:(id)arg1;
- (BOOL)shouldNeedShowAnimation:(id)arg1;
- (void)showAnimationEnd:(id)arg1;
- (BOOL)taskInQueue:(id)arg1;
- (id)pathForSessionTransInfos:(id)arg1;
- (void)loadSessionTransInfos:(id)arg1;
- (void)saveSessionTransInfos:(id)arg1;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)notifyTranslateSnsChanged:(id)arg1;
- (void)asyncNotifyTranslateSnsChanged:(id)arg1;
- (void)responseForTransTextResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
