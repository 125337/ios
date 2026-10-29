@interface MVImagePreviewDataSourceForFinder : MVImagePreviewDataSource
{
    id <MMMusicDataVM> _dataViewModel; // +0x8
}
- (id)initWithDataViewModel:(id)arg1;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewAssetTotal;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (id)generateSelectItemModelFromAssetInfo:(id)arg1;
- (id)dataViewModel;
- (void)setDataViewModel:(id)arg1;
- (void).cxx_destruct;
@end

