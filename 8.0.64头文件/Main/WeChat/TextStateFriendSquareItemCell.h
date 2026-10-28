@interface TextStateFriendSquareItemCell : UICollectionViewCell
{
    BOOL _read; // +0x8
    TextStateModel * _textState; // +0x10
    MMHeadImageView * _headImageView; // +0x18
    MMUILabel * _nicknameLabel; // +0x20
}
+ (CGSize)itemSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setTextState:(id)arg1;
- (void)setRead:(BOOL)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (id)textState;
- (BOOL)isRead;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (void).cxx_destruct;
@end
