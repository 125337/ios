@interface MMFinderLiveFeedNoticeDetailBindItemView : UIView
{
    int _reportScene; // +0x8
    UIView * _topLine; // +0x10
    MMFinderLiveFeedNoticeDetailBindItemContentView * _contentView; // +0x18
    UIView * _bottomLine; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithAnchor:(id)arg1 notice:(id)arg2;
- (BOOL)isEmpty;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setReportScene:(int)arg1;
- (int)reportScene;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
