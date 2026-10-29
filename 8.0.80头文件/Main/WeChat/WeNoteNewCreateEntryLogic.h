@interface WeNoteNewCreateEntryLogic : NSObject
+ (void)saveNoteItem:(id)arg1;
+ (id)createNoteItemFromWebPageFavoritesItem:(id)arg1;
+ (id)createNoteItemFromPureText:(id)arg1;
+ (id)noteHTMLContentFromPureText:(id)arg1;
+ (BOOL)isNote:(id)arg1;
+ (BOOL)isUserOwnNote:(id)arg1;
@end
