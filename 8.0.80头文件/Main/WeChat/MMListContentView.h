@interface MMListContentView : UIView
{
    id <MMListContentDataSource> _dataSource; // +0x8
    id <MMListContentUIDelegate> _uiDelegate; // +0x10
    UIStackView * _bkgStack; // +0x18
}
- (id)initWithDataSource:(id)arg1 uiDelegate:(id)arg2;
- (void)initbkgStack;
- (id)bkgStack;
- (void)addCells;
- (id)cellWithConfig:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)uiDelegate;
- (void)setUiDelegate:(id)arg1;
- (void)setBkgStack:(id)arg1;
- (void).cxx_destruct;
@end
