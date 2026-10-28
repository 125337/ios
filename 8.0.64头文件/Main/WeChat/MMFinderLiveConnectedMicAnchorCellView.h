@interface MMFinderLiveConnectedMicAnchorCellView : UITableViewCell
{
    MMFinderLiveConnectedMicBaseAnchorCellView * _baseView; // +0x8
}
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)configNickNameLabel;
- (void)configSubTitleLabel;
- (void)updateWithConnectMicUser:(id)arg1 searchInfo:(id)arg2 forceHideOperationButton:(BOOL)arg3 forceDisableOperationButton:(BOOL)arg4 hideBottomSeparatorLine:(BOOL)arg5;
- (void)setActionDelegate:(id)arg1;
- (id)actionDelegate;
- (id)liveTask;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (void).cxx_destruct;
@end
