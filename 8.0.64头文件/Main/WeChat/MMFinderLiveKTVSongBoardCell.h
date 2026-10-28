@interface MMFinderLiveKTVSongBoardCell : UICollectionViewCell
{
    BOOL _canShowtabIndicatorView; // +0x8
    unsigned int _boardType; // +0xc
    MMUILabel * _boardLabel; // +0x10
    MMUILabel * _subBoardLabel; // +0x18
    UIView * _tabIndicatorView; // +0x20
}
+ (id)cellIdentifier;
+ (CGSize)cellSizeWithLabel:(id)arg1 boardType:(unsigned int)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithBoardName:(id)arg1 boardType:(unsigned int)arg2 isChosen:(BOOL)arg3;
- (id)boardLabel;
- (void)setBoardLabel:(id)arg1;
- (id)subBoardLabel;
- (void)setSubBoardLabel:(id)arg1;
- (unsigned int)boardType;
- (void)setBoardType:(unsigned int)arg1;
- (id)tabIndicatorView;
- (void)setTabIndicatorView:(id)arg1;
- (BOOL)canShowtabIndicatorView;
- (void)setCanShowtabIndicatorView:(BOOL)arg1;
- (void).cxx_destruct;
@end
