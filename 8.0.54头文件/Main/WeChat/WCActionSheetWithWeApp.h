@interface WCActionSheetWithWeApp : WCActionSheet
{
    NSString * _weAppButtonTitle; // +0x8
    NSMutableArray * _m_WeAppItemList; // +0x10
    NSMutableArray * _m_WeAppIconList; // +0x18
    UIView * _weAppSheetView; // +0x20
    UILabel * _weAppOpLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWeAppItemDatas:(id)arg1;
- (id)weAppDatas;
- (void)updateWeAppIcons;
- (id)getWeAppIcon;
- (void)reloadInnerView;
- (void)onSheetItem:(id)arg1 makeView:(id)arg2;
- (void)resetWeAppIcons;
- (id)weAppButtonTitle;
- (void)setWeAppButtonTitle:(id)arg1;
- (id)m_WeAppItemList;
- (void)setM_WeAppItemList:(id)arg1;
- (id)m_WeAppIconList;
- (void)setM_WeAppIconList:(id)arg1;
- (id)weAppSheetView;
- (void)setWeAppSheetView:(id)arg1;
- (id)weAppOpLabel;
- (void)setWeAppOpLabel:(id)arg1;
- (void).cxx_destruct;
@end

