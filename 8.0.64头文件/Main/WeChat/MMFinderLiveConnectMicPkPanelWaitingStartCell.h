@interface MMFinderLiveConnectMicPkPanelWaitingStartCell : UITableViewCell <MMFinderLiveConnectMicPkPanelCellBase>
{
    id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate; // +0x8
    UIView * _containerView; // +0x10
    UIImageView * _waitingImageView; // +0x18
    UILabel * _waitingLabel; // +0x20
    UIButton * _cancelBtn; // +0x28
    UIButton * _acceptBtn; // +0x30
    UIButton * _quitMicBtn; // +0x38
    MMFinderLiveConnectMicPKInfo * _pkInfo; // +0x40
}
+ (double)cellHeight;
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (void)layoutSubviews;
- (void)onCancelPk;
- (void)onAcceptPk;
- (void)onCloseMic;
- (void)updatePkInfo:(id)arg1;
- (void)prepareForReuse;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)waitingImageView;
- (void)setWaitingImageView:(id)arg1;
- (id)waitingLabel;
- (void)setWaitingLabel:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)acceptBtn;
- (void)setAcceptBtn:(id)arg1;
- (id)quitMicBtn;
- (void)setQuitMicBtn:(id)arg1;
- (id)pkInfo;
- (void)setPkInfo:(id)arg1;
- (void).cxx_destruct;
@end
