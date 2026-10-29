@interface WCFinderMusicFeedDraftVM : WCFinderMusicFeedVM <WCFinderFeedDraftKeyExt, WCFinderDraftProtocol>
{
    WCFinderFeedDraft * _draftVM; // +0x60
}
+ (id)feedVMWithContentVM:(id)arg1 drfatVM:(id)arg2;
- (id)observeKey;
- (id)draftId;
- (double)createTime;
- (unsigned long long)draftType;
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
