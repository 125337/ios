@interface AppNoteMessageCellViewClassic : CommonMessageCellView
{
    UILabel * m_titleLabel; // +0xb0
    UILabel * m_contentLabel; // +0xb8
}
- (void)layoutContentView;
- (void)layoutSubviewsImgs:(id)arg1 currentHeight:(double)arg2;
- (void)layoutSubviewsOnlyText:(id)arg1 currentHeight:(double)arg2;
- (id)getDisplayImgDatas:(id)arg1;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;
@end
