@interface GameCenterMsgListNoticeMsgCell : GameCenterMsgListBaseCell
{
    MMWebImageView * _postImageView; // +0x78
    MMUIView * _textBackView; // +0x80
    MMUILabel * _briefLabel; // +0x88
    MMUILabel * _detailLabel; // +0x90
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupGameCenterMsgListNoticeMsgCell;
- (void)updateWithCellData:(id)arg1;
- (id)postImageView;
- (void)setPostImageView:(id)arg1;
- (id)textBackView;
- (void)setTextBackView:(id)arg1;
- (id)briefLabel;
- (void)setBriefLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (void).cxx_destruct;
@end

