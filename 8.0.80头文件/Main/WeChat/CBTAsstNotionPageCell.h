@interface CBTAsstNotionPageCell : UICollectionViewCell
{
    UIImageView * _backgroundImageView; // +0x8
    UILabel * _bodyLabel; // +0x10
    UILabel * _dateLabel; // +0x18
    MMUIButton * _chatButton; // +0x20
    id /* block */ _chatAction; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)buildSubviews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithNotionText:(id)arg1 dateText:(id)arg2 backgroundImage:(id)arg3;
- (void)onChatButtonClick;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)bodyLabel;
- (void)setBodyLabel:(id)arg1;
- (id)dateLabel;
- (void)setDateLabel:(id)arg1;
- (id)chatButton;
- (void)setChatButton:(id)arg1;
- (id /* block */)chatAction;
- (void)setChatAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
