@interface MMAlbumDataProviderForPHAssetFramework : NSObject
+ (void)AllMMAlbumsForPHFrameworkWith:(id /* block */)arg1 errorBlock:(id /* block */)arg2 options:(id)arg3 callbackOnMainThread:(BOOL)arg4;
+ (id)getAlbumFromAlbumType:(long long)arg1 ForSubType:(long long)arg2 options:(id)arg3;
+ (id)getAlbumIdentifier:(id)arg1 options:(id)arg2;
+ (id)getAlbumIdentifiers:(id)arg1 options:(id)arg2;
+ (id)firstAlbumWithOptions:(id)arg1;
+ (id)screenshotAlbum;
+ (id)getChangeInfoForResult:(id)arg1 inOriginalAlbum:(id)arg2;
@end
