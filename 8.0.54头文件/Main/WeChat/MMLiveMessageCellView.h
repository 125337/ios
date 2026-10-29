@interface MMLiveMessageCellView : CommonMessageCellView
{
    MMUILabel * _liveNameLabel; // +0xa8
    MMUILabel * _liveStatusLabel; // +0xb0
    MMUIImageView * _liveIconAnimatedView; // +0xb8
    MMUIImageView * _liveIconView; // +0xc0
    MMUILabel * _liveSourceLabel; // +0xc8
    UIView * _seperatorLineView; // +0xd0
}
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)initBgImageView;
- (void)layoutDefault;
- (id)liveNameLabel;
- (id)liveStatusLabel;
- (id)seperatorLineView;
- (id)liveSourceLabel;
- (id)liveIconAnimatedView;
- (id)liveIconView;
- (void)reloadData;
- (void)updateLiveLogoStatus;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)setLiveNameLabel:(id)arg1;
- (void)setLiveStatusLabel:(id)arg1;
- (void)setLiveIconAnimatedView:(id)arg1;
- (void)setLiveIconView:(id)arg1;
- (void)setLiveSourceLabel:(id)arg1;
- (void)setSeperatorLineView:(id)arg1;
- (void).cxx_destruct;
@end

