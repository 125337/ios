@interface FavoritesFunctionCallRegister : FunctionCallBaseRegister
- (id)moduleName;
- (id)getAuthorizedNoteIdSet;
- (void)addAuthorizedNoteId:(unsigned int)arg1;
- (void)removeAuthorizedNoteId:(unsigned int)arg1;
- (BOOL)isNoteAuthorized:(unsigned int)arg1;
- (void)registerModuleFunctions;
- (id)getNoteTextContentFromItem:(id)arg1;
- (id)getFullTextFromHTMLInItem:(id)arg1;
- (id)extractPlainTextFromHTML:(id)arg1;
- (id)getNoteDictForItem:(id)arg1;
- (id)getRawHTMLFromItem:(id)arg1;
- (id)getRichNoteDictForItem:(id)arg1;
- (id)buildRichNoteItemWithHTML:(id)arg1;
- (void)applyRawHTMLToDataList:(id)arg1 html:(id)arg2;
- (void)applyRawHTMLToFavItem:(id)arg1 html:(id)arg2;
- (id)getFavDictForItem:(id)arg1;
@end
