@interface WCFinderCollectionInfoView : UIView
{
    id <WCFinderCollectionInfoViewDelegate> _delegate; // +0x8
    WCFinderContinueCollectionModel * _model; // +0x10
    MMWebImageView * _iconView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _subTitleLabel; // +0x28
    UITapGestureRecognizer * _tapGes; // +0x30
    UILongPressGestureRecognizer * _longGes; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWatchingCollectionModel:(id)arg1;
- (void)updateLayoutView;
- (void)reportExposer;
- (void)gotoCollection;
- (void)goCollectionFeedListWithDataFetcher:(id)arg1 destinationFeedID:(id)arg2 autoPresentCollectionHalfScreen:(BOOL)arg3 username:(id)arg4;
- (void)handleLongPress:(id)arg1;
- (id)tapGes;
- (id)longGes;
- (id)iconView;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setTapGes:(id)arg1;
- (void)setLongGes:(id)arg1;
- (void).cxx_destruct;
@end
