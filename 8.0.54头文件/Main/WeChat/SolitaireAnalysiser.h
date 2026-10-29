@interface SolitaireAnalysiser : NSObject
{
    id <SolitaireAnalysiserDelegate> _delegate; // +0x8
    NSString * _nsHighQualityChatName; // +0x10
    NSOperationQueue * _operationQueue; // +0x18
    SolitaireOperation * _analysisOperation; // +0x20
    NSOperationQueue * _analysisQueue; // +0x28
    NSMutableDictionary * _dicChatNameOperation; // +0x30
}
- (id)dicChatNameOperation;
- (id)operationQueue;
- (id)analysisQueue;
- (void)onAddNewTextMsg:(id)arg1;
- (void)addAnalysisOperationWithChatName:(id)arg1;
- (void)startAnalysisWithChatName:(id)arg1;
- (void)updateFoldInfoWithMsgWrap:(id)arg1 Info:(id)arg2;
- (void)analysisSolitaireWithContent:(id)arg1 FinishBlock:(id /* block */)arg2;
- (id)getSolitaireWithCallKeywordRegex:(id)arg1 ChatName:(id)arg2;
- (void)onActiveUsrName:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nsHighQualityChatName;
- (void)setNsHighQualityChatName:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (id)analysisOperation;
- (void)setAnalysisOperation:(id)arg1;
- (void)setAnalysisQueue:(id)arg1;
- (void)setDicChatNameOperation:(id)arg1;
- (void).cxx_destruct;
@end

