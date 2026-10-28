@interface MMUIBaseWindow : UIWindow
{
    NSHashTable * _stickerViews; // +0x8
}
- (void)didAddSubview:(id)arg1;
- (void)addStickerView:(id)arg1;
- (void)removeStickerView:(id)arg1;
- (id)stickerViews;
- (void)setStickerViews:(id)arg1;
- (void).cxx_destruct;
@end
