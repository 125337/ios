@interface GameCenterMsgListInteractMsgCell : GameCenterMsgListBaseCell
{
    RichTextView * _commentView; // +0x78
    MMUILabel * _descLabel; // +0x80
    MMWebImageView * _descImageView; // +0x88
    MMUILabel * _countLabel; // +0x90
}
+ (id)convertRichText:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupGameCenterMsgListInteractMsgCell;
- (void)updateWithCellData:(id)arg1;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)descImageView;
- (void)setDescImageView:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (void).cxx_destruct;
@end

