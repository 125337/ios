@interface WCFinderMusicTemplateSelectViewModel : WCFinderVideoTemplateSelectBasicViewModel
- (id)mmkvKey;
- (BOOL)hasLocalFirstTemplate;
- (id)localFirstTemplate;
- (id)genOmjTemplateArray;
- (void)getTemplateResourceWithSuccessful:(id /* block */)arg1 failed:(id /* block */)arg2;
- (void)startDownloadMediaResource:(id)arg1 successful:(id /* block */)arg2;
@end
