@interface GameCenterMsgListBaseCell : GameCenterMsgListRawBaseCell <RichTextLayoutDelegate>
{
    MMHeadImageView * _headView; // +0x60
    MMCPLabel * _nickView; // +0x68
    MMUILabel * _timeView; // +0x70
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupGameCenterMsgListBaseCell;
- (void)updateWithCellData:(id)arg1;
- (void)onClickHeadView;
- (void)onClickNickView;
- (void)layoutSubviews;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)nickView;
- (void)setNickView:(id)arg1;
- (id)timeView;
- (void)setTimeView:(id)arg1;
- (void).cxx_destruct;
@end
