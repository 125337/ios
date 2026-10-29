@interface WCListMusicCellViewNew : WCListBaseCellView <MMWebImageViewDelegate>
{
    UIView * m_tailView; // +0x98
    TingItem * _tingItem; // +0xa0
    TingSharePlayButton * _playButton; // +0xa8
}
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
+ (id)titleWithDataItem:(id)arg1;
+ (id)trimDescWithDataItem:(id)arg1;
- (double)maxLabelWidth;
- (double)tailViewHeight;
- (void)initTailView;
- (void)initView;
- (void)onClickEvent;
- (id)tingItem;
- (void)setTingItem:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (void).cxx_destruct;
@end

