@interface FavoritesItemLiteForSerialize : NSObject
{
    int _type; // +0x8
    NSArray * _dataList; // +0x10
}
+ (id)liteFromFavoritesItem:(id)arg1;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (int)type;
- (void)setType:(int)arg1;
- (id)dataList;
- (void)setDataList:(id)arg1;
- (void).cxx_destruct;
@end
