@interface ChatRoomToolWeAppCollectionCell : MMUIView
{
    MMWebImageView * m_appIconView; // +0x8
    MMUILabel * m_titleLabel; // +0x10
    ChatRoomToolWeAppInfo * m_chatRoomToolWeAppInfo; // +0x18
}
+ (CGSize)getCellSize;
+ (CGSize)getCellIconSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)resetView;
- (void)updateCellWithWeAppInfo:(id)arg1;
- (void)resizeTitleLabel;
- (id)m_appIconView;
- (void)setM_appIconView:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_chatRoomToolWeAppInfo;
- (void)setM_chatRoomToolWeAppInfo:(id)arg1;
- (void).cxx_destruct;
@end

