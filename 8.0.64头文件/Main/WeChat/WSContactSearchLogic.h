@interface WSContactSearchLogic : NSObject <IFTSContactMgrExt>
{
    unsigned int _bussinessType; // +0x8
    id <WSContactSearchLogicDelegate> _delegate; // +0x10
    NSString * _newestQueryText; // +0x18
    NSString * _taskKey; // +0x20
}
- (id)initWithBussinessType:(unsigned int)arg1;
- (void)dealloc;
- (void)cancelSearch;
- (void)handleTextChanged:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)onFTSContactSearchFinish:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)newestQueryText;
- (void)setNewestQueryText:(id)arg1;
- (unsigned int)bussinessType;
- (void)setBussinessType:(unsigned int)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (void).cxx_destruct;
@end
