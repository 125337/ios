@interface MMFinderLiveConnectMicSilentSoloPkSelector : NSObject <MMFinderLiveConnectMicPkSelecting>
{
    id /* block */ _selectAction; // +0x8
}
- (void)updateWithModel:(id)arg1;
- (void)initiateSelection;
- (id /* block */)selectAction;
- (void)setSelectAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

