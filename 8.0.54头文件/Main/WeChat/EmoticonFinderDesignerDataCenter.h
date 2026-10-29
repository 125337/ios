@interface EmoticonFinderDesignerDataCenter : NSObject <AffEmoticonDesignerListDataExt>
{
    BOOL _needStaticsInfo; // +0x8
    unsigned int _designerUin; // +0xc
    NSString * _sessionID; // +0x10
    NSMutableArray * _storeItemList; // +0x18
    NSMutableArray * _emojiInfoList; // +0x20
    NSMutableArray * _ipSetList; // +0x28
    NSMutableArray * _delegates; // +0x30
    NSMutableDictionary * _hasMoreStatusDict; // +0x38
}
- (id)initWithDesignerUin:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)didFinishFirstFetch;
- (BOOL)hasCache;
- (void)startFirstFetch;
- (unsigned long long)totalEmoticonCount;
- (unsigned long long)totalEmojiCount;
- (void)fetchEmoticonDataFotType:(unsigned long long)arg1 andUsingOldReqBuf:(BOOL)arg2;
- (BOOL)hasMoreStatusForType:(unsigned long long)arg1;
- (void)onGotTotalEmoticonCount:(int)arg1 emojiCount:(int)arg2;
- (void)onFirstFetchFinished;
- (void)onFirstFetchFailed;
- (void)onFetchEmoticonFinishedForType:(int)arg1 hasMore:(BOOL)arg2;
- (void)onFetchEmoticonDataFailedForType:(int)arg1;
- (void)addDelegate:(id)arg1;
- (id)sessionID;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (void)setSessionID:(id)arg1;
- (BOOL)needStaticsInfo;
- (void)setNeedStaticsInfo:(BOOL)arg1;
- (id)storeItemList;
- (void)setStoreItemList:(id)arg1;
- (id)emojiInfoList;
- (void)setEmojiInfoList:(id)arg1;
- (id)ipSetList;
- (void)setIpSetList:(id)arg1;
- (id)delegates;
- (void)setDelegates:(id)arg1;
- (id)hasMoreStatusDict;
- (void)setHasMoreStatusDict:(id)arg1;
- (void).cxx_destruct;
@end

