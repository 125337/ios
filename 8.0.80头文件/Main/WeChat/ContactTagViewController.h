@interface ContactTagViewController : TagViewController <IContactLabelMgrExt, ContactTagEditLogicDelegate>
{
    CContact * m_contact; // +0xc0
    ContactTagEditLogic * m_TagEditLogic; // +0xc8
    BOOL _bIsNeedReloadView; // +0xd0
    BOOL isAlreadyDisMissSelf; // +0xd1
    BOOL _needReloadWhenAppear; // +0xd2
    NSArray * _previousContactTagNameList; // +0xd8
}
- (id)initWithContact:(id)arg1;
- (void)dealloc;
- (void)onTouchView:(id)arg1;
- (void)OnMyCancel;
- (void)viewDidLoad;
- (id)rightBarButtonTitle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initData;
- (void)initView;
- (id)getAllTagNameList;
- (id)getContactTagNameList;
- (void)editCancel;
- (void)editDone:(id)arg1;
- (void)reportForTagEdit:(id)arg1 withAllTags:(id)arg2 contactTags:(id)arg3;
- (void)InternalDisMissSelfAnimated:(BOOL)arg1;
- (void)DismissTagViewControllerAnimated:(BOOL)arg1;
- (void)onJobForTagEditRet:(int)arg1;
- (void)buildAllTagsData:(id)arg1;
- (void)buildContactTagsData:(id)arg1;
- (void)reloadAllTags;
- (void)reloadCurrentTags;
- (void)onAllContactLabelUpdated:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (BOOL)needReloadWhenAppear;
- (void)setNeedReloadWhenAppear:(BOOL)arg1;
- (id)previousContactTagNameList;
- (void)setPreviousContactTagNameList:(id)arg1;
- (void).cxx_destruct;
@end
