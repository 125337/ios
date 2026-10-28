@interface VoiceTranslateMsgMgr : MMUserService <VoiceTransDelegate, IMsgExt, MMServiceProtocol>
{
    BOOL _disableAutoScroll; // +0x8
    VoiceTransInfo * _currTransInfo; // +0x10
    VoiceTransHelper * _transHelper; // +0x18
    VoiceTranslateUtil * _translateUtil; // +0x20
    NSMutableArray * _translateTaskArray; // +0x28
    VoiceTransSessionInfo * _translateSessionInfo; // +0x30
}
- (id)translateUtil;
- (id)translateTaskArray;
- (void)onServiceInit;
- (void)cleanAllResult;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)isOpenTranslateResult;
- (id)getTranslateInfo:(id)arg1;
- (void)removeTranslateRecord:(id)arg1 msgWrap:(id)arg2;
- (BOOL)isExistTranslateRecord:(id)arg1 msgWrap:(id)arg2;
- (void)addTranslateRecord:(id)arg1 msgWrap:(id)arg2;
- (void)hiddenTransResult:(id)arg1;
- (void)removeTranslateInfo:(id)arg1;
- (void)checkSessionInfos:(id)arg1;
- (void)stopAllScrollUp;
- (void)stopVoiceTranslate:(id)arg1;
- (void)translateVoiceMessage:(id)arg1;
- (void)translateVoiceMessage:(id)arg1 AutoScrollUp:(BOOL)arg2;
- (void)translateVoiceMessage:(id)arg1 AutoScrollUp:(BOOL)arg2 AutoTranslate:(BOOL)arg3;
- (void)CheckQueue;
- (void)onVoiceTransBegin:(id)arg1;
- (void)onVoiceTransVoiceID:(id)arg1 transResult:(id)arg2;
- (void)onVoiceTransEnd:(id)arg1 FromCache:(BOOL)arg2;
- (void)onVoiceTransFail:(id)arg1 baseResponse:(id)arg2;
- (BOOL)disableAutoScroll;
- (void)setDisableAutoScroll:(BOOL)arg1;
- (id)currTransInfo;
- (void)setCurrTransInfo:(id)arg1;
- (id)transHelper;
- (void)setTransHelper:(id)arg1;
- (void)setTranslateUtil:(id)arg1;
- (void)setTranslateTaskArray:(id)arg1;
- (id)translateSessionInfo;
- (void)setTranslateSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
