@interface FavActionSheet : MMScrollActionSheet <RecentForwardScrollViewDelegate, MMScrollActionSheetDelegate, MMImageOpenWeAppDelegate>
{
    NSMutableArray * m_itemArray; // +0x8
    NSMutableArray * m_firstRow; // +0x10
    NSMutableArray * m_secondRow; // +0x18
    long long m_enableItemType; // +0x20
    MMImageOpenWeAppLogic * m_openWeAppLogic; // +0x28
    id <FavActionSheetDelegate> _favDelegate; // +0x30
}
- (id)initWithFavDelegate:(id)arg1 enableType:(unsigned long long)arg2;
- (id)recentForwardView;
- (void)configRecentForwardScrollView;
- (void)configActionSheet;
- (void)configScanQRWith:(id)arg1;
- (void)configSheetItem;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3;
- (id)AddNewActionSheetCell2Array:(id)arg1 WithText:(id)arg2 WithImage:(id)arg3 WithAccessibilityLabel:(id)arg4;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)onAppendQRCodeMultiView:(id)arg1;
- (void)onQRCodeRowViewTapped;
- (void)onQRCodeRowViewBanned;
- (void)onQRCodeScansFinished;
- (id)favDelegate;
- (void)setFavDelegate:(id)arg1;
- (void).cxx_destruct;
@end

