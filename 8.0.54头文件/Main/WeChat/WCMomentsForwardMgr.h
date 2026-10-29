@interface WCMomentsForwardMgr : MMObject <WCMomentsForwardBaseOpDelegate>
{
    NSMutableArray * _forwardArray; // +0x8
}
- (void)startForward:(id)arg1 toCustomContact:(id)arg2;
- (id)forwardArray;
- (void)onMomentsForwardOpDidSend:(id)arg1;
- (void)onMomentsForwardOpDidCancel:(id)arg1;
- (void)asyncRecordMicroMerchantForwardInteractionIfNeeded:(id)arg1;
- (void)setForwardArray:(id)arg1;
- (void).cxx_destruct;
@end

