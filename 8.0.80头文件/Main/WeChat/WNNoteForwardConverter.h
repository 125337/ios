@interface WNNoteForwardConverter : MMObject
+ (id)noteContentDataInFavItem:(id)arg1;
+ (BOOL)isMarkdownNoteFavItem:(id)arg1;
+ (BOOL)isForwardMdNoteToHtmlLocallyEnabled;
+ (BOOL)checkHtml:(id)arg1 containsAllAttachmentsInFavItem:(id)arg2 source:(id)arg3;
+ (void)reportAttachmentLostInFavItem:(id)arg1 missingData:(id)arg2 source:(id)arg3 htmlLength:(unsigned long long)arg4;
+ (id)favItemByReplacingNoteContentWithHtml:(id)arg1 inFavItem:(id)arg2;
+ (void)prepareForwardFavItem:(id)arg1 completion:(id /* block */)arg2;
+ (id)favItemByExportingHtmlFromEditor:(id /* block */)arg1 inFavItem:(id)arg2;
+ (void)prepareForwardFavItemList:(id)arg1 completion:(id /* block */)arg2;
+ (void)prepareForwardFavItemList:(id)arg1 atIndex:(unsigned long long)arg2 results:(id)arg3 completion:(id /* block */)arg4;
@end
