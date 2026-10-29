@interface WCFinderNearbyLiveAnchorsLiveCell : UICollectionViewCell
{
    id /* block */ _clickStartLiveBlock; // +0x8
    WCFinderLiveIconImageView * _iconImageView; // +0x10
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)startLive;
- (id /* block */)clickStartLiveBlock;
- (void)setClickStartLiveBlock:(id /* block */)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (void).cxx_destruct;
@end

