@interface AbstractRingToneSubDetail : NSObject
{
    NSString * _title; // +0x8
    NSString * _authorDesc; // +0x10
    NSString * _thumbUrl; // +0x18
    NSMutableArray * _searchHitWords; // +0x20
    NSString * _outsideTitle; // +0x28
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)authorDesc;
- (void)setAuthorDesc:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)searchHitWords;
- (void)setSearchHitWords:(id)arg1;
- (id)outsideTitle;
- (void)setOutsideTitle:(id)arg1;
- (void).cxx_destruct;
@end

