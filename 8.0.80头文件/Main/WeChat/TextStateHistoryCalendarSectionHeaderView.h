@interface TextStateHistoryCalendarSectionHeaderView : UICollectionReusableView
{
    BOOL _singleRowLayout; // +0x8
    TextStateHistoryCalendarSection * _section; // +0x10
    MMUILabel * _timeLabel; // +0x18
    MMUILabel * _topUseIconLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setSection:(id)arg1;
- (void)updateLayout;
- (void)setSingleRowLayout:(BOOL)arg1;
- (id)section;
- (BOOL)singleRowLayout;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)topUseIconLabel;
- (void)setTopUseIconLabel:(id)arg1;
- (void).cxx_destruct;
@end
