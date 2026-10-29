@interface ShakeMsgTableViewCell : MMUIView
{
    MMWebImageView * oThumbImageView; // +0x8
    UILabel * oTitleLabel; // +0x10
    UILabel * oDescLabel; // +0x18
    UILabel * oTimeLabel; // +0x20
    ShakeMsgItem * oMsgItem; // +0x28
}
+ (double)heightForShakeMsgItem:(id)arg1 withCellSize:(CGSize)arg2;
- (id)initWithShakeMsgItem:(id)arg1 withCellSize:(CGSize)arg2;
- (void)showEdit:(BOOL)arg1;
- (void)initCellView;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end

