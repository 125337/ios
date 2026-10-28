@interface MMFinderLiveAddSongItemTableViewCell : MMFinderLiveDeletableInputTableViewCell <UITextFieldDelegate>
{
    MMFinderLiveSongItem * _item; // +0x8
    UILabel * _warningLabel; // +0x10
}
+ (double)heightWithItem:(id)arg1 maxWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configWithSongItem:(id)arg1;
- (long long)textFieldWordLimit;
- (void)customizeTextField:(id)arg1;
- (void)customLayoutSubviews;
- (id)warningLabel;
- (id)getCurrentSongName;
- (void)textFieldDidChangeContent:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setWarningLabel:(id)arg1;
- (void).cxx_destruct;
@end
