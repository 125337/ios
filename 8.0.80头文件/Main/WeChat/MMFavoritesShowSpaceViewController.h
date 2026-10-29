@interface MMFavoritesShowSpaceViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    CleanBtn * m_cleanSpaceBtn; // +0x70
    MMUILabel * m_warningLabel; // +0x78
    MMUIView * m_cleanBtnlineTop; // +0x80
    MMUIView * m_cleanBtnlineBottom; // +0x88
    MMUIView * m_cubeline; // +0x90
    NSString * m_sessionId; // +0x98
    int _bannerType; // +0xa0
    MMUILabel * _capcityInfo; // +0xa8
    MMUIView * _mainView; // +0xb0
    MMUIView * _used; // +0xb8
}
- (id)init;
- (id)initWithWarningType:(int)arg1;
- (void)viewDidLoad;
- (int)getCapcityReportStatus;
- (void)goToCapcityView;
- (void)didClickAtCloseButton;
- (void)viewWillAppear:(BOOL)arg1;
- (id)capcityInfo;
- (void)setCapcityInfo:(id)arg1;
- (id)mainView;
- (void)setMainView:(id)arg1;
- (id)used;
- (void)setUsed:(id)arg1;
- (int)bannerType;
- (void)setBannerType:(int)arg1;
- (void).cxx_destruct;
@end
