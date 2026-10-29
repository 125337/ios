@interface WCBrandMPVoiceInputRecordView : CommonVoiceRecordView
{
    BOOL _hasDeliveredResult; // +0x8
    id /* block */ _exitWithoutResultBlock; // +0x10
}
- (void)removeFromSuperview;
- (BOOL)hasDeliveredResult;
- (void)setHasDeliveredResult:(BOOL)arg1;
- (id /* block */)exitWithoutResultBlock;
- (void)setExitWithoutResultBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
