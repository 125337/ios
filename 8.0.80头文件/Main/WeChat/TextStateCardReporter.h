@interface TextStateCardReporter : NSObject
{
    BOOL _isPullDown; // +0x8
    BOOL _hasNotify; // +0x9
    BOOL _hasIconRedDot; // +0xa
    BOOL _hasTruncatedLink; // +0xb
    unsigned int _sessionScene; // +0xc
    TextStateModel * _textState; // +0x10
    long long _scene; // +0x18
    long long _subScene; // +0x20
    NSString * _sceneSessionId; // +0x28
    unsigned long long _positionInCardList; // +0x30
    NSString * _cardListId; // +0x38
    unsigned long long _requestId; // +0x40
    long long _clickIconAction; // +0x48
    unsigned long long _cardExposeTime; // +0x50
    unsigned long long _cardDurationTime; // +0x58
    long long _exitType; // +0x60
}
+ (void)reportAction:(long long)arg1 scene:(long long)arg2 contact:(id)arg3;
+ (void)reportAction:(long long)arg1 actionExtraInfo:(id)arg2 textState:(id)arg3 scene:(long long)arg4 subScene:(long long)arg5 sessionId:(id)arg6 sceneSessionId:(id)arg7 positionInCardList:(unsigned long long)arg8 cardListId:(id)arg9 exitType:(long long)arg10 stayDuration:(unsigned long long)arg11 isPullDown:(BOOL)arg12 hasIconRedDot:(BOOL)arg13 hasTruncatedLink:(BOOL)arg14 requestId:(unsigned long long)arg15;
+ (id)getStatusIdAppendString:(id)arg1;
+ (BOOL)isImportantAction:(long long)arg1;
+ (id)genSessionIdForScene:(long long)arg1 textStateId:(id)arg2;
+ (id)getSessionIdForScene:(long long)arg1 textStateId:(id)arg2;
+ (id)extraInfoForAction:(long long)arg1 textState:(id)arg2 sameFriendCount:(unsigned long long)arg3 hasReddot:(BOOL)arg4;
+ (long long)relationShipWithUsername:(id)arg1;
+ (long long)clusterType;
+ (id)getMultiPublishRedDotsExtraInfo:(BOOL)arg1;
+ (unsigned long long)cardViewCountEnterReportScene:(long long)arg1 isPullDown:(BOOL)arg2;
- (void)cardExpose;
- (void)_innerCardExpose;
- (void)cardExitWithType:(long long)arg1;
- (void)reportAction:(long long)arg1;
- (void)reportAction:(long long)arg1 extraInfo:(id)arg2;
- (id)getSessionId;
- (id)textState;
- (void)setTextState:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (long long)subScene;
- (void)setSubScene:(long long)arg1;
- (unsigned int)sessionScene;
- (void)setSessionScene:(unsigned int)arg1;
- (id)sceneSessionId;
- (void)setSceneSessionId:(id)arg1;
- (unsigned long long)positionInCardList;
- (void)setPositionInCardList:(unsigned long long)arg1;
- (id)cardListId;
- (void)setCardListId:(id)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (BOOL)isPullDown;
- (void)setIsPullDown:(BOOL)arg1;
- (BOOL)hasNotify;
- (void)setHasNotify:(BOOL)arg1;
- (BOOL)hasIconRedDot;
- (void)setHasIconRedDot:(BOOL)arg1;
- (BOOL)hasTruncatedLink;
- (void)setHasTruncatedLink:(BOOL)arg1;
- (long long)clickIconAction;
- (void)setClickIconAction:(long long)arg1;
- (unsigned long long)cardExposeTime;
- (void)setCardExposeTime:(unsigned long long)arg1;
- (unsigned long long)cardDurationTime;
- (void)setCardDurationTime:(unsigned long long)arg1;
- (long long)exitType;
- (void)setExitType:(long long)arg1;
- (void).cxx_destruct;
@end
