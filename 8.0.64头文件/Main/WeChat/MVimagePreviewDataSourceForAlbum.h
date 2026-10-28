@interface MVimagePreviewDataSourceForAlbum : MVImagePreviewDataSource
{
    NSMutableArray * _modelList; // +0x8
}
- (id)initWithModelList:(id)arg1;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewAssetTotal;
- (id)generateSelectItemModelFromAssetInfo:(id)arg1;
- (id)modelList;
- (void)setModelList:(id)arg1;
- (void).cxx_destruct;
@end
