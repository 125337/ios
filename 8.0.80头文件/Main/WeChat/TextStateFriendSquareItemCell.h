@interface TextStateFriendSquareItemCell : UICollectionViewCell
{
    BOOL _read; // +0x8
    TextStateModel * _textState; // +0x10
    NSIndexPath * _indexPath; // +0x18
    MMHeadImageView * _headImageView; // +0x20
    MMUILabel * _nicknameLabel; // +0x28
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
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (void).cxx_destruct;
@end
