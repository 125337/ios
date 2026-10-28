@interface FileTransferLogic : NSObject
- (unsigned int)previewType;
- (id)previewLiteappQuery;
- (void)openTaskFile:(id)arg1 fromUserClick:(BOOL)arg2;
- (BOOL)hasMoreNavigationItem;
- (BOOL)canAddToFavorites;
- (id)generateFavoriteItem;
- (BOOL)canForwardToDevice;
- (void)onForwardToDevice;
- (void)onOpenBy3rdApp;
- (void)onForwardToContact:(id)arg1 inViewController:(id)arg2;
- (id)commonReportViewParams;
@end
