@interface FavTextDetailViewController : FavBaseDetailViewController <FavActionSheetDelegate, ILinkEventExt, IFavoritesExt, FavForwardLogicDelegate, WCActionSheetDelegate>
{
    RichTextView * m_textLabel; // +0x78
    NSString * m_nsText; // +0x80
    NSString * m_copyedText; // +0x88
    double m_cacheTextHeight; // +0x90
    double m_cacheWidth; // +0x98
}
- (void)dealloc;
- (void)viewDidLoad;
- (unsigned long long)getParserType;
- (void)initTextLabel;
- (void)viewDidLayoutSubviews;
- (long long)getRowsInContentSection;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onAction:(id)arg1;
- (id)getCurrentViewController;
- (void)onFavActionSheetSelectedForwardToUser:(id)arg1;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppMPShortLinkLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onCopy:(id)arg1;
- (void)showMenuItemForText:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppMPShortLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)getFavForawrdViewController;
- (void).cxx_destruct;
@end

