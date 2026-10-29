@interface WCFinderTingMusicViewModel : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCFinderMusicTopicDataProviderExt, WCFinderPostDataItemExt>
{
    BOOL _singerSignatureExpand; // +0x8
    id <WCFinderTingMusicViewModelDelegate> _delegate; // +0x10
    double _menuExpTime; // +0x18
    WCFinderMusicTopicDataProvider * _dataProvider; // +0x20
    FinderMusicTopicInfo * _musicTopicInfo; // +0x28
    MMListenCategoryItem * _listenCategoryItem; // +0x30
    NSArray * _singerInfoArray; // +0x38
    NSArray * _tabInfoArray; // +0x40
    ForwardMessageLogicController * _forwardLogic; // +0x48
    NSMutableArray * _listenItemArray; // +0x50
    NSMutableArray * _sectionArray; // +0x58
}
+ (int)getMusicVideoInnerType;
+ (int)getRelatedInnerType;
- (id)initWithMusicTopicId:(unsigned long long)arg1 encryptedMusicId:(id)arg2 byPassInfo:(id)arg3 commentScene:(int)arg4 refObjectid:(id)arg5;
- (id)listenItemArray;
- (id)sectionArray;
- (unsigned long long)musicTopicId;
- (void)requestMusicTopicInfoList;
- (void)updateTabInfoArray;
- (id)defaultTabInfoArray;
- (id)eventTabInfoWithType:(unsigned long long)arg1;
- (void)fetchTabVideosInfoByInnerTabArray:(id)arg1 singerContact:(id)arg2;
- (BOOL)containTargetInnerType:(int)arg1;
- (id)createMusicianWorksListPromiseByFinderUsername:(id)arg1;
- (BOOL)svrDataAvailable;
- (id)getCurrentViewController;
- (void)shareToFriend:(id)arg1;
- (void)shareToMoment:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)getListenItemArray;
- (BOOL)isLastListenItem:(long long)arg1;
- (BOOL)shouldShowMusicianListAllBtn;
- (BOOL)hasFinderSingerInfo;
- (void)getContactWithNickname:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (id)getMusicListenItemAtIndex:(long long)arg1;
- (id)getMusicVideoContentVMArray;
- (id)getMusicVideoDetailListViewMode;
- (id)getRelatedVideoContentVMArray;
- (id)getRelatedVideoDetailListViewMode;
- (BOOL)enableShowMusicianIntro;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)getMusicianListCount;
- (void)addSectionToArray:(unsigned long long)arg1;
- (unsigned long long)sectionTypeBySection:(long long)arg1;
- (void)onMusicDataProviderFetchSuc:(int)arg1;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (id)eventTabInfoAtIndex:(unsigned long long)arg1;
- (long long)indexOfTabType:(int)arg1;
- (void)updateLikeState:(BOOL)arg1;
- (id)refObjectId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)menuExpTime;
- (void)setMenuExpTime:(double)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (id)listenCategoryItem;
- (void)setListenCategoryItem:(id)arg1;
- (id)singerInfoArray;
- (void)setSingerInfoArray:(id)arg1;
- (id)tabInfoArray;
- (void)setTabInfoArray:(id)arg1;
- (BOOL)singerSignatureExpand;
- (void)setSingerSignatureExpand:(BOOL)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (void)setListenItemArray:(id)arg1;
- (void)setSectionArray:(id)arg1;
- (void).cxx_destruct;
@end
