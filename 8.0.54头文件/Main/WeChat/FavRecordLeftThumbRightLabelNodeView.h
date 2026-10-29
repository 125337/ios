@interface FavRecordLeftThumbRightLabelNodeView : FavRecordBaseNodeView
{
    MMUIImageView * m_thumbView; // +0x50
    NSString * m_titleText; // +0x58
    NSString * m_detailText; // +0x60
    UILabel * m_titleLabel; // +0x68
    UILabel * m_detailLabel; // +0x70
}
- (void)addContentSubView;
- (void)initDetailLabel;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)onLongTouch;
- (void)onTouchCancel;
- (void)updateBkgImage:(BOOL)arg1;
- (void)onClick;
- (void).cxx_destruct;
@end

