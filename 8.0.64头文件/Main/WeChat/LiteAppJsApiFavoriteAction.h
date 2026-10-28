@interface LiteAppJsApiFavoriteAction : LiteAppJsApi
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (BOOL)checkIdentifierPrefixWith:(id)arg1;
- (void)addFavoritesItemByParam:(id)arg1;
- (void)delFavoritesItemByParam:(id)arg1;
- (id)getLiteAppItemFrom:(id)arg1;
@end
