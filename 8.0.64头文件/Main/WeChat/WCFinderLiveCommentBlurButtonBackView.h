@interface WCFinderLiveCommentBlurButtonBackView : WCLiveBlurButtonBackView
{
    BOOL _isOpenPivateMsg; // +0x8
    BOOL _isDisplayPivateMsg; // +0x9
    UIView * _privateMsgAreaView; // +0x10
    UIView * _seperateLineView; // +0x18
    UIImageView * _privateMsgIconView; // +0x20
}
- (void)layoutUI;
- (void)layoutPrivateMsgAreaView;
- (void)layoutSeperateLineView;
- (void)layoutPrivateMsgIconView;
- (void)setIsOpenPivateMsg:(BOOL)arg1;
- (void)updateUIForOpenPrivateMsgChanged;
- (void)setIsDisplayPivateMsg:(BOOL)arg1;
- (void)updateUIForDisplayPrivateMsgChanged;
- (void)updateOpenPivateMsgWithPercent:(double)arg1;
- (void)forceLayoutIfNeed;
- (BOOL)isOpenPivateMsg;
- (BOOL)isDisplayPivateMsg;
- (id)privateMsgAreaView;
- (void)setPrivateMsgAreaView:(id)arg1;
- (id)seperateLineView;
- (void)setSeperateLineView:(id)arg1;
- (id)privateMsgIconView;
- (void)setPrivateMsgIconView:(id)arg1;
- (void).cxx_destruct;
@end
