@interface MMFavComponentFactory : NSObject
+ (double)heightForFavItem:(id)arg1 cellStyle:(unsigned long long)arg2;
+ (double)heightForFavItem:(id)arg1 isMultiSelect:(BOOL)arg2 cellStyle:(unsigned long long)arg3;
+ (double)heightForFavItem:(id)arg1 isMultiSelect:(BOOL)arg2 cellStyle:(unsigned long long)arg3 isFoldBtn:(BOOL)arg4 isFolding:(BOOL)arg5;
+ (double)heightForFavItem:(id)arg1 isMultiSelect:(BOOL)arg2 multiSelectCellStyle:(unsigned long long)arg3 cellStyle:(unsigned long long)arg4 isFoldBtn:(BOOL)arg5 isFolding:(BOOL)arg6;
+ (id)createComponentByFavItem:(id)arg1 showDataSize:(BOOL)arg2 cellStyle:(unsigned long long)arg3 delegate:(id)arg4 isFoldBtn:(BOOL)arg5 isFolding:(BOOL)arg6 foldingSize:(long long)arg7;
+ (id)getFavTextCellText:(id)arg1;
+ (void)getFavNoteCellTitleAndDesc:(id)arg1 outTitle:(id *)arg2 outDesc:(id *)arg3;
+ (void)getFavNoteCellTitleAndDesc:(id)arg1 outTitle:(id *)arg2 outDesc:(id *)arg3 maxTitleLength:(unsigned long long)arg4;
+ (id)tryNeedConvertToItemWithData:(id)arg1 inItem:(id)arg2;
+ (id)createComponentByItemDataField:(id)arg1 inItem:(id)arg2 cellStyle:(unsigned long long)arg3 delegate:(id)arg4;
+ (double)heightForItemDataField:(id)arg1 inItem:(id)arg2 isMultiSelect:(BOOL)arg3 multiSelectCellStyle:(unsigned long long)arg4 cellStyle:(unsigned long long)arg5;
+ (int)dataEnumToItemEnum:(int)arg1;
+ (id)convertVoiceDurationToStr:(unsigned int)arg1;
+ (id)convertVoiceDurationToStrInDigits:(int)arg1;
+ (id)convertVideoDurationToStrInDigits:(int)arg1;
+ (id)getDataThumbPath:(id)arg1 largeImage:(BOOL)arg2;
+ (id)getFavNoteTitle:(id)arg1;
+ (id)genImageComponentDataFrom:(id)arg1;
+ (void)configImageComData:(id)arg1 withFavItem:(id)arg2;
+ (void)configTextComData:(id)arg1 withFavItem:(id)arg2 cellStyle:(unsigned long long)arg3;
+ (BOOL)hasThumbAtRightLayoutWithoutImageForComData:(id)arg1;
+ (void)getRecordTextComponentData:(id)arg1 WithItem:(id)arg2;
+ (void)newConfigNoteComData:(id)arg1 withFavItem:(id)arg2 cellStyle:(unsigned long long)arg3;
+ (void)configBaselineComData:(id)arg1 withFavItem:(id)arg2 showDataSize:(BOOL)arg3 cellStyle:(unsigned long long)arg4;
+ (void)getIconWithFavItem:(id)arg1 FavData:(id)arg2 DataFmt:(id)arg3 ImageComponentData:(id)arg4;
+ (id)getLogoImageWith:(id)arg1;
+ (id)getAuthorNameWith:(id)arg1;
@end
