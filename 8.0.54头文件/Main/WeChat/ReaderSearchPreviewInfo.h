@interface ReaderSearchPreviewInfo : NSObject
{
    BOOL _showHeader; // +0x8
    double _width; // +0x10
    double _widthMargin; // +0x18
    NSString * _searchText; // +0x20
    NSArray * _arrKeyword; // +0x28
}
- (BOOL)showHeader;
- (void)setShowHeader:(BOOL)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)widthMargin;
- (void)setWidthMargin:(double)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)arrKeyword;
- (void)setArrKeyword:(id)arg1;
- (void).cxx_destruct;
@end

