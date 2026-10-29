@interface MMFinderLiveConnectedMicAudienceCellView : UITableViewCell
{
    MMFinderLiveConnectedMicBaseAudienceCellView * _baseView; // +0x8
}
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initBaseView;
- (void)prepareForReuse;
- (void)configNickNameLabel;
- (void)configSubTitleLabel;
- (void)updateWithConnectMicUser:(id)arg1 searchText:(id)arg2 subTitle:(id)arg3;
- (void)setActionDelegate:(id)arg1;
- (id)actionDelegate;
- (id)liveTask;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (void).cxx_destruct;
@end
