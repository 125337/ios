@interface FavRecordBaseNodeView : MMUIView
{
    UILabel * m_srcTitleLabel; // +0x8
    MMUILabel * m_srcTimeLabel; // +0x10
    UIView * m_contentView; // +0x18
    BOOL m_bIsLongPressHandled; // +0x20
    double m_fContentHeight; // +0x28
    id <FavRecordNodeViewDelegate> m_delegate; // +0x30
    NSSet * m_touches; // +0x38
    id <RecordNodeDataSource> dataSource; // +0x40
    FavoritesItemDataField * favData; // +0x48
    MMUILabel * m_srcTitlePostLabel; // +0x50
    MMHeadImageView * m_headImg; // +0x58
    UIView * m_sepLine; // +0x60
    MMImageView * m_iconNamePostfix; // +0x68
    FavRecordBaseNodeView * _referNodeView; // +0x70
}
+ (double)heightForData:(id)arg1;
+ (double)referNodeViewWidth;
- (id)initWithDataSource:(id)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)setNodeSize;
- (void)initSrcTitle;
- (void)initIconNamePostfixWithIcon:(id)arg1;
- (id)timeForDisplay:(int)arg1;
- (void)updateNodeWithTimePrefix:(int)arg1 headHidden:(BOOL)arg2 bottomLineHidden:(BOOL)arg3;
- (void)initContentView;
- (void)addContentSubView;
- (void)updateContentSubview;
- (BOOL)isTouchInContentView:(id)arg1;
- (id)getThumbImageView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onLongPressHeadView;
- (void)LongPressEvents;
- (void)pressedEvents;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)onLongTouch;
- (void)onClickAsRefer;
- (id)dataSource;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)favData;
- (id)m_touches;
- (id)referNodeView;
- (void)setReferNodeView:(id)arg1;
- (void).cxx_destruct;
@end
