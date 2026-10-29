@interface FavExcerptItem : FavoritesModel
{
    NSString * _excerptKey; // +0x8
    NSString * _content; // +0x10
    NSString * _excerptUrl; // +0x18
}
- (id)excerptKey;
- (void)setExcerptKey:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)excerptUrl;
- (void)setExcerptUrl:(id)arg1;
- (void).cxx_destruct;
@end

