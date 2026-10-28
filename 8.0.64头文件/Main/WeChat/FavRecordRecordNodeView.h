@interface FavRecordRecordNodeView : FavRecordBaseNodeView
{
    MMUILabel * m_titleLabel; // +0x50
    MMUILabel * m_detailLabel; // +0x58
}
+ (double)heightForNodeWithDesc:(id)arg1;
- (void)layoutSubviews;
- (void)addContentSubView;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)onTouchCancel;
- (void)LongPressEvents;
- (void)updateBkgImage:(BOOL)arg1;
- (void).cxx_destruct;
@end
