@interface MJMovieComposingReeditCoordinator : NSObject
{
    MJMovieComposingReeditParams * _entryParams; // +0x8
}
+ (id)liteAppQueryDictionaryWithQuery:(id)arg1;
- (id)initWithEntryParams:(id)arg1;
- (void)dealloc;
- (void)openTemplateReeditCreationPageFromVC:(id)arg1 completion:(id /* block */)arg2;
- (void)reopenOriginalMovieWithEntryParams:(id)arg1 resolvedError:(id)arg2 completion:(id /* block */)arg3;
- (void)applyTemplateReeditResultWithEntryParams:(id)arg1 resourceRefreshTransaction:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelReedit;
- (id)entryParams;
- (void)setEntryParams:(id)arg1;
- (void).cxx_destruct;
@end
