@interface FavDetailHeaderView : MMUIView
{
    UILabel * m_sourceTimeLabel; // +0x8
    UILabel * m_sourceTitleLabel; // +0x10
    UIView * m_contentView; // +0x18
    UIView * m_separateLine; // +0x20
    FavoritesItem * m_favItem; // +0x28
    CMessageWrap * m_messageWrap; // +0x30
    WCDataItem * m_wcDataItem; // +0x38
}
+ (double)getFavDetailHeaderHeight;
- (id)initWithFavItem:(id)arg1;
- (id)initWithFavItem:(id)arg1 withMessageWrap:(id)arg2 withWCDataItem:(id)arg3;
- (void)layoutSubviews;
- (void)initView;
- (id)getFavItem;
- (id)genMomentNoteTimeStringByUInt:(unsigned int)arg1;
- (void).cxx_destruct;
@end
