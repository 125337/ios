@interface MMSMBaseViewController : UIViewController
{
    UIView * m_contentView; // +0x8
    UILabel * m_titleLabel; // +0x10
    UILabel * m_bodyLabel; // +0x18
    unsigned long long m_scene; // +0x20
    UIView * m_loadingBgView; // +0x28
    UIView * m_loadingBgViewSmall; // +0x30
    UIActivityIndicatorView * m_loadingView; // +0x38
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)isEnglish;
- (void)startLoadingBlocked;
- (void)stopLoading;
- (id)genBigGreenButton;
- (id)genBigGrayButton;
- (id)genBigButton;
- (unsigned long long)scene;
- (void).cxx_destruct;
@end

