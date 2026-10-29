@interface AppNoteMessageCellView : CommonMessageCellView
{
    UILabel * m_titleLabel; // +0xa8
    UILabel * m_contentLabel; // +0xb0
}
- (void)layoutContentView;
- (void)layoutSubviewsImgs:(id)arg1 currentHeight:(double)arg2;
- (void)layoutSubviewsOnlyText:(id)arg1 currentHeight:(double)arg2;
- (id)getDisplayImgDatas:(id)arg1;
- (BOOL)canShowFavoriteMenuItem;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;
@end

