@interface MMFinderHistoryLiveInfoCell : MMTableViewCell
{
    BOOL _isSelfAnchor; // +0x8
    MMUILabel * _liveTimeLabel; // +0x10
    MMUILabel * _liveDescriptionLabel; // +0x18
    MMUIImageView * _liveIconView; // +0x20
    MMUILabel * _viewersLabel; // +0x28
    FinderHistoryLiveInfo * _historyLiveInfo; // +0x30
    MMUIImageView * _arrowIconView; // +0x38
    id <MMFinderHistoryLiveInfoCellDelegate> _logicDelegate; // +0x40
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithHistoryLiveInfo:(id)arg1 isSelfAnchor:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)liveTimeLabel;
- (void)setLiveTimeLabel:(id)arg1;
- (id)liveDescriptionLabel;
- (void)setLiveDescriptionLabel:(id)arg1;
- (id)liveIconView;
- (void)setLiveIconView:(id)arg1;
- (id)viewersLabel;
- (void)setViewersLabel:(id)arg1;
- (id)historyLiveInfo;
- (void)setHistoryLiveInfo:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (BOOL)isSelfAnchor;
- (void)setIsSelfAnchor:(BOOL)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (void).cxx_destruct;
@end
