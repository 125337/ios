@interface PageNumberView : 
{
    int _fileId; // +0x8
    shared_ptr<XFileIOSAdapter> _adapter; // +0x10
    long long _currentPage; // +0x20
    long long _totalPages; // +0x28
    UILabel * _pageLabel; // +0x30
}
- (id)initWithFrame:(int)arg1 frame:(CGRect)arg2;
- (void)setupView;
- (void)setupConstraints;
- (void)updateToPage:(long long)arg1 totalPage:(long long)arg2;
- (void)updatePageLabel;
- (void)setCurrentPage:(long long)arg1;
- (void)setTotalPages:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFontSize:(double)arg1;
- (long long)currentPage;
- (long long)totalPages;
- (id)pageLabel;
- (void)setPageLabel:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
