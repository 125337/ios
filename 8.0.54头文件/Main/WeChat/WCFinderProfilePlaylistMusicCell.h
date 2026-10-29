@interface WCFinderProfilePlaylistMusicCell : UICollectionViewCell
{
    double _horizontalPadding; // +0x8
    UIImageView * _coverView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _summaryLabel; // +0x20
    UILabel * _durationLabel; // +0x28
    UIView * _bottomLine; // +0x30
    TingPlayStatusView * _statusView; // +0x38
    UIImageView * _playInfoIconView; // +0x40
    UILabel * _playInfoLabel; // +0x48
}
+ (CGSize)sizeThatFit:(CGSize)arg1 style:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setHiddenBottomLine:(BOOL)arg1;
- (BOOL)hiddenBottomLine;
- (void)useAllStyle;
- (void)useMusicStyle:(id)arg1 isPlaying:(BOOL)arg2 isAuthor:(BOOL)arg3;
- (void)useMusicStyle:(id)arg1 isPlaying:(BOOL)arg2 isLast:(BOOL)arg3 isAuthor:(BOOL)arg4;
- (double)horizontalPadding;
- (void)setHorizontalPadding:(double)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)summaryLabel;
- (void)setSummaryLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)playInfoIconView;
- (void)setPlayInfoIconView:(id)arg1;
- (id)playInfoLabel;
- (void)setPlayInfoLabel:(id)arg1;
- (void).cxx_destruct;
@end

