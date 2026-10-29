@interface MMLiveGamePlayTogetherJoinTeamSettingItem : MMLiveGamePlayTogetherOperationItem
{
    unsigned int _curJoinTeamMode; // +0x8
    unsigned int _curCoinValue; // +0xc
    NSString * _labelText; // +0x10
}
- (double)heightForCell;
- (id)labelText;
- (void)setLabelText:(id)arg1;
- (unsigned int)curJoinTeamMode;
- (void)setCurJoinTeamMode:(unsigned int)arg1;
- (unsigned int)curCoinValue;
- (void)setCurCoinValue:(unsigned int)arg1;
- (void).cxx_destruct;
@end

