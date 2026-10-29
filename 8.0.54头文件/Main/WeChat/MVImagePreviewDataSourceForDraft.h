@interface MVImagePreviewDataSourceForDraft : MVImagePreviewDataSource
{
    NSMutableArray * _draftItems; // +0x8
}
- (id)initWithDraftItems:(id)arg1;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewAssetTotal;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (id)identifier;
- (id)generateSelectItemModelFromAssetInfo:(id)arg1;
- (id)draftItems;
- (void)setDraftItems:(id)arg1;
- (void).cxx_destruct;
@end

