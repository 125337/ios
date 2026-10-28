@interface MMFinderLiveConnectedMicAudienceCellView : UITableViewCell
{
    MMFinderLiveConnectedMicBaseAudienceCellView * _baseView; // +0x8
}
+ (double)cellHeightWithDescText:(id)arg1 expandDescIfNeeded:(BOOL)arg2 cellWidth:(double)arg3;
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initBaseView;
- (void)prepareForReuse;
- (void)configNickNameLabel;
- (void)configSubTitleLabel;
- (void)updateWithConnectMicUser:(id)arg1 searchText:(id)arg2 subTitle:(id)arg3;
- (void)updateWithPaidPrice:(unsigned long long)arg1 descText:(id)arg2 warningText:(id)arg3 expandDescIfNeeded:(BOOL)arg4;
- (void)setActionDelegate:(id)arg1;
- (id)actionDelegate;
- (id)liveTask;
- (void)setExpandStateShouldChange:(id /* block */)arg1;
- (id /* block */)expandStateShouldChange;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (void).cxx_destruct;
@end
