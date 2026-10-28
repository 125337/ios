@interface MVImagePreviewDataSource : NSObject <MMImagePreviewBrowserControllerDataSource>
{
    NSMutableArray * _selectedViewModels; // +0x8
    NSString * _identifier; // +0x10
    NSMutableArray * _selectedAssetInfosArray; // +0x18
}
- (BOOL)isPreviewSelectedOnly;
- (id)selectedAssetInfosForPreview;
- (BOOL)isPreviewSelectedAssetInfosContainsVideo;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewAssetTotal;
- (id)customBrowserViewForAssetInfo:(id)arg1;
- (BOOL)isPreviewStyleForFile;
- (BOOL)showSelectedNumbers;
- (void)reloadSelectedAssetInfos;
- (void)reloadSelectedWithSelectItemViewModels:(id)arg1;
- (id)selectedAssetInfosArray;
- (long long)indexForSelectedModel:(id)arg1;
- (id)generateAssetInfoFromModel:(id)arg1;
- (id)generateSelectItemModelFromAssetInfo:(id)arg1;
- (id)selectedViewModels;
- (void)setSelectedViewModels:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setSelectedAssetInfosArray:(id)arg1;
- (void).cxx_destruct;
@end
