@interface MMFinderLiveCompleteViewReplaySettingsCoverPickingRequest : NSObject
{
    NSString * _correlationId; // +0x8
    MMUIViewController * _pickerHostingVc; // +0x10
    id /* block */ _completionBlock; // +0x18
}
- (id)init;
- (id)correlationId;
- (void)setCorrelationId:(id)arg1;
- (id)pickerHostingVc;
- (void)setPickerHostingVc:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
