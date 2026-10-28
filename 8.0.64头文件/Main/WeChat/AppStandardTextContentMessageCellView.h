@interface AppStandardTextContentMessageCellView : CommonMessageCellView
{
    MMUILabel * _titleLabel; // +0xb0
    MMUILabel * _contentLabel; // +0xb8
    NSArray * _contentImgViewList; // +0xc0
}
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)initTitle;
- (void)initContent;
- (void)createOrUpdateLayout;
- (id)contentImgViewsInSize:(CGSize)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)contentImgViewList;
- (void)setContentImgViewList:(id)arg1;
- (void).cxx_destruct;
@end
