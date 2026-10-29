@interface FavListFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onFirstPageLoadedItems:(id)arg1 hasMore:(BOOL)arg2 isFolding:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)onNextPageLoadedItems:(id)arg1 hasMore:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)onItemsUpdatedItems:(id)arg1 completion:(id /* block */)arg2;
- (void)onItemsDeletedLocalIds:(id)arg1 completion:(id /* block */)arg2;
- (void)onFoldingChangedIsFolding:(BOOL)arg1 hiddenLocalIds:(id)arg2 completion:(id /* block */)arg3;
- (void)onSearchResultLoadedItems:(id)arg1 hasMore:(BOOL)arg2 keyword:(id)arg3 taskKey:(id)arg4 completion:(id /* block */)arg5;
- (void)onCapacityInfoUpdatedInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)onFilterTypesReadyFilterTypes:(id)arg1 tags:(id)arg2 completion:(id /* block */)arg3;
- (void)onFilterResultLoadedItems:(id)arg1 hasMore:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)onImageFilterResultLoadedItems:(id)arg1 hasMore:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)onFinderFilterResultLoadedItems:(id)arg1 hasMore:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)onLocationFilterResultLoadedCountries:(id)arg1 completion:(id /* block */)arg2;
- (void)onTagListUpdatedTags:(id)arg1 completion:(id /* block */)arg2;
- (void)onNativeMultiSelectCancelWithCompletion:(id /* block */)arg1;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end
