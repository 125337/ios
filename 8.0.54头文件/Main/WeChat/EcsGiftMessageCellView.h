@interface EcsGiftMessageCellView : CommonMessageCellView
{
    UILabel * _m_tagLabel; // +0xa8
    UILabel * _m_wishLabel; // +0xb0
}
- (void)layoutContentView;
- (void)updateStatus;
- (void)updateBgImageView:(BOOL)arg1;
- (void)layoutInternal;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (id)m_tagLabel;
- (void)setM_tagLabel:(id)arg1;
- (id)m_wishLabel;
- (void)setM_wishLabel:(id)arg1;
- (void).cxx_destruct;
@end

