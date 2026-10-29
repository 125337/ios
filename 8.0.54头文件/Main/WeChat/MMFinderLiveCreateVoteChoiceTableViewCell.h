@interface MMFinderLiveCreateVoteChoiceTableViewCell : MMFinderLiveDeletableInputTableViewCell <UITextFieldDelegate>
{
    MMFinderLiveLiveVoteChoice * _choice; // +0x8
}
+ (id)reuseId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setIsAddCell:(BOOL)arg1;
- (void)customLayoutSubviews;
- (void)prepareForReuse;
- (void)configWithChoice:(id)arg1;
- (id)getCurrentSongName;
- (long long)textFieldWordLimit;
- (void)textFieldDidChangeContent:(id)arg1;
- (void)customizeTextField:(id)arg1;
- (id)choice;
- (void)setChoice:(id)arg1;
- (void).cxx_destruct;
@end

