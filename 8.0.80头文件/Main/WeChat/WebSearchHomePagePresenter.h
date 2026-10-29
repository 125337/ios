@interface WebSearchHomePagePresenter : NSObject <WSInputProviderDelegate>
{
    MMUIViewController<WebSearchHomePage><WSWebViewPluginableProtocol> * _homePage; // +0x8
    WebSearchUseCase * _searchUseCase; // +0x10
    WebSearchContext * _originalContext; // +0x18
}
- (id)initWithHomePage:(id)arg1;
- (void)goSearchPageWithModBlock:(id /* block */)arg1;
- (void)onTapSearchBox;
- (void)registerDoSearchOperation;
- (void)onGetTextInput:(id)arg1 isFromVoice:(unsigned int)arg2;
- (id)homePage;
- (void)setHomePage:(id)arg1;
- (id)searchUseCase;
- (void)setSearchUseCase:(id)arg1;
- (id)originalContext;
- (void)setOriginalContext:(id)arg1;
- (void).cxx_destruct;
@end
