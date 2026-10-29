@interface FavTVItem : FavoritesModel
{
    NSString * _tvTitle; // +0x8
    NSString * _tvDesc; // +0x10
    NSString * _thumbUrl; // +0x18
    NSString * _tvInfo; // +0x20
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)tvTitle;
- (void)setTvTitle:(id)arg1;
- (id)tvDesc;
- (void)setTvDesc:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)tvInfo;
- (void)setTvInfo:(id)arg1;
- (void).cxx_destruct;
@end

