@interface ShakeMsgUnreadButton : UIButton <ShakeMgrExt>
{
    MMWebImageView * oIconImageView; // +0x8
}
- (id)init;
- (void)initView;
- (void)updateSubViews;
- (void)onShakeMsgUnreadCountChanged;
- (void).cxx_destruct;
@end
