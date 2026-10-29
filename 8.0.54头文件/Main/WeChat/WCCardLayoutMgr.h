@interface WCCardLayoutMgr : MMObject <PBMessageObserverDelegate>
{
    WCCardLayoutStorage * _layoutStg; // +0x8
    unsigned int _waitLocationTime; // +0x10
    id <WCCardLayoutMgrDelegate> _delegate; // +0x18
    BOOL _bGettingLayout; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)loadLayoutStg;
- (id)getLayoutBuff;
- (id)getExpiringList;
- (id)getMemberCardList;
- (id)getNearByList;
- (id)getRecentList;
- (id)getLabelList;
- (id)getFirstList;
- (unsigned int)getTopScene;
- (void)clearLayoutRedDot;
- (BOOL)hasLayoutRedDot;
- (id)layoutTip;
- (BOOL)isGettingLayout;
- (id)getEntrySubTitle;
- (id)getCardsPkgElementList;
- (id)getMyCardPackageSvrRetEntryList;
- (unsigned int)getHomePageCardNum;
- (void)getCardLayoutByCGI:(id)arg1 Scene:(unsigned int)arg2;
- (id)GetPathOfWCCardLayoutStorage;
- (void)saveLayoutStg;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)logHomePageList;
- (void).cxx_destruct;
@end

