@interface GameShareNameCardCellView : CommonMessageCellView <MMImageLoaderObserver>
{
    UIImageView * _headImageView; // +0xb8
    UILabel * _nameLabel; // +0xc0
    UILabel * _descLabel; // +0xc8
}
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)initNicknameLabel;
- (void)initDescLabel;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
