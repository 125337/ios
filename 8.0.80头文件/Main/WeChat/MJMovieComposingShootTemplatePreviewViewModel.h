@interface MJMovieComposingShootTemplatePreviewViewModel : MJShootComposingTemplatePanelViewModel
{
    MJTemplateCamoSession * _camoSession; // +0x8
    MMCameraTemplateItem * _selectedTemplateItem; // +0x10
}
+ (id)buildCGIParamsWithMovieViewModel:(id)arg1;
+ (id)buildTemplateAssetItemsWithMovieViewModel:(id)arg1;
+ (void)appendTemplateAssetItemWithMJAssetInfo:(id)arg1 classifyResult:(id)arg2 toAssetItems:(id)arg3;
+ (void)appendTemplateAssetItemWithPHAsset:(id)arg1 classifyResult:(id)arg2 toAssetItems:(id)arg3;
+ (void)appendTemplateAssetItemWithAspectRatio:(double)arg1 duration:(double)arg2 assetType:(int)arg3 classifyResult:(id)arg4 toAssetItems:(id)arg5;
+ (int)templateAssetTypeWithPHAssetMediaType:(long long)arg1;
+ (double)aspectRatioWithMediaFilePath:(id)arg1 mediaType:(long long)arg2;
+ (double)durationWithMediaFilePath:(id)arg1 mediaType:(long long)arg2;
- (id)initWithMovieViewModel:(id)arg1;
- (void)updateSelectedTemplateItem:(id)arg1;
- (void)selectTemplateItemFromPanel:(id)arg1;
- (void)syncSelectedTemplateItemToListViewIfNeeded;
- (BOOL)isTemplateLoadedWithItem:(id)arg1;
- (void)startDownloadingTemplateWithItem:(id)arg1;
- (void)updateTemplateDownloadProgress:(float)arg1 templateID:(id)arg2;
- (void)finishTemplateDownloadDisplayWithID:(id)arg1 succeed:(BOOL)arg2;
- (void)insertSelectedTemplateItemIfNeeded:(id)arg1;
- (BOOL)isTemplateItem:(id)arg1 containedInList:(id)arg2;
- (unsigned long long)indexOfTemplateItem:(id)arg1 inList:(id)arg2;
- (id)camoSession;
- (void)setCamoSession:(id)arg1;
- (id)selectedTemplateItem;
- (void)setSelectedTemplateItem:(id)arg1;
- (void).cxx_destruct;
@end
