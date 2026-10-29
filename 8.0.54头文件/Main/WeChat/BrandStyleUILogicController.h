@interface BrandStyleUILogicController : MMObject
{
    CContact * m_contact; // +0x8
    id <BrandStyleUILogicControllerDelegate> m_delegate; // +0x10
    NSMutableDictionary * _extInfo; // +0x18
}
- (id)initWithContact:(id)arg1 WithDelegate:(id)arg2;
- (void)updateIfViewWillInit;
- (void)updateIfViewDidInit;
- (void)updateIfViewWillAppear;
- (void)updateIfViewDidAppear;
- (void)updateIfViewWillDisappear;
- (void)updateIfCreateToolView:(id)arg1 inputPresenter:(id)arg2;
- (void)startReceiveMsg:(id)arg1;
- (BOOL)isNoNeedShowNormalToolView;
- (void)addSessionToTop;
- (void)adjustToolViewComponent;
- (BOOL)getLastMenuMode;
- (void)setLastMenuMode:(BOOL)arg1;
- (double)getCustomizedAreaWidth;
- (BOOL)shouldHideOrginInputToolView;
- (BOOL)shouldSaveAchievedImageMd5;
- (void)processImageDidCancel;
- (void)processImageDidFinish;
- (void)saveAchievedImageMd5:(id)arg1;
- (void)processLocationDidFinish;
- (void)addMsgForUsr:(id)arg1;
- (void)removeCustomToolView;
- (id)getBrandContact;
- (id)getBrandLogicController;
- (id)getBrandViewController;
- (id)getWholeView;
- (id)getOutterToolView;
- (id)getOutterInputPresenter;
- (id)getInnerToolView;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

