@interface MMStoreEmotionDesignerPackSelectViewController : MMStoreEmoticonDesignerPackBaseViewController
{
    id <MMStoreEmotionDesignerPackSelectViewControllerDelegate> _delegate; // +0x70
}
- (void)initNavBar;
- (BOOL)shouldUseRichStyle;
- (BOOL)shouldRemoveExpiredPack;
- (unsigned long long)currentDesignerEmoticonPackTapEventType;
- (void)onTapEmoticonWithItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
