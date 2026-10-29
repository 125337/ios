@interface TextInputTranslatingMgr : NSObject
{
    BOOL _bInChatRoom; // +0x8
    id <TextInputTranslatingMgrDelegate> _delegate; // +0x10
    NSString * _nsTextViewContent; // +0x18
    unsigned long long _lastUpdateTime; // +0x20
    NSString * _language; // +0x28
    NSString * _nsChatName; // +0x30
    NSString * _nsLastUseResult; // +0x38
}
- (id)initWithDelegate:(id)arg1;
- (void)onUseTransResult:(id)arg1 newContent:(id)arg2;
- (id)getCurrentTextViewContent;
- (void)switchTranslateLanguage:(id)arg1 text:(id)arg2 inputID:(unsigned long long)arg3;
- (BOOL)startTranslateText:(id)arg1 inputID:(unsigned long long)arg2;
- (BOOL)changeTextViewContent:(id)arg1 inputID:(unsigned long long)arg2;
- (id)getPrefix;
- (void)requestTransTextWithInputID:(unsigned long long)arg1;
- (void)onRecieveTranslateResp:(id)arg1 orgMsg:(id)arg2 textViewContent:(id)arg3 inputID:(unsigned long long)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nsTextViewContent;
- (void)setNsTextViewContent:(id)arg1;
- (unsigned long long)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned long long)arg1;
- (BOOL)bInChatRoom;
- (void)setBInChatRoom:(BOOL)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)nsChatName;
- (void)setNsChatName:(id)arg1;
- (id)nsLastUseResult;
- (void)setNsLastUseResult:(id)arg1;
- (void).cxx_destruct;
@end

