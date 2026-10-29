@interface NSESynthesizeSpeechMgr : NSObject <NSESynthesizeSpeechMsgDelegate>
{
    id /* block */ _contentHandler; // +0x8
    NSMutableDictionary * _contentHandlerDict; // +0x10
    NSMutableArray * _msgQueue; // +0x18
    NSMutableArray * _m_speechQueueRecordQueue; // +0x20
    NSRecursiveLock * _m_lock; // +0x28
}
+ (id)sharedInstance;
- (id)init;
- (void)onServiceInit;
- (void)checkAndSaveDefaultSpeechPos;
- (void)onReceiveApnsPayload:(id)arg1 withContentHandler:(id /* block */)arg2;
- (void)checkMsgQueue;
- (void)onCommonSpeechMsgPlayEnd;
- (void)addSpeechRecord:(id)arg1;
- (BOOL)isSpeechRecordExist:(id)arg1;
- (id /* block */)contentHandler;
- (void)setContentHandler:(id /* block */)arg1;
- (id)contentHandlerDict;
- (void)setContentHandlerDict:(id)arg1;
- (id)msgQueue;
- (void)setMsgQueue:(id)arg1;
- (id)m_speechQueueRecordQueue;
- (void)setM_speechQueueRecordQueue:(id)arg1;
- (id)m_lock;
- (void)setM_lock:(id)arg1;
- (void).cxx_destruct;
@end

