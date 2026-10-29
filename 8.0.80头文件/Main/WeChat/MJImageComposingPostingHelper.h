@interface MJImageComposingPostingHelper : NSObject
+ (void)asyncGenerateFinderDataItemWithImageComposingExportResult:(id)arg1 userInfo:(id)arg2 finderUsername:(id)arg3 completion:(id /* block */)arg4;
+ (void)updateImagePostDataItem:(id)arg1 withMusicResult:(id)arg2;
+ (void)updateImagePostDataItem:(id)arg1 withLocalImportData:(id)arg2;
+ (void)updateImagePostDataItem:(id)arg1 withMusicLibraryResult:(id)arg2;
+ (id)copyLocalImportMusicForImagePost:(id)arg1 postId:(id)arg2;
+ (id)completedInfoWithPostSessionModel:(id)arg1 imageComposingUserInfo:(id)arg2;
@end
