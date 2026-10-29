@interface MMFinderLiveArticlePromoteEditPanel : MMFinderLiveLinkPromoteEditPanel
{
    id /* block */ _completion; // +0x8
}
- (id)titleText;
- (id)validUriPrefixes;
- (void)onLinkConfirmed:(id)arg1;
- (void)fetchArticleExtInfoForLink:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

