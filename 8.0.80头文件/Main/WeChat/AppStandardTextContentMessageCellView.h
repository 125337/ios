@interface AppStandardTextContentMessageCellView : AppStandardContentBaseMessageCellView
{
    RichTextView * _titleTextView; // +0xb8
    RichTextView * _contentTextView; // +0xc0
    NSArray * _contentImgViewList; // +0xc8
}
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)initTitle;
- (void)initContent;
- (void)createOrUpdateLayout;
- (id)contentImgViewsInSize:(CGSize)arg1 limit:(unsigned long long)arg2;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)contentImgViewList;
- (void)setContentImgViewList:(id)arg1;
- (void).cxx_destruct;
@end
