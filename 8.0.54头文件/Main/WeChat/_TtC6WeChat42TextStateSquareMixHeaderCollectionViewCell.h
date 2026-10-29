@interface _TtC6WeChat42TextStateSquareMixHeaderCollectionViewCell : UICollectionViewCell <TextStateMgrExt>
{
     squareReporter; // +0x8
     hostVC; // +0x10
     viewModel; // +0x18
     historyModel; // +0x20
     isViewLoaded; // +0x28
}
- (void)onTextStateUpdateForUserName:(id)arg1;
- (id)squareReporter;
- (void)setSquareReporter:(id)arg1;
- (id)historyModel;
- (void)setHistoryModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (double)prefferedHeidht;
- (void)updateDataWithAnimated:(BOOL)arg1;
- (void)didMoveToWindow;
- (id /* block */)onTapMoreHandler;
- (void)setOnTapMoreHandler:(id /* block */)arg1;
- (id /* block */)onTapPublishHandler;
- (void)setOnTapPublishHandler:(id /* block */)arg1;
- (void)setOnTapHistoryStatusWithHandelr:(id /* block */)arg1;
- (void)setOnTapRepublishWithHandler:(id /* block */)arg1;
- (void)setOnTapMessageBoxWithHandler:(id /* block */)arg1;
- (void)setOnUpdateHeightWithHandler:(id /* block */)arg1;
- (BOOL)showPublishFailTip;
- (void)setShowPublishFailTip:(BOOL)arg1;
- (BOOL)friendsHaveStatus;
- (void)setFriendsHaveStatus:(BOOL)arg1;
- (void)setMessageBoxInfo:(id)arg1;
- (id)myStatusListInfo;
- (void).cxx_destruct;
@end

