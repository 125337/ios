@interface WCFinderLiveReplayMomentsViewCell : UICollectionViewCell
{
    BOOL _hideSeperatorLine; // +0x8
    MMFinderLiveReplayGreateTimeModel * _replayMoment; // +0x10
    MMWebImageView * _momentImageView; // +0x18
    UIImageView * _playImageView; // +0x20
    MMUILabel * _momentTimeLabel; // +0x28
    UIView * _seperatorLine; // +0x30
    MMUILabel * _momentDescLabel; // +0x38
}
+ (double)extraTopInset;
+ (double)momentCellsSpace;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateReplayMoment:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)prepareForReuse;
- (void)layoutMomentImageView;
- (void)setHideSeperatorLine:(BOOL)arg1;
- (id)replayMoment;
- (void)setReplayMoment:(id)arg1;
- (BOOL)hideSeperatorLine;
- (id)momentImageView;
- (void)setMomentImageView:(id)arg1;
- (id)playImageView;
- (void)setPlayImageView:(id)arg1;
- (id)momentTimeLabel;
- (void)setMomentTimeLabel:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)momentDescLabel;
- (void)setMomentDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

