@interface MMLiveKtvThemeItemFetchRequest : NSObject
{
    NSString * _themeId; // +0x8
    id <MMLiveKtvThemeItemFetching> _fetchingProvider; // +0x10
}
- (id)themeId;
- (void)setThemeId:(id)arg1;
- (id)fetchingProvider;
- (void)setFetchingProvider:(id)arg1;
- (void).cxx_destruct;
@end

