@interface WCFinderMSActivityCells : NSObject
+ (id)supportCellClasses;
+ (id)makeCellIdentifiers:(id)arg1;
+ (void)registerCellClassForTableView:(id)arg1 reuseQueue:(id)arg2;
+ (unsigned long long)calculateCommentIndexForContentVM:(id)arg1 cellIdentifier:(id)arg2;
+ (CGSize)calculateSizeForContentVM:(id)arg1 cellIdentifier:(id)arg2 size:(CGSize)arg3;
+ (id)wrapItemIdentifier:(id)arg1 tid:(id)arg2;
+ (id)wrapItemIdentifier:(id)arg1 commentId:(id)arg2 tid:(id)arg3;
+ (id)getItemIdentifier:(id)arg1;
@end
