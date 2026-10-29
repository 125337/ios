@interface WCFinderMusicFeedDraftVM : WCFinderMusicFeedVM <WCFinderFeedDraftKeyExt>
{
    WCFinderFeedDraft * _draftVM; // +0x78
}
+ (id)feedVMWithContentVM:(id)arg1 drfatVM:(id)arg2;
- (id)observeKey;
- (void)onFinderFeedDraftChanged:(id)arg1;
- (void)onFinderFeedDraftBindDraftId:(id)arg1 newDraft:(id)arg2;
- (void)onFinderFeedDraftUploadProgressChanged:(id)arg1;
- (BOOL)showProgress;
- (double)uploadProgress;
- (id)defaultIconWithSize:(CGSize *)arg1;
- (id)draftVM;
- (void)setDraftVM:(id)arg1;
- (void).cxx_destruct;
@end

