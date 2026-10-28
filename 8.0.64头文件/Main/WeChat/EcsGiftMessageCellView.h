@interface EcsGiftMessageCellView : CommonMessageCellView
{
    UILabel * _m_tagLabel; // +0xb0
    UILabel * _m_wishLabel; // +0xb8
    UILabel * _m_statusTagLabel; // +0xc0
}
- (void)layoutContentView;
- (void)updateStatus;
- (void)updateStatusLabel;
- (void)updateBgImageView:(BOOL)arg1;
- (void)layoutInternal;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)onAppear;
- (id)m_tagLabel;
- (void)setM_tagLabel:(id)arg1;
- (id)m_wishLabel;
- (void)setM_wishLabel:(id)arg1;
- (id)m_statusTagLabel;
- (void)setM_statusTagLabel:(id)arg1;
- (void).cxx_destruct;
@end
