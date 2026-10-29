@interface MMFinderLiveKTVSongRequestedCell : MMFinderLiveKTVSongTableViewCell
{
    unsigned long long _state; // +0x8
    long long _position; // +0x10
    WCFinderHeadImageView * _avatorImageView; // +0x18
    MMUILabel * _musicSingerLabel; // +0x20
    MMUILabel * _scoreLabel; // +0x28
    MMUIImageView * _deleteLabel; // +0x30
    MMUIImageView * _setTopLabel; // +0x38
    MMUIButton * _myDeleteButton; // +0x40
}
+ (id)identifier;
- (void)customLayoutUI;
- (void)willAppear:(unsigned long long)arg1;
- (id)avatorImageView;
- (id)musicSingerLabel;
- (id)scoreLabel;
- (id)deleteLabel;
- (id)myDeleteButton;
- (id)setTopLabel;
- (void)onClickedDelete;
- (void)onClickedSetTop;
- (id)scoreLabelText;
- (void)setState:(unsigned long long)arg1;
- (BOOL)shouldHideSetTop;
- (BOOL)shouldHideDelete;
- (unsigned long long)state;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (void)setAvatorImageView:(id)arg1;
- (void)setMusicSingerLabel:(id)arg1;
- (void)setScoreLabel:(id)arg1;
- (void)setDeleteLabel:(id)arg1;
- (void)setSetTopLabel:(id)arg1;
- (void)setMyDeleteButton:(id)arg1;
- (void).cxx_destruct;
@end

