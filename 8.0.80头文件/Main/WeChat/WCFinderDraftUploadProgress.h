@interface WCFinderDraftUploadProgress : NSObject <WCFinderDraftUploadProgress>
{
    WCFinderFeedDraft * _draft; // +0x8
    id <WCFinderDraftUploadProgressDelegate> _delegate; // +0x10
    NSArray * _combinedProgresses; // +0x18
}
+ (id)progressWithCombineProgresses:(id)arg1;
- (double)value;
- (void)flushProgressValue;
- (id)draft;
- (void)setDraft:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)combinedProgresses;
- (void)setCombinedProgresses:(id)arg1;
- (void).cxx_destruct;
@end
