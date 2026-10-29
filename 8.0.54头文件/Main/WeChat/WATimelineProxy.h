@interface WATimelineProxy : NSObject <WCCommitViewResultDelegate, IWATimelineService>
{
    id <IWATimelineCommitDelegate> _commitDelegate; // +0x8
}
- (id)getTimelineVCByData:(id)arg1;
- (id)weAppData2WCUploadTask:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)commitDelegate;
- (void)setCommitDelegate:(id)arg1;
- (void).cxx_destruct;
@end

